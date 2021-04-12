/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)context;
-(NSString *)model;
-(void)setContext:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(NSString *)hardwareVersion;
-(void)addFeature:(int)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(unsigned)connectionID;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setConnectionID:(unsigned)arg1 ;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(id)initWithUID:(id)arg1 keyTag:(id)arg2 features:(unsigned)arg3 ;
-(id)accessoryInfoDict;
-(id)connectionIDObj;
-(void)removeFeature:(int)arg1 ;
-(NSString *)keyTag;
-(NSString *)keyAccessoryUID;
-(NSString *)keyConnectionID;
-(unsigned)featureTypeMask;
-(NSString *)accessoryUID;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(BOOL)dontPublish;
-(void)setDontPublish:(BOOL)arg1 ;
@end

