/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalContentAnalyticsSubPropertyMetric.h>

@class HDClinicalContentAnalyticsDateFormsMetric;

@interface HDClinicalContentAnalyticsSubPropertyDateFormsMetric : HDClinicalContentAnalyticsSubPropertyMetric {

	HDClinicalContentAnalyticsDateFormsMetric* _metric;
	long long _extractionRulesVersion;
	long long _resourceType;
	long long _property;

}
-(id)initWithDateFormsMetric:(id)arg1 extractionRulesVersion:(long long)arg2 resourceType:(long long)arg3 property:(long long)arg4 ;
-(void)addDateFormsMetricElementForSubProperty:(long long)arg1 medicalDate:(id)arg2 ;
-(void)addDateFormsMetricsWithBlock:(/*^block*/id)arg1 ;
@end

