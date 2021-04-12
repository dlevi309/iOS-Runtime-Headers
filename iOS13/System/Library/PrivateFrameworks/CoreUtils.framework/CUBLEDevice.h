/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData, NSString;

@interface CUBLEDevice : NSObject {

	unsigned char _nearbyActivityLevel;
	unsigned char _objectDiscoveryBatteryState;
	unsigned char _objectSetupBatteryState;
	unsigned char _objectSetupColorCode;
	unsigned short _objectDiscoveryProductID;
	unsigned short _proximityPairingProductID;
	unsigned _changeFlags;
	unsigned _lgFlags;
	int _nearbyActionType;
	unsigned _nearbyFlags;
	int _objectDiscoveryMode;
	int _objectSetupBatteryPerformance;
	unsigned _objectSetupFlags;
	int _proximityPairingSubType;
	int _rawRSSI;
	unsigned _scanFlags;
	NSData* _addressData;
	NSData* _appleManufacturerData;
	NSString* _identifier;
	NSData* _lgBTAddress;
	NSData* _lgDeviceID;
	NSData* _manufacturerData;
	NSData* _nearbyAuthTag;
	NSData* _objectDiscoveryNearOwnerID;
	NSData* _objectDiscoveryPublicKeyData;
	NSString* _objectSetupFontCode;
	NSString* _objectSetupMessage;

}

@property (assign,nonatomic) unsigned changeFlags;                                      //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * addressData;                               //@synthesize addressData=_addressData - In the implementation block
@property (nonatomic,copy,readonly) NSData * appleManufacturerData;                     //@synthesize appleManufacturerData=_appleManufacturerData - In the implementation block
@property (nonatomic,copy,readonly) NSData * lgBTAddress;                               //@synthesize lgBTAddress=_lgBTAddress - In the implementation block
@property (nonatomic,copy,readonly) NSData * lgDeviceID;                                //@synthesize lgDeviceID=_lgDeviceID - In the implementation block
@property (nonatomic,readonly) unsigned lgFlags;                                        //@synthesize lgFlags=_lgFlags - In the implementation block
@property (nonatomic,copy,readonly) NSData * manufacturerData;                          //@synthesize manufacturerData=_manufacturerData - In the implementation block
@property (nonatomic,readonly) unsigned char nearbyActivityLevel;                       //@synthesize nearbyActivityLevel=_nearbyActivityLevel - In the implementation block
@property (nonatomic,readonly) int nearbyActionType;                                    //@synthesize nearbyActionType=_nearbyActionType - In the implementation block
@property (nonatomic,copy,readonly) NSData * nearbyAuthTag;                             //@synthesize nearbyAuthTag=_nearbyAuthTag - In the implementation block
@property (nonatomic,readonly) unsigned nearbyFlags;                                    //@synthesize nearbyFlags=_nearbyFlags - In the implementation block
@property (nonatomic,readonly) unsigned char objectDiscoveryBatteryState;               //@synthesize objectDiscoveryBatteryState=_objectDiscoveryBatteryState - In the implementation block
@property (nonatomic,readonly) int objectDiscoveryMode;                                 //@synthesize objectDiscoveryMode=_objectDiscoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSData * objectDiscoveryNearOwnerID;                //@synthesize objectDiscoveryNearOwnerID=_objectDiscoveryNearOwnerID - In the implementation block
@property (nonatomic,readonly) unsigned short objectDiscoveryProductID;                 //@synthesize objectDiscoveryProductID=_objectDiscoveryProductID - In the implementation block
@property (nonatomic,copy,readonly) NSData * objectDiscoveryPublicKeyData;              //@synthesize objectDiscoveryPublicKeyData=_objectDiscoveryPublicKeyData - In the implementation block
@property (nonatomic,readonly) int objectSetupBatteryPerformance;                       //@synthesize objectSetupBatteryPerformance=_objectSetupBatteryPerformance - In the implementation block
@property (nonatomic,readonly) unsigned char objectSetupBatteryState;                   //@synthesize objectSetupBatteryState=_objectSetupBatteryState - In the implementation block
@property (nonatomic,readonly) unsigned char objectSetupColorCode;                      //@synthesize objectSetupColorCode=_objectSetupColorCode - In the implementation block
@property (nonatomic,readonly) unsigned objectSetupFlags;                               //@synthesize objectSetupFlags=_objectSetupFlags - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectSetupFontCode;                     //@synthesize objectSetupFontCode=_objectSetupFontCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectSetupMessage;                      //@synthesize objectSetupMessage=_objectSetupMessage - In the implementation block
@property (nonatomic,readonly) unsigned short proximityPairingProductID;                //@synthesize proximityPairingProductID=_proximityPairingProductID - In the implementation block
@property (nonatomic,readonly) int proximityPairingSubType;                             //@synthesize proximityPairingSubType=_proximityPairingSubType - In the implementation block
@property (nonatomic,readonly) int rawRSSI;                                             //@synthesize rawRSSI=_rawRSSI - In the implementation block
@property (nonatomic,readonly) unsigned scanFlags;                                      //@synthesize scanFlags=_scanFlags - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSData *)addressData;
-(unsigned)scanFlags;
-(NSData *)appleManufacturerData;
-(int)rawRSSI;
-(void)setChangeFlags:(unsigned)arg1 ;
-(NSData *)lgBTAddress;
-(NSData *)lgDeviceID;
-(unsigned)changeFlags;
-(unsigned)updateWithAdvertisementData:(id)arg1 rssi:(int)arg2 oldDevice:(id)arg3 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_parseManufacturerData:(id)arg1 advertisementFields:(id)arg2 ;
-(void)_parseAppleManufacturerPtr:(const char*)arg1 end:(const char*)arg2 data:(id)arg3 ;
-(void)_parseAppleNearbyActionPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseAppleNearbyInfoPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseAppleObjectDiscoveryPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseAppleProximityPairingPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseAppleProximityPairingObjectSetupPtr:(const char*)arg1 end:(const char*)arg2 ;
-(void)_parseLGManufacturerPtr:(const char*)arg1 end:(const char*)arg2 fields:(id)arg3 ;
-(unsigned)lgFlags;
-(NSData *)manufacturerData;
-(unsigned char)nearbyActivityLevel;
-(int)nearbyActionType;
-(NSData *)nearbyAuthTag;
-(unsigned)nearbyFlags;
-(unsigned char)objectDiscoveryBatteryState;
-(int)objectDiscoveryMode;
-(NSData *)objectDiscoveryNearOwnerID;
-(unsigned short)objectDiscoveryProductID;
-(NSData *)objectDiscoveryPublicKeyData;
-(int)objectSetupBatteryPerformance;
-(unsigned char)objectSetupBatteryState;
-(unsigned char)objectSetupColorCode;
-(unsigned)objectSetupFlags;
-(NSString *)objectSetupFontCode;
-(NSString *)objectSetupMessage;
-(unsigned short)proximityPairingProductID;
-(int)proximityPairingSubType;
@end

