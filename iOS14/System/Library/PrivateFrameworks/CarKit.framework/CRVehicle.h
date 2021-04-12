/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSData, NSDate;

@interface CRVehicle : NSObject <NSSecureCoding> {

	BOOL _supportsEnhancedIntegration;
	BOOL _supportsUSBCarPlay;
	BOOL _supportsWirelessCarPlay;
	BOOL _supportsStartSessionRequest;
	NSUUID* _identifier;
	NSString* _vehicleName;
	NSSet* _accessoryProtocols;
	unsigned long long _enhancedIntegrationStatus;
	NSData* _certificateSerialNumber;
	unsigned long long _pairingStatus;
	NSString* _bluetoothAddress;
	NSString* _carplayWiFiUUID;
	NSDate* _lastConnectedDate;
	NSString* _vehicleModelName;
	NSString* _PPID;
	NSString* _internalNotes;
	long long _albumArtUserPreference;
	NSString* _wallpaperIdentifier;
	NSString* _previousWallpaperIdentifier;
	long long _appearanceModePreference;

}

@property (nonatomic,retain) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * certificateSerialNumber;                          //@synthesize certificateSerialNumber=_certificateSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * vehicleName;                                    //@synthesize vehicleName=_vehicleName - In the implementation block
@property (assign,nonatomic) unsigned long long pairingStatus;                          //@synthesize pairingStatus=_pairingStatus - In the implementation block
@property (nonatomic,retain) NSString * bluetoothAddress;                               //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) NSString * carplayWiFiUUID;                                //@synthesize carplayWiFiUUID=_carplayWiFiUUID - In the implementation block
@property (nonatomic,retain) NSSet * accessoryProtocols;                                //@synthesize accessoryProtocols=_accessoryProtocols - In the implementation block
@property (nonatomic,retain) NSDate * lastConnectedDate;                                //@synthesize lastConnectedDate=_lastConnectedDate - In the implementation block
@property (nonatomic,retain) NSString * vehicleModelName;                               //@synthesize vehicleModelName=_vehicleModelName - In the implementation block
@property (nonatomic,retain) NSString * PPID;                                           //@synthesize PPID=_PPID - In the implementation block
@property (nonatomic,retain) NSString * internalNotes;                                  //@synthesize internalNotes=_internalNotes - In the implementation block
@property (assign,nonatomic) BOOL supportsEnhancedIntegration;                          //@synthesize supportsEnhancedIntegration=_supportsEnhancedIntegration - In the implementation block
@property (assign,nonatomic) unsigned long long enhancedIntegrationStatus;              //@synthesize enhancedIntegrationStatus=_enhancedIntegrationStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsStartSessionRequest;                          //@synthesize supportsStartSessionRequest=_supportsStartSessionRequest - In the implementation block
@property (assign,nonatomic) BOOL supportsUSBCarPlay;                                   //@synthesize supportsUSBCarPlay=_supportsUSBCarPlay - In the implementation block
@property (assign,nonatomic) BOOL supportsWirelessCarPlay;                              //@synthesize supportsWirelessCarPlay=_supportsWirelessCarPlay - In the implementation block
@property (assign,nonatomic) long long albumArtUserPreference;                          //@synthesize albumArtUserPreference=_albumArtUserPreference - In the implementation block
@property (nonatomic,retain) NSString * wallpaperIdentifier;                            //@synthesize wallpaperIdentifier=_wallpaperIdentifier - In the implementation block
@property (nonatomic,retain) NSString * previousWallpaperIdentifier;                    //@synthesize previousWallpaperIdentifier=_previousWallpaperIdentifier - In the implementation block
@property (assign,nonatomic) long long appearanceModePreference;                        //@synthesize appearanceModePreference=_appearanceModePreference - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isEnhancedIntegrationEnabled; 
+(BOOL)supportsSecureCoding;
+(id)vehicleForVehicleAccessory:(id)arg1 ;
-(BOOL)isPaired;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(NSString *)PPID;
-(NSString *)bluetoothAddress;
-(id)init;
-(void)setPPID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)carplayWiFiUUID;
-(void)setCarplayWiFiUUID:(NSString *)arg1 ;
-(NSData *)certificateSerialNumber;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setPairingStatus:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2 ;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setEnhancedIntegrationStatus:(unsigned long long)arg1 ;
-(void)setAlbumArtUserPreference:(long long)arg1 ;
-(void)setAppearanceModePreference:(long long)arg1 ;
-(void)setSupportsEnhancedIntegration:(BOOL)arg1 ;
-(void)setSupportsStartSessionRequest:(BOOL)arg1 ;
-(void)setAccessoryProtocols:(NSSet *)arg1 ;
-(void)setLastConnectedDate:(NSDate *)arg1 ;
-(void)setVehicleModelName:(NSString *)arg1 ;
-(void)setSupportsUSBCarPlay:(BOOL)arg1 ;
-(void)setSupportsWirelessCarPlay:(BOOL)arg1 ;
-(void)setPreviousWallpaperIdentifier:(NSString *)arg1 ;
-(void)setInternalNotes:(NSString *)arg1 ;
-(unsigned long long)pairingStatus;
-(unsigned long long)enhancedIntegrationStatus;
-(NSDate *)lastConnectedDate;
-(BOOL)supportsEnhancedIntegration;
-(BOOL)supportsStartSessionRequest;
-(long long)albumArtUserPreference;
-(BOOL)supportsUSBCarPlay;
-(BOOL)supportsWirelessCarPlay;
-(NSSet *)accessoryProtocols;
-(NSString *)vehicleModelName;
-(NSString *)previousWallpaperIdentifier;
-(long long)appearanceModePreference;
-(NSString *)internalNotes;
-(id)_pairingDebugDescription;
-(id)_enhancedIntegrationDebugDescription;
-(BOOL)isEnhancedIntegrationEnabled;
-(void)mergeAttributesFromVehicle:(id)arg1 ;
-(id)description;
-(NSString *)wallpaperIdentifier;
-(NSString *)vehicleName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)setWallpaperIdentifier:(NSString *)arg1 ;
-(id)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end
