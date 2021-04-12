/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet, NSData, NSDate;

@interface CRVehicle : NSObject <NSSecureCoding> {

	BOOL _supportsEnhancedIntegration;
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
@property (assign,nonatomic) long long albumArtUserPreference;                          //@synthesize albumArtUserPreference=_albumArtUserPreference - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isEnhancedIntegrationEnabled; 
+(BOOL)supportsSecureCoding;
+(id)vehicleForVehicleAccessory:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)displayName;
-(NSString *)bluetoothAddress;
-(void)setBluetoothAddress:(NSString *)arg1 ;
-(BOOL)isPaired;
-(NSString *)carplayWiFiUUID;
-(NSString *)vehicleName;
-(NSData *)certificateSerialNumber;
-(id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2 ;
-(void)setCertificateSerialNumber:(NSData *)arg1 ;
-(void)setPairingStatus:(unsigned long long)arg1 ;
-(void)setEnhancedIntegrationStatus:(unsigned long long)arg1 ;
-(void)setAlbumArtUserPreference:(long long)arg1 ;
-(void)setVehicleName:(NSString *)arg1 ;
-(void)setSupportsEnhancedIntegration:(BOOL)arg1 ;
-(void)setCarplayWiFiUUID:(NSString *)arg1 ;
-(void)setAccessoryProtocols:(NSSet *)arg1 ;
-(void)setLastConnectedDate:(NSDate *)arg1 ;
-(void)setVehicleModelName:(NSString *)arg1 ;
-(void)setPPID:(NSString *)arg1 ;
-(void)setInternalNotes:(NSString *)arg1 ;
-(unsigned long long)pairingStatus;
-(unsigned long long)enhancedIntegrationStatus;
-(BOOL)supportsEnhancedIntegration;
-(long long)albumArtUserPreference;
-(NSSet *)accessoryProtocols;
-(NSDate *)lastConnectedDate;
-(NSString *)vehicleModelName;
-(NSString *)PPID;
-(NSString *)internalNotes;
-(id)_pairingDebugDescription;
-(id)_enhancedIntegrationDebugDescription;
-(BOOL)isEnhancedIntegrationEnabled;
-(void)mergeAttributesFromVehicle:(id)arg1 ;
@end

