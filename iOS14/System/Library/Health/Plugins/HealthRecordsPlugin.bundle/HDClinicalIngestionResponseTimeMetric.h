/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetric.h>

@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface HDClinicalIngestionResponseTimeMetric : NSObject <HDClinicalIngestionAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (nonatomic,retain) NSMutableDictionary * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) NSDictionary * collectedMetrics; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setElements:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elements;
-(NSDictionary *)collectedMetrics;
-(id)init;
-(NSString *)debugDescription;
-(unsigned long long)count;
-(void)addResponseTimeMetricElement:(id)arg1 ;
-(NSNumber *)analyticsString;
-(void)resetMetric;
-(void)enumerateElementsAsCoreAnalyticsPayloadUsingBlock:(/*^block*/id)arg1 ;
-(void)combineWithMetric:(id)arg1 ;
@end

