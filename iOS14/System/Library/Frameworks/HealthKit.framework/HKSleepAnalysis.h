/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSArray;

@interface HKSleepAnalysis : NSObject {

	NSArray* _sleepDays;
	long long _numberOfAsleepSamples;
	double _averageTimeInBed;
	double _averageTimeAsleep;

}

@property (nonatomic,copy,readonly) NSArray * sleepDays;                     //@synthesize sleepDays=_sleepDays - In the implementation block
@property (nonatomic,readonly) long long numberOfAsleepSamples;              //@synthesize numberOfAsleepSamples=_numberOfAsleepSamples - In the implementation block
@property (nonatomic,readonly) double averageTimeInBed;                      //@synthesize averageTimeInBed=_averageTimeInBed - In the implementation block
@property (nonatomic,readonly) double averageTimeAsleep;                     //@synthesize averageTimeAsleep=_averageTimeAsleep - In the implementation block
+(id)emptyAnalysis;
-(NSArray *)sleepDays;
-(long long)numberOfAsleepSamples;
-(double)averageTimeAsleep;
-(id)initWithSleepDays:(id)arg1 numberOfAsleepSamples:(long long)arg2 averageTimeInBed:(double)arg3 averageTimeAlseep:(double)arg4 ;
-(double)averageTimeInBed;
@end

