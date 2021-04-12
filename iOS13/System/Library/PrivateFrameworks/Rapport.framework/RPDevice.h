/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, CURangingMeasurement, SFDevice, CUMobileDevice, NSUUID, CUPairedPeer, NSDictionary;

@interface RPDevice : NSObject <NSSecureCoding> {

	unsigned char _deviceActionType;
	BOOL _needsSetup;
	int _activityLevel;
	unsigned _flags;
	int _proximity;
	unsigned _blePairState;
	int _rawRSSI;
	int _smoothedRSSI;
	unsigned _systemPairState;
	unsigned _wifiDeviceIEFlags;
	NSString* _accountID;
	NSData* _bleAuthTag;
	NSString* _contactID;
	NSString* _identifier;
	NSString* _idsDeviceIdentifier;
	NSString* _model;
	NSString* _name;
	CURangingMeasurement* _relativeLocation;
	SFDevice* _bleDevice;
	CUMobileDevice* _mobileDevice;
	NSData* _authTag;
	NSData* _bleAdvertisementData;
	NSData* _bleDeviceAddress;
	NSUUID* _identifierUUID;
	CUPairedPeer* _pairedPeer;
	NSUUID* _pairingIdentifier;
	NSData* _txtData;
	NSDictionary* _txtDictionary;
	NSString* _udid;
	NSData* _wifiAddress;
	NSData* _wifiBSSID;
	NSData* _wifiDeviceIEDeviceID;
	NSData* _wifiDeviceIEName;
	NSData* _wifiIEData;
	id _wifiPlatformObject;
	NSString* _wifiSSID;

}

