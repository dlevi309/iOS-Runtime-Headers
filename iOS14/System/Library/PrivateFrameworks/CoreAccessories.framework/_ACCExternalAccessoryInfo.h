/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@class NSDictionary, NSString;

@interface _ACCExternalAccessoryInfo : NSObject {

	NSDictionary* _fullAccessoryInfo;
	NSString* _primaryUUID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _serial;
	NSString* _firmwareRevisionActive;
	NSString* _firmwareRevisionPending;
	NSString* _hardwareRevision;
	NSString* _ppid;
	unsigned long long _destinationSharingOptions;

}

@property (retain) NSDictionary * fullAccessoryInfo;                          //@synthesize fullAccessoryInfo=_fullAccessoryInfo - In the implementation block
@property (retain) NSString * primaryUUID;                                    //@synthesize primaryUUID=_primaryUUID - In the implementation block
@property (retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * manufacturer;                                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (retain) NSString * serial;                                         //@synthesize serial=_serial - In the implementation block
@property (retain) NSString * firmwareRevisionActive;                         //@synthesize firmwareRevisionActive=_firmwareRevisionActive - In the implementation block
@property (retain) NSString * firmwareRevisionPending;                        //@synthesize firmwareRevisionPending=_firmwareRevisionPending - In the implementation block
@property (retain) NSString * hardwareRevision;                               //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (retain) NSString * ppid;                                           //@synthesize ppid=_ppid - In the implementation block
@property (assign) unsigned long long destinationSharingOptions;              //@synthesize destinationSharingOptions=_destinationSharingOptions - In the implementation block
-(NSString *)ppid;
-(void)setPpid:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)serial;
-(NSString *)name;
-(NSString *)hardwareRevision;
-(unsigned long long)destinationSharingOptions;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(void)setSerial:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)primaryUUID;
-(id)initWithAccessoryInfoDictionary:(id)arg1 ;
-(id)copyAccessoryInfo;
-(NSDictionary *)fullAccessoryInfo;
-(void)setFullAccessoryInfo:(NSDictionary *)arg1 ;
-(void)setPrimaryUUID:(NSString *)arg1 ;
-(NSString *)firmwareRevisionActive;
-(void)setFirmwareRevisionActive:(NSString *)arg1 ;
-(NSString *)firmwareRevisionPending;
-(void)setFirmwareRevisionPending:(NSString *)arg1 ;
-(void)setHardwareRevision:(NSString *)arg1 ;
-(void)setDestinationSharingOptions:(unsigned long long)arg1 ;
@end

