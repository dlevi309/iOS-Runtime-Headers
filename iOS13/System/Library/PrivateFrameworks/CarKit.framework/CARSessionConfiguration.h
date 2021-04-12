/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@class NSString, NSArray;

@interface CARSessionConfiguration : NSObject {

	BOOL _vehicleSupportsDestinationSharing;
	BOOL _vehicleSupportsGasoline;
	BOOL _vehicleSupportsDiesel;
	BOOL _vehicleSupportsElectric;
	BOOL _vehicleSupportsCNG;
	BOOL _rightHandDrive;
	BOOL _nightModeSupported;
	BOOL _supportsElectronicTollCollection;
	BOOL _supportsACBack;
	BOOL _supportsSiriZLL;
	BOOL _supportsSiriZLLButton;
	BOOL _supportsSiriMixable;
	BOOL _manufacturerIconVisible;
	BOOL _hasAccessory;
	NSString* _name;
	NSString* _modelName;
	NSString* _manufacturerName;
	NSString* _vehicleName;
	NSString* _vehicleModelName;
	NSString* _vehicleSerialNumber;
	NSString* _vehicleManufacturer;
	NSString* _vehicleFirmwareVersion;
	NSString* _vehicleHardwareVersion;
	NSString* _PPID;
	unsigned long long _transportType;
	NSArray* _screens;
	NSArray* _screenIDs;
	unsigned long long _limitableUserInterfaces;
	NSString* _endpointIdentifier;
	unsigned long long _voiceTriggerMode;
	long long _nowPlayingAlbumArtMode;
	long long _userInterfaceStyle;
	NSString* _manufacturerIconLabel;
	NSArray* _manufacturerIcons;
	NSEdgeInsets _viewAreaInsets;
	NSEdgeInsets _dashboardRoundedCorners;

}

