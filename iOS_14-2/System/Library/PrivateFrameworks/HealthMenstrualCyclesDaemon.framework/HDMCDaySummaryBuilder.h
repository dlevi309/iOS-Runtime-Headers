/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/


@class HKCalendarCache, NSMutableArray, NSMutableDictionary;

@interface HDMCDaySummaryBuilder : NSObject {

	HKCalendarCache* _calendarCache;
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
-(long long)_ovulationTestResult;
-(unsigned long long)_symptoms;
-(long long)dayIndex;
-(BOOL)_intermenstrualBleeding;
-(long long)_sexualActivity;
-(long long)_cervicalMucusQuality;
-(id)_basalBodyTemperature;
-(id)createDaySummaryWithDevice:(id)arg1 ;
-(id)initWithDayIndex:(long long)arg1 calendarCache:(id)arg2 ;
-(void)addCycleTrackingSample:(id)arg1 ;
-(long long)_menstrualFlowWithModificationDay:(long long*)arg1 startOfCycleFromCycleTracking:(id*)arg2 ;
@end

