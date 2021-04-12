/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/


@class HDProfile, HKMCAnalysis, HDKeyValueDomain;

@interface HDMCDailyAnalytics : NSObject {

	HDProfile* _profile;
	HKMCAnalysis* _analysis;
	HDKeyValueDomain* _keyValueDomain;

}
+(BOOL)shouldSubmit;
-(BOOL)_collectDiagnosticFieldsForMetric:(id)arg1 gregorianCalendar:(id)arg2 error:(id*)arg3 ;
-(BOOL)_collectSensitiveFieldsForMetric:(id)arg1 gregorianCalendar:(id)arg2 error:(id*)arg3 ;
-(id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 ;
-(id)_yearsBetweenStartDateComponents:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 ;
-(id)initWithProfile:(id)arg1 analysis:(id)arg2 ;
-(BOOL)submitMetricWithError:(id*)arg1 ;
@end