@property (assign,nonatomic) BOOL hasAccessory;                                         //@synthesize hasAccessory=_hasAccessory - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * modelName;                               //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturerName;                        //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleName;                             //@synthesize vehicleName=_vehicleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleModelName;                        //@synthesize vehicleModelName=_vehicleModelName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleSerialNumber;                     //@synthesize vehicleSerialNumber=_vehicleSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleManufacturer;                     //@synthesize vehicleManufacturer=_vehicleManufacturer - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleFirmwareVersion;                  //@synthesize vehicleFirmwareVersion=_vehicleFirmwareVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleHardwareVersion;                  //@synthesize vehicleHardwareVersion=_vehicleHardwareVersion - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsDestinationSharing;                  //@synthesize vehicleSupportsDestinationSharing=_vehicleSupportsDestinationSharing - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsGasoline;                            //@synthesize vehicleSupportsGasoline=_vehicleSupportsGasoline - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsDiesel;                              //@synthesize vehicleSupportsDiesel=_vehicleSupportsDiesel - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsElectric;                            //@synthesize vehicleSupportsElectric=_vehicleSupportsElectric - In the implementation block
@property (nonatomic,readonly) BOOL vehicleSupportsCNG;                                 //@synthesize vehicleSupportsCNG=_vehicleSupportsCNG - In the implementation block
@property (nonatomic,copy,readonly) NSString * PPID;                                    //@synthesize PPID=_PPID - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * screens;                                  //@synthesize screens=_screens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * screenIDs;                                //@synthesize screenIDs=_screenIDs - In the implementation block
@property (nonatomic,readonly) BOOL rightHandDrive;                                     //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (nonatomic,readonly) unsigned long long limitableUserInterfaces;              //@synthesize limitableUserInterfaces=_limitableUserInterfaces - In the implementation block
@property (nonatomic,readonly) BOOL nightModeSupported;                                 //@synthesize nightModeSupported=_nightModeSupported - In the implementation block
@property (nonatomic,readonly) BOOL supportsElectronicTollCollection;                   //@synthesize supportsElectronicTollCollection=_supportsElectronicTollCollection - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpointIdentifier;                      //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long voiceTriggerMode;                     //@synthesize voiceTriggerMode=_voiceTriggerMode - In the implementation block
@property (nonatomic,readonly) long long nowPlayingAlbumArtMode;                        //@synthesize nowPlayingAlbumArtMode=_nowPlayingAlbumArtMode - In the implementation block
@property (nonatomic,readonly) NSEdgeInsets viewAreaInsets;                             //@synthesize viewAreaInsets=_viewAreaInsets - In the implementation block
@property (nonatomic,readonly) NSEdgeInsets dashboardRoundedCorners;                    //@synthesize dashboardRoundedCorners=_dashboardRoundedCorners - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                            //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) BOOL supportsACBack;                                     //@synthesize supportsACBack=_supportsACBack - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiriZLL;                                    //@synthesize supportsSiriZLL=_supportsSiriZLL - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiriZLLButton;                              //@synthesize supportsSiriZLLButton=_supportsSiriZLLButton - In the implementation block
@property (nonatomic,readonly) BOOL supportsSiriMixable;                                //@synthesize supportsSiriMixable=_supportsSiriMixable - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturerIconLabel;                   //@synthesize manufacturerIconLabel=_manufacturerIconLabel - In the implementation block
@property (nonatomic,readonly) BOOL manufacturerIconVisible;                            //@synthesize manufacturerIconVisible=_manufacturerIconVisible - In the implementation block
@property (nonatomic,readonly) NSArray * manufacturerIcons;                             //@synthesize manufacturerIcons=_manufacturerIcons - In the implementation block
+(unsigned long long)_limitableUserInterfacesFromLimitedUIValues:(id)arg1 ;
+(id)_descriptionForTransportType:(unsigned long long)arg1 ;
+(id)descriptionForCapability:(long long)arg1 ;
+(id)descriptionForUserInterfaceStyle:(long long)arg1 ;
+(id)descriptionForEdgeInsets:(NSEdgeInsets)arg1 ;
-(id)description;
-(NSString *)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(unsigned long long)transportType;
-(long long)userInterfaceStyle;
-(NSArray *)screens;
-(BOOL)rightHandDrive;
-(unsigned long long)limitableUserInterfaces;
-(NSString *)modelName;
-(NSString *)manufacturerName;
-(NSArray *)screenIDs;
-(BOOL)nightModeSupported;
-(BOOL)hasAccessory;
-(NSString *)endpointIdentifier;
-(NSString *)vehicleName;
-(NSString *)vehicleModelName;
-(NSString *)PPID;
-(id)initWithPropertySupplier:(/*^block*/id)arg1 ;
-(unsigned long long)voiceTriggerMode;
-(void)updateCarCapabilities;
-(long long)nowPlayingAlbumArtMode;
-(NSEdgeInsets)viewAreaInsets;
-(NSEdgeInsets)dashboardRoundedCorners;
-(NSString *)vehicleManufacturer;
-(NSString *)vehicleSerialNumber;
-(id)descriptionForTransportType;
-(BOOL)supportsElectronicTollCollection;
-(id)descriptionForLimitableUserInterfaces;
-(NSString *)manufacturerIconLabel;
-(BOOL)manufacturerIconVisible;
-(BOOL)supportsACBack;
-(id)descriptionForVoiceTriggerMode;
-(id)screenInfoForScreenID:(id)arg1 ;
-(NSString *)vehicleFirmwareVersion;
-(NSString *)vehicleHardwareVersion;
-(BOOL)vehicleSupportsDestinationSharing;
-(BOOL)vehicleSupportsGasoline;
-(BOOL)vehicleSupportsDiesel;
-(BOOL)vehicleSupportsElectric;
-(BOOL)vehicleSupportsCNG;
-(BOOL)supportsSiriZLL;
-(BOOL)supportsSiriZLLButton;
-(BOOL)supportsSiriMixable;
-(NSArray *)manufacturerIcons;
-(void)setHasAccessory:(BOOL)arg1 ;
@end