@property (nonatomic,retain) SFDevice * bleDevice;                               //@synthesize bleDevice=_bleDevice - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CUMobileDevice * mobileDevice;                      //@synthesize mobileDevice=_mobileDevice - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (retain) CURangingMeasurement * relativeLocation;                      //@synthesize relativeLocation=_relativeLocation - In the implementation block
@property (nonatomic,copy,readonly) NSData * authTag;                            //@synthesize authTag=_authTag - In the implementation block
@property (nonatomic,copy,readonly) NSData * bleAdvertisementData;               //@synthesize bleAdvertisementData=_bleAdvertisementData - In the implementation block
@property (nonatomic,copy,readonly) NSData * bleDeviceAddress;                   //@synthesize bleDeviceAddress=_bleDeviceAddress - In the implementation block
@property (nonatomic,readonly) unsigned blePairState;                            //@synthesize blePairState=_blePairState - In the implementation block
@property (nonatomic,readonly) unsigned char deviceActionType;                   //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (nonatomic,copy) NSUUID * identifierUUID;                              //@synthesize identifierUUID=_identifierUUID - In the implementation block
@property (nonatomic,readonly) BOOL needsSetup;                                  //@synthesize needsSetup=_needsSetup - In the implementation block
@property (nonatomic,retain) CUPairedPeer * pairedPeer;                          //@synthesize pairedPeer=_pairedPeer - In the implementation block
@property (nonatomic,copy) NSUUID * pairingIdentifier;                           //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,readonly) int rawRSSI;                                      //@synthesize rawRSSI=_rawRSSI - In the implementation block
@property (nonatomic,readonly) int smoothedRSSI;                                 //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (assign,nonatomic) unsigned systemPairState;                           //@synthesize systemPairState=_systemPairState - In the implementation block
@property (nonatomic,copy,readonly) NSData * txtData;                            //@synthesize txtData=_txtData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * txtDictionary;                //@synthesize txtDictionary=_txtDictionary - In the implementation block
@property (nonatomic,copy) NSString * udid;                                      //@synthesize udid=_udid - In the implementation block
@property (nonatomic,copy) NSData * wifiAddress;                                 //@synthesize wifiAddress=_wifiAddress - In the implementation block
@property (nonatomic,copy) NSData * wifiBSSID;                                   //@synthesize wifiBSSID=_wifiBSSID - In the implementation block
@property (nonatomic,copy) NSData * wifiDeviceIEDeviceID;                        //@synthesize wifiDeviceIEDeviceID=_wifiDeviceIEDeviceID - In the implementation block
@property (nonatomic,readonly) unsigned wifiDeviceIEFlags;                       //@synthesize wifiDeviceIEFlags=_wifiDeviceIEFlags - In the implementation block
@property (nonatomic,copy) NSData * wifiDeviceIEName;                            //@synthesize wifiDeviceIEName=_wifiDeviceIEName - In the implementation block
@property (nonatomic,copy) NSData * wifiIEData;                                  //@synthesize wifiIEData=_wifiIEData - In the implementation block
@property (nonatomic,retain) id wifiPlatformObject;                              //@synthesize wifiPlatformObject=_wifiPlatformObject - In the implementation block
@property (nonatomic,copy) NSString * wifiSSID;                                  //@synthesize wifiSSID=_wifiSSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountID;                        //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) int activityLevel;                                //@synthesize activityLevel=_activityLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * bleAuthTag;                         //@synthesize bleAuthTag=_bleAuthTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                        //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsDeviceIdentifier;              //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) int proximity;                                    //@synthesize proximity=_proximity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned)flags;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)contactID;
-(NSString *)idsDeviceIdentifier;
-(int)proximity;
-(BOOL)needsSetup;
-(NSString *)accountID;
-(CURangingMeasurement *)relativeLocation;
-(void)setRelativeLocation:(CURangingMeasurement *)arg1 ;
-(int)rawRSSI;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSDictionary *)txtDictionary;
-(void)setIdentifierUUID:(NSUUID *)arg1 ;
-(void)_updateTXTDictionary:(id)arg1 ;
-(NSData *)txtData;
-(NSUUID *)identifierUUID;
-(CUPairedPeer *)pairedPeer;
-(void)setPairedPeer:(CUPairedPeer *)arg1 ;
-(NSString *)udid;
-(void)setUdid:(NSString *)arg1 ;
-(NSData *)wifiAddress;
-(void)setWifiAddress:(NSData *)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(unsigned char)deviceActionType;
-(int)smoothedRSSI;
-(SFDevice *)bleDevice;
-(void)setBleDevice:(SFDevice *)arg1 ;
-(unsigned)systemPairState;
-(void)setSystemPairState:(unsigned)arg1 ;
-(NSUUID *)pairingIdentifier;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(unsigned)updateWithMobileDevice:(id)arg1 ;
-(unsigned)updateWithSFDevice:(id)arg1 changes:(unsigned)arg2 ;
-(void)updateWithSystemInfo:(id)arg1 ;
-(void)updateWithWiFiDevice:(id)arg1 changes:(unsigned)arg2 ;
-(int)activityLevel;
-(NSData *)bleAuthTag;
-(CUMobileDevice *)mobileDevice;
-(void)setMobileDevice:(CUMobileDevice *)arg1 ;
-(NSData *)authTag;
-(NSData *)bleAdvertisementData;
-(NSData *)bleDeviceAddress;
-(unsigned)blePairState;
-(NSData *)wifiBSSID;
-(void)setWifiBSSID:(NSData *)arg1 ;
-(NSData *)wifiDeviceIEDeviceID;
-(void)setWifiDeviceIEDeviceID:(NSData *)arg1 ;
-(unsigned)wifiDeviceIEFlags;
-(NSData *)wifiDeviceIEName;
-(void)setWifiDeviceIEName:(NSData *)arg1 ;
-(NSData *)wifiIEData;
-(void)setWifiIEData:(NSData *)arg1 ;
-(id)wifiPlatformObject;
-(void)setWifiPlatformObject:(id)arg1 ;
-(NSString *)wifiSSID;
-(void)setWifiSSID:(NSString *)arg1 ;
@end

