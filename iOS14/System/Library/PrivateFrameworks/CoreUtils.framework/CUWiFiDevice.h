/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData, NSString, NSUUID, NSDictionary;

@interface CUWiFiDevice : NSObject {

	unsigned _deviceIECategory;
	unsigned _deviceIEFlags;
	int _rssi;
	int _present;
	NSData* _bssid;
	NSData* _deviceIEBluetoothMAC;
	NSData* _deviceIEDeviceID;
	NSString* _deviceIEManufacturer;
	NSString* _deviceIEModel;
	NSString* _deviceIEName;
	NSData* _deviceIDOUI;
	NSData* _deviceIDSetupHash;
	NSUUID* _identifier;
	NSData* _ieData;
	id _platformObject;
	NSDictionary* _rawScanResult;
	NSString* _ssid;

}

@property (assign,nonatomic) int present;                                //@synthesize present=_present - In the implementation block
@property (nonatomic,copy) NSData * bssid;                               //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSData * deviceIEBluetoothMAC;                //@synthesize deviceIEBluetoothMAC=_deviceIEBluetoothMAC - In the implementation block
@property (assign,nonatomic) unsigned deviceIECategory;                  //@synthesize deviceIECategory=_deviceIECategory - In the implementation block
@property (nonatomic,copy) NSData * deviceIEDeviceID;                    //@synthesize deviceIEDeviceID=_deviceIEDeviceID - In the implementation block
@property (assign,nonatomic) unsigned deviceIEFlags;                     //@synthesize deviceIEFlags=_deviceIEFlags - In the implementation block
@property (nonatomic,copy) NSString * deviceIEManufacturer;              //@synthesize deviceIEManufacturer=_deviceIEManufacturer - In the implementation block
@property (nonatomic,copy) NSString * deviceIEModel;                     //@synthesize deviceIEModel=_deviceIEModel - In the implementation block
@property (nonatomic,copy) NSString * deviceIEName;                      //@synthesize deviceIEName=_deviceIEName - In the implementation block
@property (nonatomic,copy) NSData * deviceIDOUI;                         //@synthesize deviceIDOUI=_deviceIDOUI - In the implementation block
@property (nonatomic,copy) NSData * deviceIDSetupHash;                   //@synthesize deviceIDSetupHash=_deviceIDSetupHash - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * ieData;                              //@synthesize ieData=_ieData - In the implementation block
@property (nonatomic,retain) id platformObject;                          //@synthesize platformObject=_platformObject - In the implementation block
@property (nonatomic,copy) NSDictionary * rawScanResult;                 //@synthesize rawScanResult=_rawScanResult - In the implementation block
@property (assign,nonatomic) int rssi;                                   //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy) NSString * ssid;                              //@synthesize ssid=_ssid - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)setPresent:(int)arg1 ;
-(void)setBssid:(NSData *)arg1 ;
-(int)present;
-(NSData *)ieData;
-(int)rssi;
-(NSString *)ssid;
-(id)description;
-(unsigned)deviceIEFlags;
-(NSData *)deviceIEDeviceID;
-(NSDictionary *)rawScanResult;
-(void)setIeData:(NSData *)arg1 ;
-(unsigned)_updateWithDeviceIE:(const char*)arg1 end:(const char*)arg2 ;
-(void)setPlatformObject:(id)arg1 ;
-(void)setRawScanResult:(NSDictionary *)arg1 ;
-(NSData *)deviceIEBluetoothMAC;
-(void)setDeviceIEBluetoothMAC:(NSData *)arg1 ;
-(unsigned)deviceIECategory;
-(NSData *)deviceIDOUI;
-(void)setDeviceIECategory:(unsigned)arg1 ;
-(void)setDeviceIEDeviceID:(NSData *)arg1 ;
-(void)setDeviceIEFlags:(unsigned)arg1 ;
-(NSString *)deviceIEManufacturer;
-(void)setDeviceIEManufacturer:(NSString *)arg1 ;
-(NSString *)deviceIEModel;
-(NSString *)deviceIEName;
-(NSData *)bssid;
-(void)setDeviceIEModel:(NSString *)arg1 ;
-(void)setDeviceIEName:(NSString *)arg1 ;
-(void)setDeviceIDOUI:(NSData *)arg1 ;
-(NSData *)deviceIDSetupHash;
-(void)setDeviceIDSetupHash:(NSData *)arg1 ;
-(id)platformObject;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
@end

