/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
*/


@class NSString;

@interface AHTLoader : NSObject {

	unsigned _imageTag;
	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;                 //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                 //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned imageTag;              //@synthesize imageTag=_imageTag - In the implementation block
+(id)allDevices;
+(id)withService:(unsigned)arg1 ;
+(BOOL)errorFromKernel:(int)arg1 error:(id*)arg2 ;
+(id)withName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)close;
-(unsigned)service;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(unsigned)imageTag;
-(BOOL)loadImage:(id)arg1 payloadOnly:(BOOL)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
@end

