/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/


@class NSMutableArray, NSMutableDictionary;

@interface HDMCDaySummaryBuilder : NSObject {

	NSMutableArray* _menstrualFlowSamples;
	NSMutableArray* _intermenstrualBleedingSamples;
	NSMutableArray* _symptomsSamples;
	NSMutableArray* _sexualActivitySamples;
	NSMutableArray* _ovulationTestResultSamples;
	NSMutableArray* _cervicalMucusQualitySamples;
	NSMutableArray* _basalBodyTemperatureSamples;
	NSMutableDictionary* _sampleCountByType;
	long long _dayIndex;

}

@property (nonatomic,readonly) long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
-(unsigned long long)_symptoms;
-(long long)_ovulationTestResult;
-(long long)dayIndex;
-(BOOL)_intermenstrualBleeding;
-(long long)_sexualActivity;
-(long long)_cervicalMucusQuality;
-(id)_basalBodyTemperature;
-(id)createDaySummaryWithDevice:(id)arg1 calendarCache:(id)arg2 ;
-(id)initWithDayIndex:(long long)arg1 ;
-(void)addCycleTrackingSample:(id)arg1 ;
-(long long)_menstrualFlowWithCalendarCache:(id)arg1 modificationDay:(long long*)arg2 startOfCycleFromCycleTracking:(id*)arg3 ;
@end

