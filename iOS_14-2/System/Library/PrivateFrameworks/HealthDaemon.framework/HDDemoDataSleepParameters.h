/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDDemoDataSleepParameters : NSObject {

	double _bedtime;
	long long _bedtimeGoalHour;
	double _wakeUpTime;
	long long _wakeUpTimeGoalHour;

}

@property (assign,nonatomic) double bedtime;                            //@synthesize bedtime=_bedtime - In the implementation block
@property (assign,nonatomic) long long bedtimeGoalHour;                 //@synthesize bedtimeGoalHour=_bedtimeGoalHour - In the implementation block
@property (assign,nonatomic) double wakeUpTime;                         //@synthesize wakeUpTime=_wakeUpTime - In the implementation block
@property (assign,nonatomic) long long wakeUpTimeGoalHour;              //@synthesize wakeUpTimeGoalHour=_wakeUpTimeGoalHour - In the implementation block
-(double)bedtime;
-(void)setBedtime:(double)arg1 ;
-(double)wakeUpTime;
-(long long)wakeUpTimeGoalHour;
-(long long)bedtimeGoalHour;
-(void)setBedtimeGoalHour:(long long)arg1 ;
-(void)setWakeUpTime:(double)arg1 ;
-(void)setWakeUpTimeGoalHour:(long long)arg1 ;
@end

