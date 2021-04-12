/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
*/


@class NSString;

@interface AHTInterface : NSObject {

	unsigned char _interfaceID;
	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                         //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) unsigned char interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
+(id)withService:(unsigned)arg1 ;
-(BOOL)open;
-(unsigned char)interfaceID;
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
-(BOOL)setEnable:(BOOL)arg1 ;
-(unsigned)service;
-(void)dealloc;
-(BOOL)setReport:(unsigned char)arg1 withData:(id)arg2 ;
-(BOOL)getReport:(unsigned char)arg1 withData:(id)arg2 ;
@end

