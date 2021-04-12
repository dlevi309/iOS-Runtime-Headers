/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@class NSDate, NSString;

@interface WLSourceDeviceMigrationMetadata : NSObject {

	NSDate* _communicationDate;
	unsigned long long _state;
	unsigned long long _attemptCount;
	unsigned long long _crashCount;
	NSString* _deviceOSVersion;
	NSString* _deviceType;
	NSString* _deviceModel;

}

@property (nonatomic,retain) NSDate * communicationDate;                   //@synthesize communicationDate=_communicationDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (assign,nonatomic) unsigned long long crashCount;                //@synthesize crashCount=_crashCount - In the implementation block
@property (nonatomic,retain) NSString * deviceOSVersion;                   //@synthesize deviceOSVersion=_deviceOSVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceType;                        //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                       //@synthesize deviceModel=_deviceModel - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)deviceType;
-(unsigned long long)attemptCount;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceOSVersion;
-(void)setDeviceOSVersion:(NSString *)arg1 ;
-(void)setCommunicationDate:(NSDate *)arg1 ;
-(void)setCrashCount:(unsigned long long)arg1 ;
-(NSDate *)communicationDate;
-(unsigned long long)crashCount;
@end

