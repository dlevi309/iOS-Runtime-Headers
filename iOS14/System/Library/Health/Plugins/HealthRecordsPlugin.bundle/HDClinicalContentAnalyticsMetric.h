/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@protocol HDClinicalContentAnalyticsMetric <HDClinicalAnalyticsMetric>
@property (readonly) unsigned long long count; 
@required
-(unsigned long long)count;
-(id)analyticsString;
-(void)resetMetric;
-(void)accumulateMetricForItem:(id)arg1;

@end

