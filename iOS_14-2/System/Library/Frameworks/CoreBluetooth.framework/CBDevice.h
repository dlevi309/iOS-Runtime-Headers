/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSString, NSData, NSArray, NSDictionary;

@interface CBDevice : NSObject <CUXPCCodable> {

	unsigned char _nearbyActionType;
	unsigned char _nearbyActivityLevel;
	unsigned char _objectDiscoveryBatteryState;
	unsigned char _objectDiscoveryMode;
	unsigned char _objectSetupBatteryPerformance;
	unsigned char _objectSetupBatteryState;
	unsigned char _objectSetupColorCode;
	unsigned char _proximityPairingSubType;
	unsigned char _spatialInteractionFlags;
	int _audioStreamState;
	int _bleChannel;
	int _bleRSSI;
	unsigned _connectedServices;
	int _primaryPlacement;
	int _secondaryPlacement;
	unsigned _productID;
	unsigned _lgFlags;
	unsigned _nearbyActionFlags;
	unsigned _nearbyInfoFlags;
	unsigned _objectDiscoveryProductID;
	unsigned _objectSetupFlags;
	unsigned _proximityPairingProductID;
	unsigned _spatialInteractionUWBTokenFlags;
	unsigned _internalFlags;
	unsigned _spatialInteractionPeerID;
	NSString* _accountID;
	NSData* _bleAddressData;
	NSData* _bleAdvertisementData;
	NSData* _bleAppleManufacturerData;
	NSData* _btAddressData;
	unsigned long long _changeFlags;
	NSString* _contactID;
	unsigned long long _deviceFlags;
	unsigned long long _discoveryFlags;
	NSString* _identifier;
	NSString* _idsDeviceID;
	NSString* _model;
	NSString* _name;
	NSData* _nearbyAuthTag;
	NSData* _objectDiscoveryNearOwnerID;
	NSData* _objectDiscoveryPublicKeyData;
	NSString* _objectSetupFontCode;
	NSString* _objectSetupMessage;
	NSArray* _spatialInteractionIdentifiers;
	NSData* _spatialInteractionTokenData;
	NSDictionary* _spatialInteractionUserInfo;
	NSData* _spatialInteractionUWBConfigData;
	unsigned long long _lastSeenTicks;
	NSData* _nearbyActionAuthTag;
	NSData* _nearbyInfoAuthTag;
	unsigned long long _oldDiscoveryFlags;

}

