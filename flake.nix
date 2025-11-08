{
  description = "Raspberry Pi 3 Cross-Compilation Environment";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  };

  outputs = { self, nixpkgs }: 
    let
      system = "aarch64-darwin"; # Your macOS system
      pkgs = nixpkgs.legacyPackages.${system};
      
      # Cross-compilation toolchain for Raspberry Pi 3 (ARMv7)
      raspberrypiToolchain = pkgs.pkgsCross.armv7l-hf-multiplatform;
      
    in {
      devShells.${system}.default = pkgs.mkShell {
        buildInputs = with pkgs; [
          # Cross-compilation tools
          raspberrypiToolchain.stdenv.cc
          cmake
          pkg-config
          
          # Libraries that might be needed
          raspberrypiToolchain.glibc
        ];
        
        shellHook = ''
          echo "=== Raspberry Pi 3 Cross-Compilation Environment ==="
          echo "Cross-compiler: $(armv7l-unknown-linux-gnueabihf-gcc --version | head -n1)"
          
          # Set up cross-compilation environment
          export CC=armv7l-unknown-linux-gnueabihf-gcc
          export CXX=armv7l-unknown-linux-gnueabihf-g++
          
          echo "Ready to cross-compile for Raspberry Pi 3"
        '';
      };
    };
}