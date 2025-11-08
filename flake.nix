{
  description = "Automated Cat Feeder Development Environment";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs }: 
    let
      # Detect system automatically
      system = "aarch64-darwin"; # This will be auto-detected, but explicit for clarity
      
      pkgs = nixpkgs.legacyPackages.${system};
    in {
      devShells.${system}.default = pkgs.mkShell {
        buildInputs = with pkgs; [
          gcc-arm-embedded
          cmake
          python3
          picotool
          openocd
          # Add any other RP2040 dependencies you need
        ];
        
        shellHook = ''
          echo "=== RP2040/Raspberry Pi Pico Development Environment ==="
          echo "ARM GCC: $(arm-none-eabi-gcc --version | head -n1)"
          echo "CMake: $(cmake --version | head -n1)"
          
          # Fix for CMake on macOS with ARM embedded compiler
          export CMAKE_OSX_ARCHITECTURES=""
          export CMAKE_OSX_DEPLOYMENT_TARGET=""
          
          echo "Environment ready for Pi development"
        '';
      };
    };
}