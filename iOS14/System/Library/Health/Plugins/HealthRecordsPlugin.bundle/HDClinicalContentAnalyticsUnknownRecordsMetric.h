/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDClinicalContentAnalyticsMetric.h>

@class NSMutableDictionary, NSString;

@interface HDClinicalContentAnalyticsUnknownRecordsMetric : NSObject <HDClinicalContentAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reportedHostFromSourceURL:(id)arg1 resourceType:(id)arg2 ;
-(id)elements;
-(id)init;
-(NSString *)debugDescription;
-(unsigned long long)count;
-(id)analyticsString;
-(void)resetMetric;
-(void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(/*^block*/id)arg1 ;
-(void)accumulateMetricForItem:(id)arg1 ;
-(void)_addMetricElementsForRulesVersion:(long long)arg1 sourceURL:(id)arg2 resourceType:(id)arg3 failureInfo:(id)arg4 ;
-(void)addUnknownRecordsMetricElement:(id)arg1 ;
-(long long)countForMetricElement:(id)arg1 ;
@end

