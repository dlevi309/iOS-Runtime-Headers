/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDClinicalContentAnalyticsUnknownRecordsMetric;

@interface HDClinicalContentAnalyticsAccumulator : NSObject {

	HDClinicalContentAnalyticsUnknownRecordsMetric* _unknownRecordsMetric;
	long long _batchCount;

}

@property (nonatomic,readonly) HDClinicalContentAnalyticsUnknownRecordsMetric * unknownRecordsMetric;              //@synthesize unknownRecordsMetric=_unknownRecordsMetric - In the implementation block
@property (nonatomic,readonly) long long batchCount;                                                               //@synthesize batchCount=_batchCount - In the implementation block
-(void)submitMetricsWithCoordinator:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)incrementBatchCount;
-(id)analyticsString;
-(long long)batchCount;
-(void)resetMetrics;
-(HDClinicalContentAnalyticsUnknownRecordsMetric *)unknownRecordsMetric;
-(void)accumulateMetricsForItem:(id)arg1 ;
@end

