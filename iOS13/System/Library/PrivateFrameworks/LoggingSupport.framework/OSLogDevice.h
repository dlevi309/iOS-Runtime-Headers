/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(long long)devType;
-(void)setDevType:(long long)arg1 ;
-(void*)mobDev;
-(void)setMobDev:(void*)arg1 ;
-(SimDevice *)simDev;
-(void)setSimDev:(SimDevice *)arg1 ;
@end

