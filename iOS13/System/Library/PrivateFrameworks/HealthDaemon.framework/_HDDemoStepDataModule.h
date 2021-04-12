/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_nextStepQuantitySampleWithInterval:(double)arg1 ;
-(id)_nextDistanceQuantitySampleWithInterval:(double)arg1 ;
@end

