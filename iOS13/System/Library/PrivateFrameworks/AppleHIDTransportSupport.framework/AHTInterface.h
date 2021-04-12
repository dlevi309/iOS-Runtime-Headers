/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)open;
-(void)close;
-(BOOL)reset;
-(unsigned long long)registryID;
-(BOOL)setPower:(long long)arg1 ;
-(unsigned)service;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)setEnable:(BOOL)arg1 ;
-(unsigned char)interfaceID;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)setReport:(unsigned char)arg1 withData:(id)arg2 ;
-(BOOL)getReport:(unsigned char)arg1 withData:(id)arg2 ;
@end

