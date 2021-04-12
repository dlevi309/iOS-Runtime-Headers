/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalContentAnalyticsSubPropertyMetric.h>

@class HDClinicalContentAnalyticsDisplayStringsMetric;

@interface HDClinicalContentAnalyticsSubPropertyDisplayStringsMetric : HDClinicalContentAnalyticsSubPropertyMetric {

	HDClinicalContentAnalyticsDisplayStringsMetric* _metric;
	long long _extractionRulesVersion;
	long long _resourceType;
	long long _property;

}
-(id)initWithDisplayStringsMetric:(id)arg1 extractionRulesVersion:(long long)arg2 resourceType:(long long)arg3 property:(long long)arg4 ;
-(void)addDisplayStringsMetricWithBlock:(/*^block*/id)arg1 ;
-(void)addDisplayStringsMetricForSubProperty:(long long)arg1 coding:(id)arg2 ;
@end

