/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/_HDDemoDataModule.h>

@interface _HDDemoStepDataModule : _HDDemoDataModule {

	double _nextFireInterval;
	unsigned long long _nextStepCount;
	double _nextDistance;

}
-(double)nextFireInterval;
-(void)scheduleNextFire;
-(void)timerDidFireWithInterval:(double)arg1 ;
-(void)_getDelayBeforeNextStepData:(double*)arg1 stepCount:(unsigned long long*)arg2 distance:(double*)arg3 ;
@end

