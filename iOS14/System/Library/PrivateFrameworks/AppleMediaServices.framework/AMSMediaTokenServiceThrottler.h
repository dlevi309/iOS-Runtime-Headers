/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)throttle;
-(double)maxSleepInterval;
-(BOOL)shouldThrottle;
-(double)baseSleepInterval;
-(id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2 ;
-(NSDate *)throttleDate;
-(void)setThrottleDate:(NSDate *)arg1 ;
-(unsigned long long)attemptNumber;
-(void)reset;
-(void)setAttemptNumber:(unsigned long long)arg1 ;
-(void)setMaxSleepInterval:(double)arg1 ;
-(double)_calculateThrottleInterval;
-(void)setBaseSleepInterval:(double)arg1 ;
@end

