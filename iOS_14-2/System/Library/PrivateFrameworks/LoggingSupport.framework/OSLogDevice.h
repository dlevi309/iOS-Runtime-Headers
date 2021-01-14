/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class SimDevice, NSString;

@interface OSLogDevice : NSObject {

	long long _devType;
	void* _mobDev;
	SimDevice* _simDev;
	NSString* _uid;

}

@property (assign,nonatomic) long long devType;               //@synthesize devType=_devType - In the implementation block
@property (assign,nonatomic) void* mobDev;                    //@synthesize mobDev=_mobDev - In the implementation block
@property (nonatomic,retain) SimDevice * simDev;              //@synthesize simDev=_simDev - In the implementation block
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(void)setUid:(NSString *)arg1 ;
-(NSString *)uid;
-(void*)mobDev;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(void)setMobDev:(void*)arg1 ;
-(void)setDevType:(long long)arg1 ;
-(void)setSimDev:(SimDevice *)arg1 ;
-(id)init;
-(SimDevice *)simDev;
-(id)description;
-(long long)devType;
@end

