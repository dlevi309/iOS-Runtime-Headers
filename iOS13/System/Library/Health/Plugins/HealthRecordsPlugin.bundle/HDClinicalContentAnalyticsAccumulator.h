/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDClinicalContentAnalyticsCodingsMetric, HDClinicalContentAnalyticsDisplayStringsMetric, HDClinicalContentAnalyticsSortDatesMetric, HDClinicalContentAnalyticsDateFormsMetric, HDClinicalContentAnalyticsUnknownRecordsMetric;

@interface HDClinicalContentAnalyticsAccumulator : NSObject {

	HDClinicalContentAnalyticsCodingsMetric* _codingsMetric;
	HDClinicalContentAnalyticsDisplayStringsMetric* _displayStringsMetric;
	HDClinicalContentAnalyticsSortDatesMetric* _sortDatesMetric;
	HDClinicalContentAnalyticsDateFormsMetric* _dateFormsMetric;
	HDClinicalContentAnalyticsUnknownRecordsMetric* _unknownRecordsMetric;
	long long _batchCount;

}

@property (nonatomic,readonly) HDClinicalContentAnalyticsCodingsMetric * codingsMetric;                            //@synthesize codingsMetric=_codingsMetric - In the implementation block
@property (nonatomic,readonly) HDClinicalContentAnalyticsDisplayStringsMetric * displayStringsMetric;              //@synthesize displayStringsMetric=_displayStringsMetric - In the implementation block
@property (nonatomic,readonly) HDClinicalContentAnalyticsSortDatesMetric * sortDatesMetric;                        //@synthesize sortDatesMetric=_sortDatesMetric - In the implementation block
@property (nonatomic,readonly) HDClinicalContentAnalyticsDateFormsMetric * dateFormsMetric;                        //@synthesize dateFormsMetric=_dateFormsMetric - In the implementation block
@property (nonatomic,readonly) HDClinicalContentAnalyticsUnknownRecordsMetric * unknownRecordsMetric;              //@synthesize unknownRecordsMetric=_unknownRecordsMetric - In the implementation block
@property (nonatomic,readonly) long long batchCount;                                                               //@synthesize batchCount=_batchCount - In the implementation block
-(id)init;
-(id)debugDescription;
-(long long)batchCount;
-(void)incrementBatchCount;
-(void)resetMetrics;
-(void)submitMetrics;
-(id)analyticsString;
-(HDClinicalContentAnalyticsUnknownRecordsMetric *)unknownRecordsMetric;
-(HDClinicalContentAnalyticsCodingsMetric *)codingsMetric;
-(HDClinicalContentAnalyticsDisplayStringsMetric *)displayStringsMetric;
-(HDClinicalContentAnalyticsSortDatesMetric *)sortDatesMetric;
-(HDClinicalContentAnalyticsDateFormsMetric *)dateFormsMetric;
-(void)accumulateMetricsForMedicalRecord:(id)arg1 ;
@end

