/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSSet, HDClinicalIngestionResponseTimeMetric, HDClinicalIngestionRequestFailureMetric, NSString;

@interface HDClinicalIngestionAnalyticsAccumulator : NSObject {

	NSSet* _collectionEnabledCountryCodes;
	HDClinicalIngestionResponseTimeMetric* _responseTimes;
	HDClinicalIngestionRequestFailureMetric* _requestFailures;

}

@property (nonatomic,copy,readonly) NSSet * collectionEnabledCountryCodes;                             //@synthesize collectionEnabledCountryCodes=_collectionEnabledCountryCodes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionResponseTimeMetric * responseTimes;                  //@synthesize responseTimes=_responseTimes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionRequestFailureMetric * requestFailures;              //@synthesize requestFailures=_requestFailures - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsString; 
-(HDClinicalIngestionRequestFailureMetric *)requestFailures;
-(void)resetMetrics;
-(void)submitMetrics;
-(NSString *)analyticsString;
-(id)initWithProfileExtension:(id)arg1 ;
-(HDClinicalIngestionResponseTimeMetric *)responseTimes;
-(void)accumulateIngestionAnalyticsMetric:(id)arg1 gatewayCountryCode:(id)arg2 ;
-(void)logMetrics;
-(void)consumeAndResetIngestionAnalyticsMetricsFromAccumulator:(id)arg1 ;
-(NSSet *)collectionEnabledCountryCodes;
@end

