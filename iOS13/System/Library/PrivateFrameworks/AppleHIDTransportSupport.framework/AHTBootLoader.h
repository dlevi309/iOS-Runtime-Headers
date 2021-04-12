/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
*/


@class NSString, AHTDevice;

@interface AHTBootLoader : NSObject {

	BOOL _needsRestoreUpdate;
	BOOL _supportsMemoryDump;
	unsigned _imageTag;
	unsigned _service;
	unsigned _connect;
	unsigned _machPort;
	NSString* _personality;
	AHTDevice* _device;
	NSString* _type;

}

@property (assign,nonatomic) unsigned service;                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                       //@synthesize connect=_connect - In the implementation block
@property (assign,nonatomic) unsigned machPort;                      //@synthesize machPort=_machPort - In the implementation block
@property (nonatomic,readonly) NSString * personality;               //@synthesize personality=_personality - In the implementation block
@property (nonatomic,readonly) AHTDevice * device;                   //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned imageTag;                    //@synthesize imageTag=_imageTag - In the implementation block
@property (nonatomic,readonly) BOOL needsRestoreUpdate;              //@synthesize needsRestoreUpdate=_needsRestoreUpdate - In the implementation block
@property (nonatomic,readonly) BOOL supportsMemoryDump;              //@synthesize supportsMemoryDump=_supportsMemoryDump - In the implementation block
+(id)withService:(unsigned)arg1 ;
+(unsigned long long)frameworkToDriverOptions:(unsigned long long)arg1 ;
+(id)withDevice:(id)arg1 service:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)type;
-(unsigned)machPort;
-(void)close;
-(BOOL)isOpen;
-(AHTDevice *)device;
-(unsigned)service;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(void)setMachPort:(unsigned)arg1 ;
-(NSString *)personality;
-(void)setConnect:(unsigned)arg1 ;
-(id)initWithDevice:(id)arg1 service:(unsigned)arg2 ;
-(BOOL)createMachPort:(id*)arg1 ;
-(void)destroyMachPort;
-(unsigned)imageTag;
-(id)dispatchSourceForNotification:(id)arg1 action:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)updateProperty:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)getProperty:(id)arg1 property:(id*)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)reloadProperties:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)overridePersonality:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMemoryDumpLevel:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)getMemoryDumpLevel:(unsigned*)arg1 error:(id*)arg2 ;
-(BOOL)clearMemoryDumps:(id*)arg1 ;
-(BOOL)getMemoryDumps:(id*)arg1 error:(id*)arg2 ;
-(BOOL)needsRestoreUpdate;
-(BOOL)supportsMemoryDump;
@end

