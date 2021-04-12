/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject {

	double _baseSleepInterval;
	double _maxSleepInterval;
	unsigned long long _attemptNumber;
	NSDate* _throttleDate;

}

@property (assign,nonatomic) unsigned long long attemptNumber;              //@synthesize attemptNumber=_attemptNumber - In the implementation block
@property (nonatomic,retain) NSDate * throttleDate;                         //@synthesize throttleDate=_throttleDate - In the implementation block
@property (assign,nonatomic) double baseSleepInterval;                      //@synthesize baseSleepInterval=_baseSleepInterval - In the implementation block
@property (assign,nonatomic) double maxSleepInterval;                       //@synthesize maxSleepInterval=_maxSleepInterval - In the implementation block
-(void)reset;
-(id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2 ;
-(void)setBaseSleepInterval:(double)arg1 ;
-(void)setMaxSleepInterval:(double)arg1 ;
-(BOOL)shouldThrottle;
-(void)throttle;
-(void)setThrottleDate:(NSDate *)arg1 ;
-(void)setAttemptNumber:(unsigned long long)arg1 ;
-(NSDate *)throttleDate;
-(double)_calculateThrottleInterval;
-(unsigned long long)attemptNumber;
-(double)baseSleepInterval;
-(double)maxSleepInterval;
@end

