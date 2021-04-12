/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDClinicalContentAnalyticsMetric.h>

@class NSMutableDictionary, NSString;

@interface HDClinicalContentAnalyticsDisplayStringsMetric : NSObject <HDClinicalContentAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long count; 
+(unsigned)AWDMetricID;
-(id)init;
-(NSString *)debugDescription;
-(unsigned long long)count;
-(id)elements;
-(void)resetMetric;
-(id)codableRepresentationForAWDSubmission;
-(id)analyticsString;
-(void)addDisplayStringsMetricWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 property:(long long)arg3 displayString:(id)arg4 ;
-(void)accumulateMetricForMedicalRecord:(id)arg1 ;
-(void)addDisplayStringsMetricWithKey:(id)arg1 value:(unsigned long long)arg2 ;
-(id)metricElementValueForKey:(id)arg1 ;
@end

