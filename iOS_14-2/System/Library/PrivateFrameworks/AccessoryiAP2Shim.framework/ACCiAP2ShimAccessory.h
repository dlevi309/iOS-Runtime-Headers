/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
*/


@class NSString;

@interface ACCiAP2ShimAccessory : NSObject {

	BOOL _dontPublish;
	unsigned _connectionID;
	unsigned _featureTypeMask;
	NSString* _keyTag;
	NSString* _keyAccessoryUID;
	NSString* _keyConnectionID;
	NSString* _accessoryUID;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSString* _hardwareVersion;
	id _context;

}

@property (readonly) NSString * keyTag;                       //@synthesize keyTag=_keyTag - In the implementation block
@property (readonly) NSString * keyAccessoryUID;              //@synthesize keyAccessoryUID=_keyAccessoryUID - In the implementation block
@property (readonly) NSString * keyConnectionID;              //@synthesize keyConnectionID=_keyConnectionID - In the implementation block
@property (assign) unsigned connectionID;                     //@synthesize connectionID=_connectionID - In the implementation block
@property (readonly) unsigned featureTypeMask;                //@synthesize featureTypeMask=_featureTypeMask - In the implementation block
@property (readonly) NSString * accessoryUID;                 //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (retain) NSString * manufacturer;                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) NSString * serialNumber;                   //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSString * firmwareVersion;                //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (retain) NSString * hardwareVersion;                //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (retain) id context;                                //@synthesize context=_context - In the implementation block
@property (assign) BOOL dontPublish;                          //@synthesize dontPublish=_dontPublish - In the implementation block
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(id)context;
-(NSString *)name;
-(NSString *)keyTag;
-(unsigned)connectionID;
-(void)setConnectionID:(unsigned)arg1 ;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(void)addFeature:(int)arg1 ;
-(NSString *)hardwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)removeFeature:(int)arg1 ;
-(NSString *)accessoryUID;
-(id)initWithUID:(id)arg1 keyTag:(id)arg2 features:(unsigned)arg3 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setDontPublish:(BOOL)arg1 ;
-(id)connectionIDObj;
-(id)accessoryInfoDict;
-(NSString *)keyAccessoryUID;
-(NSString *)keyConnectionID;
-(unsigned)featureTypeMask;
-(BOOL)dontPublish;
@end

