/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetric.h>

@class NSNumber, NSMutableDictionary, NSDictionary;

@interface HDClinicalIngestionRequestFailureMetric : NSObject <HDClinicalIngestionAnalyticsMetric> {

	NSMutableDictionary* _elements;
	NSDictionary* _collectedMetrics;

}

@property (nonatomic,retain) NSMutableDictionary * elements;                 //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) NSDictionary * collectedMetrics;                //@synthesize collectedMetrics=_collectedMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
+(unsigned)AWDMetricID;
-(id)init;
-(id)debugDescription;
-(unsigned long long)count;
-(NSMutableDictionary *)elements;
-(void)setElements:(NSMutableDictionary *)arg1 ;
-(void)resetMetric;
-(id)codableRepresentationForAWDSubmission;
-(NSNumber *)analyticsString;
-(void)addRequestFailureMetricElement:(id)arg1 ;
-(NSDictionary *)collectedMetrics;
-(void)combineWithMetric:(id)arg1 ;
-(void)setCollectedMetrics:(NSDictionary *)arg1 ;
@end

