namespace offsets {
  // General Offsets
  uintptr_t uworld_state          =     0x9005C00;             // @image_base
  uintptr_t uworld_key            =     uworld_state + 0x38;   // @image_base + (uworld_state + 0x38)
  
  uintptr_t gobj_state            =     0x8E73B00;             // @image_base
  uintptr_t gobj_key              =     gobj_state + 0x38;     // @image_base + (gobj_state + 0x38)
  
  uintptr_t find_object           =     0x33605F0;             // @image_base
  uintptr_t process_event         =     0x33223E0;             // @image_base
  
  uintptr_t bone_matrix           =     0x49A7EF0;             // @image_base
  
  uintptr_t line_of_sight         =     0x49DC300;             // @image_base
  uintptr_t skin_changer_decrypt  =     0x23DCD00;             // @image_base
  uintptr_t veh_deref             =     0x1B6D880;             // deref_pointer_in_game_space_fn - https://www.unknowncheats.me/forum/valorant/503616-dumping-valorant-perfect-results-easy.html

  uintptr_t enemy_outline_color   =     0x8F20B80;             // @image_base (FLinearColor)
  uintptr_t ally_outline_color    =     0x8F1F2A0;             // @image_base (FLinearColor)
  
  uintptr_t proj_world_to_screen  =     0x52da250;             // @image_base
  uintptr_t get_actor_bounds      =     0x507d630;             // @image_base
  
  // VTables
  
  // World
  uintptr_t persistent_level      =     0x38;                  // @uworld (ULevel)
  uintptr_t owning_game_instance  =     0x1A0;                 // @uworld (UGameInstance)    
  uintptr_t game_state            =     0x140;                 // @uworld (AGameStateBase)
  uintptr_t levels                =     0x158;                 // @uworld (TArray<struct ULevel*>)
  
  // Game Instance
  uintptr_t local_players         =     0x40;                  // @game_instance (TArray<struct ULocalPlayer*>)
  
  // Level
  uintptr_t actor_array           =     0xA0;                  // @level
  uintptr_t actor_count           =     actor_array + 0x18;    // @level + (actor_array + 0x18)
  
  // Local Player
  uintptr_t viewport_client       =     0x78;                  // @local_player (UGameViewportClient)
  uintptr_t player_controller     =     0x38;                  // @local_player (APlayerController)
  
  // Player Controller
  uintptr_t acknowledged_pawn     =     0x460;                 // @player_controller (APawn)
  uintptr_t player_camera         =     0x478;                 // @player_controller (APlayerCameraManager)
  uintptr_t control_rotation      =     0x440;                 // @player_controller (FRotator)
  
  // Player Pawn
  uintptr_t root_component        =     0x230;                 // @player_pawn (USceneComponent)
  uintptr_t damage_handler        =     0x9b0;                 // @player_pawn (UDamageableComponent)
  uintptr_t actor_id              =     0x18;                  // @player_pawn (int)
  uintptr_t fname_id              =     0x38;                  // @player_pawn (int)
  uintptr_t dormant               =     0x100;                 // @player_pawn (bool)
  uintptr_t player_state          =     0x3F0;                 // @player_pawn (APlayerState)
  uintptr_t current_mesh          =     0x430;                 // @player_pawn (USkeletalMeshComponent)
  uintptr_t outline_component     =     0x10e8;                // @player_pawn (UAresOutlineComponent)
  uintptr_t portrait_map          =     0x10c0;                // @player_pawn (UCharacterPortraitMinimapComponent_C)
  uintptr_t character_map         =     portrait_map + 0x8;    // @player_pawn (UShooterCharacterMinimapComponent_C)
  
  // Minimap Component
  uintptr_t local_observer        =     0x530;                 // @player_pawn (bool)
  uintptr_t is_visible            =     0x501;                 // @player_pawn (bool)
  
  // Mesh
  uintptr_t component_to_world    =     0x250;                 // @mesh (FTransform)
  uintptr_t bone_array            =     0x5c0;                 // @mesh (FBoxSphereBounds)
  uintptr_t bone_count            =     bone_array + 0x8;      // @mesh (int)
  uintptr_t last_sub_time         =     0x378;
  uintptr_t last_render_time      =     last_sub_time + 0x4;   // @mesh + (last_sub_time + 0x4)
  uintptr_t outline_mode          =     0x330;                 // @mesh (int)
  uintptr_t attach_children       =     0x110;                 // @mesh (TArray<struct UMesh*>)
  uintptr_t attach_children_count =     attach_children + 0x8; // @mesh (int)
  
  // Player State
  uintptr_t team_component        =     0x628;                 // @player_state (UBaseTeamComponent)
  
  // Team Component
  uintptr_t team_id               =     0xF8;                  // @team_component (int)
  
  // Damage Handler               
  uintptr_t current_health        =     0x1B0;                 // @damage_handler (float)
  uintptr_t max_life              =     current_health + 0x4;  // @damange_handler + (current_health + 0x4)

  // Root Component
  uintptr_t relative_location     =     0x164;                 // @root_component (FVector)
  uintptr_t relative_rotation     =     0x170;                 // @root_component (FRotator)
  
  // Camera Manager
  uintptr_t default_fov           =     0x3ec;                 // @camera (float)
  uintptr_t camera_cache          =     0x510;                 // @camera (FCameraCacheEntry)
  
  // FCameraCacheEntry
  uintptr_t pov                   =     0x10;                  // @camera_cache (FMinimalViewInfo)
  
  // FMinimalViewInfo
  uintptr_t location              =     0x0;                   // @view_info + 0x0 = Location (FVector)
  uintptr_t rotation              =     0x0c;                  // @view_info (FRotator)
  uintptr_t current_fov           =     0x18;                  // @view_info (float)

  // Outline Component
  uintptr_t enemy_outline         =     0x2B1;                 // @outline_component (int)
}
