/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetric.h>

@class NSNumber, NSMutableDictionary, NSDictionary, NSString;

@interface HDClinicalIngestionRequestFailureMetric : NSObject <HDClinicalIngestionAnalyticsMetric> {

	NSMutableDictionary* _elements;
	NSDictionary* _collectedMetrics;

}

@property (nonatomic,retain) NSMutableDictionary * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSDictionary * collectedMetrics;                //@synthesize collectedMetrics=_collectedMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setElements:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elements;
-(void)addRequestFailureMetricElement:(id)arg1 ;
-(NSDictionary *)collectedMetrics;
-(id)init;
-(NSString *)debugDescription;
-(unsigned long long)count;
-(NSNumber *)analyticsString;
-(void)setCollectedMetrics:(NSDictionary *)arg1 ;
-(void)resetMetric;
-(void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(/*^block*/id)arg1 ;
-(void)combineWithMetric:(id)arg1 ;
@end

