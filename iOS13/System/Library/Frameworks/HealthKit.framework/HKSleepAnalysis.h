/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSArray;

@interface HKSleepAnalysis : NSObject {

	NSArray* _sleepDays;
	long long _numberOfAsleepSamples;
	long long _consistencyCount;
	double _averageEfficiency;
	double _averageTimeInBed;
	double _averageTimeAsleep;
	long long _averageNumberOfInterruptions;

}

@property (nonatomic,copy,readonly) NSArray * sleepDays;                            //@synthesize sleepDays=_sleepDays - In the implementation block
@property (nonatomic,readonly) long long numberOfAsleepSamples;                     //@synthesize numberOfAsleepSamples=_numberOfAsleepSamples - In the implementation block
@property (nonatomic,readonly) long long consistencyCount;                          //@synthesize consistencyCount=_consistencyCount - In the implementation block
@property (nonatomic,readonly) double averageEfficiency;                            //@synthesize averageEfficiency=_averageEfficiency - In the implementation block
@property (nonatomic,readonly) double averageTimeInBed;                             //@synthesize averageTimeInBed=_averageTimeInBed - In the implementation block
@property (nonatomic,readonly) double averageTimeAsleep;                            //@synthesize averageTimeAsleep=_averageTimeAsleep - In the implementation block
@property (nonatomic,readonly) long long averageNumberOfInterruptions;              //@synthesize averageNumberOfInterruptions=_averageNumberOfInterruptions - In the implementation block
+(id)emptyAnalysis;
-(id)initWithSleepDays:(id)arg1 numberOfAsleepSamples:(long long)arg2 consistencyCount:(long long)arg3 averageEfficiency:(double)arg4 averageTimeInBed:(double)arg5 averageTimeAlseep:(double)arg6 averageNumberOfInterruptions:(long long)arg7 ;
-(NSArray *)sleepDays;
-(long long)numberOfAsleepSamples;
-(long long)consistencyCount;
-(double)averageEfficiency;
-(double)averageTimeInBed;
-(double)averageTimeAsleep;
-(long long)averageNumberOfInterruptions;
@end

