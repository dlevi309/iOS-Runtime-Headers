/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
*/


@class NSString;

@interface AHTDevice : NSObject {

	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;               //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)allDevices;
+(id)withService:(unsigned)arg1 ;
+(id)withName:(id)arg1 ;
+(id)deviceWithParentRegistryId:(unsigned long long)arg1 ;
-(BOOL)open;
-(void)close;
-(void)setConnect:(unsigned)arg1 ;
-(unsigned)connect;
-(id)initWithService:(unsigned)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setService:(unsigned)arg1 ;
-(BOOL)reset;
-(BOOL)setPower:(long long)arg1 ;
-(unsigned long long)registryID;
-(unsigned)service;
-(void)dealloc;
-(id)getBootLoader;
-(id)getInterfaces;
-(id)getInterface:(unsigned char)arg1 ;
-(BOOL)getPower:(long long*)arg1 ;
-(id)reporterResults;
@end