@property (nonatomic,copy) NSString * accountID;                                         //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) int audioStreamState;                                       //@synthesize audioStreamState=_audioStreamState - In the implementation block
@property (nonatomic,copy) NSData * bleAddressData;                                      //@synthesize bleAddressData=_bleAddressData - In the implementation block
@property (nonatomic,copy) NSData * bleAdvertisementData;                                //@synthesize bleAdvertisementData=_bleAdvertisementData - In the implementation block
@property (nonatomic,copy) NSData * bleAppleManufacturerData;                            //@synthesize bleAppleManufacturerData=_bleAppleManufacturerData - In the implementation block
@property (assign,nonatomic) int bleChannel;                                             //@synthesize bleChannel=_bleChannel - In the implementation block
@property (assign,nonatomic) int bleRSSI;                                                //@synthesize bleRSSI=_bleRSSI - In the implementation block
@property (nonatomic,copy) NSData * btAddressData;                                       //@synthesize btAddressData=_btAddressData - In the implementation block
@property (assign,nonatomic) unsigned long long changeFlags;                             //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned connectedServices;                                 //@synthesize connectedServices=_connectedServices - In the implementation block
@property (nonatomic,copy) NSString * contactID;                                         //@synthesize contactID=_contactID - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFlags;                             //@synthesize deviceFlags=_deviceFlags - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryFlags;                          //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceID;                                       //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (assign,nonatomic) unsigned internalFlags;                                     //@synthesize internalFlags=_internalFlags - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenTicks;                           //@synthesize lastSeenTicks=_lastSeenTicks - In the implementation block
@property (nonatomic,copy) NSString * model;                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSData * nearbyActionAuthTag;                                 //@synthesize nearbyActionAuthTag=_nearbyActionAuthTag - In the implementation block
@property (nonatomic,copy) NSData * nearbyInfoAuthTag;                                   //@synthesize nearbyInfoAuthTag=_nearbyInfoAuthTag - In the implementation block
@property (assign,nonatomic) unsigned long long oldDiscoveryFlags;                       //@synthesize oldDiscoveryFlags=_oldDiscoveryFlags - In the implementation block
@property (assign,nonatomic) int primaryPlacement;                                       //@synthesize primaryPlacement=_primaryPlacement - In the implementation block
@property (assign,nonatomic) int secondaryPlacement;                                     //@synthesize secondaryPlacement=_secondaryPlacement - In the implementation block
@property (assign,nonatomic) unsigned productID;                                         //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) unsigned proximityPairingProductID;                         //@synthesize proximityPairingProductID=_proximityPairingProductID - In the implementation block
@property (assign,nonatomic) unsigned char proximityPairingSubType;                      //@synthesize proximityPairingSubType=_proximityPairingSubType - In the implementation block
@property (assign,nonatomic) unsigned char spatialInteractionFlags;                      //@synthesize spatialInteractionFlags=_spatialInteractionFlags - In the implementation block
@property (nonatomic,copy) NSArray * spatialInteractionIdentifiers;                      //@synthesize spatialInteractionIdentifiers=_spatialInteractionIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned spatialInteractionPeerID;                          //@synthesize spatialInteractionPeerID=_spatialInteractionPeerID - In the implementation block
@property (nonatomic,copy) NSData * spatialInteractionTokenData;                         //@synthesize spatialInteractionTokenData=_spatialInteractionTokenData - In the implementation block
@property (nonatomic,copy) NSDictionary * spatialInteractionUserInfo;                    //@synthesize spatialInteractionUserInfo=_spatialInteractionUserInfo - In the implementation block
@property (nonatomic,copy) NSData * spatialInteractionUWBConfigData;                     //@synthesize spatialInteractionUWBConfigData=_spatialInteractionUWBConfigData - In the implementation block
@property (nonatomic,readonly) unsigned lgFlags;                                         //@synthesize lgFlags=_lgFlags - In the implementation block
@property (nonatomic,readonly) unsigned nearbyActionFlags;                               //@synthesize nearbyActionFlags=_nearbyActionFlags - In the implementation block
@property (nonatomic,readonly) unsigned char nearbyActionType;                           //@synthesize nearbyActionType=_nearbyActionType - In the implementation block
@property (nonatomic,readonly) unsigned char nearbyActivityLevel;                        //@synthesize nearbyActivityLevel=_nearbyActivityLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * nearbyAuthTag;                              //@synthesize nearbyAuthTag=_nearbyAuthTag - In the implementation block
@property (nonatomic,readonly) unsigned nearbyInfoFlags;                                 //@synthesize nearbyInfoFlags=_nearbyInfoFlags - In the implementation block
@property (nonatomic,readonly) unsigned char objectDiscoveryBatteryState;                //@synthesize objectDiscoveryBatteryState=_objectDiscoveryBatteryState - In the implementation block
@property (nonatomic,readonly) unsigned char objectDiscoveryMode;                        //@synthesize objectDiscoveryMode=_objectDiscoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSData * objectDiscoveryNearOwnerID;                 //@synthesize objectDiscoveryNearOwnerID=_objectDiscoveryNearOwnerID - In the implementation block
@property (nonatomic,readonly) unsigned objectDiscoveryProductID;                        //@synthesize objectDiscoveryProductID=_objectDiscoveryProductID - In the implementation block
@property (nonatomic,copy,readonly) NSData * objectDiscoveryPublicKeyData;               //@synthesize objectDiscoveryPublicKeyData=_objectDiscoveryPublicKeyData - In the implementation block
@property (nonatomic,readonly) unsigned char objectSetupBatteryPerformance;              //@synthesize objectSetupBatteryPerformance=_objectSetupBatteryPerformance - In the implementation block
@property (nonatomic,readonly) unsigned char objectSetupBatteryState;                    //@synthesize objectSetupBatteryState=_objectSetupBatteryState - In the implementation block
@property (nonatomic,readonly) unsigned char objectSetupColorCode;                       //@synthesize objectSetupColorCode=_objectSetupColorCode - In the implementation block
@property (nonatomic,readonly) unsigned objectSetupFlags;                                //@synthesize objectSetupFlags=_objectSetupFlags - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectSetupFontCode;                      //@synthesize objectSetupFontCode=_objectSetupFontCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectSetupMessage;                       //@synthesize objectSetupMessage=_objectSetupMessage - In the implementation block
@property (assign,nonatomic) unsigned spatialInteractionUWBTokenFlags;                   //@synthesize spatialInteractionUWBTokenFlags=_spatialInteractionUWBTokenFlags - In the implementation block
-(void)setChangeFlags:(unsigned long long)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(unsigned long long)changeFlags;
-(NSString *)model;
-(NSString *)contactID;
-(void)setInternalFlags:(unsigned)arg1 ;
-(unsigned long long)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(unsigned)connectedServices;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(unsigned)internalFlags;
-(int)secondaryPlacement;
-(int)primaryPlacement;
-(void)setSecondaryPlacement:(int)arg1 ;
-(void)setPrimaryPlacement:(int)arg1 ;
-(void)setDeviceFlags:(unsigned long long)arg1 ;
-(void)setConnectedServices:(unsigned)arg1 ;
-(unsigned long long)deviceFlags;
-(unsigned)lgFlags;
-(NSData *)bleAdvertisementData;
-(NSString *)name;
-(void)setLastSeenTicks:(unsigned long long)arg1 ;
-(unsigned long long)lastSeenTicks;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSString *)idsDeviceID;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(unsigned)productID;
-(int)bleRSSI;
-(void)updateWithRPIdentity:(id)arg1 ;
-(void)setContactID:(NSString *)arg1 ;
-(NSData *)nearbyAuthTag;
-(void)setProductID:(unsigned)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)_clearUnparsedProperties;
-(int)audioStreamState;
-(NSData *)bleAddressData;
-(NSData *)bleAppleManufacturerData;
-(int)bleChannel;
-(NSData *)btAddressData;
-(void)_parseManufacturerPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseAppleManufacturerPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseLGManufacturerPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseNearbyActionPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseNearbyInfoPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseObjectDiscoveryPtr:(const char*)arg1 end:(const char*)arg2 ;
-(unsigned long long)removeInternalFlags:(unsigned)arg1 ;
-(unsigned char)nearbyActionType;
-(void)_parseProximityPairingPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseSpatialInteractionPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseProximityPairingWxSetupPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseProximityPairingWxStatusPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseProximityPairingObjectSetupPtr:(const char*)arg1 end:(const char*)arg2 ;
-(unsigned long long)updateWithCBDevice:(id)arg1 ;
-(void)updateWithCBIdentity:(id)arg1 ;
-(void)setAudioStreamState:(int)arg1 ;
-(void)setBleAddressData:(NSData *)arg1 ;
-(void)setBleAdvertisementData:(NSData *)arg1 ;
-(void)setBleAppleManufacturerData:(NSData *)arg1 ;
-(void)setBleChannel:(int)arg1 ;
-(void)setBleRSSI:(int)arg1 ;
-(unsigned char)nearbyActivityLevel;
-(void)setBtAddressData:(NSData *)arg1 ;
-(unsigned)nearbyActionFlags;
-(unsigned)nearbyInfoFlags;
-(void)setProximityPairingProductID:(unsigned)arg1 ;
-(void)setProximityPairingSubType:(unsigned char)arg1 ;
-(unsigned char)spatialInteractionFlags;
-(void)setSpatialInteractionFlags:(unsigned char)arg1 ;
-(NSArray *)spatialInteractionIdentifiers;
-(void)setSpatialInteractionIdentifiers:(NSArray *)arg1 ;
-(NSData *)spatialInteractionTokenData;
-(void)setSpatialInteractionTokenData:(NSData *)arg1 ;
-(NSDictionary *)spatialInteractionUserInfo;
-(void)setSpatialInteractionUserInfo:(NSDictionary *)arg1 ;
-(NSData *)spatialInteractionUWBConfigData;
-(void)setSpatialInteractionUWBConfigData:(NSData *)arg1 ;
-(unsigned)spatialInteractionUWBTokenFlags;
-(void)setSpatialInteractionUWBTokenFlags:(unsigned)arg1 ;
-(NSData *)nearbyActionAuthTag;
-(void)setNearbyActionAuthTag:(NSData *)arg1 ;
-(NSData *)nearbyInfoAuthTag;
-(void)setNearbyInfoAuthTag:(NSData *)arg1 ;
-(unsigned long long)oldDiscoveryFlags;
-(void)setOldDiscoveryFlags:(unsigned long long)arg1 ;
-(unsigned)spatialInteractionPeerID;
-(void)setSpatialInteractionPeerID:(unsigned)arg1 ;
-(unsigned char)objectDiscoveryBatteryState;
-(unsigned char)objectDiscoveryMode;
-(NSData *)objectDiscoveryNearOwnerID;
-(unsigned)objectDiscoveryProductID;
-(NSData *)objectDiscoveryPublicKeyData;
-(unsigned char)objectSetupBatteryPerformance;
-(unsigned char)objectSetupColorCode;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned char)objectSetupBatteryState;
-(unsigned)objectSetupFlags;
-(NSString *)objectSetupFontCode;
-(NSString *)objectSetupMessage;
-(unsigned)proximityPairingProductID;
-(unsigned char)proximityPairingSubType;
@end

