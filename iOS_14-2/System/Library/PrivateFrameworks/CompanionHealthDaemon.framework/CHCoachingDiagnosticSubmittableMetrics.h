/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@class NSDate, NSArray, HKActivitySummary, NSDateComponents, NSNumber, HKQuantitySample;

@interface CHCoachingDiagnosticSubmittableMetrics : NSObject {

	NSDate* _startOfDay;
	NSArray* _diagnosticData;
	HKActivitySummary* _activitySummary;
	NSDateComponents* _dateOfBirth;
	NSNumber* _biologicalSex;
	HKQuantitySample* _heightSample;
	HKQuantitySample* _weightSample;

}

@property (nonatomic,retain) NSDate * startOfDay;                              //@synthesize startOfDay=_startOfDay - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticData;                       //@synthesize diagnosticData=_diagnosticData - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;              //@synthesize activitySummary=_activitySummary - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateOfBirth;                   //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) NSNumber * biologicalSex;                         //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (nonatomic,retain) HKQuantitySample * heightSample;                  //@synthesize heightSample=_heightSample - In the implementation block
@property (nonatomic,retain) HKQuantitySample * weightSample;                  //@synthesize weightSample=_weightSample - In the implementation block
-(id)init;
-(void)setBiologicalSex:(NSNumber *)arg1 ;
-(NSNumber *)biologicalSex;
-(HKActivitySummary *)activitySummary;
-(NSDateComponents *)dateOfBirth;
-(void)setDateOfBirth:(NSDateComponents *)arg1 ;
-(NSDate *)startOfDay;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(void)addDiagnosticDataObject:(id)arg1 ;
-(void)setStartOfDay:(NSDate *)arg1 ;
-(void)setHeightSample:(HKQuantitySample *)arg1 ;
-(HKQuantitySample *)heightSample;
-(void)setWeightSample:(HKQuantitySample *)arg1 ;
-(HKQuantitySample *)weightSample;
-(NSArray *)diagnosticData;
@end

