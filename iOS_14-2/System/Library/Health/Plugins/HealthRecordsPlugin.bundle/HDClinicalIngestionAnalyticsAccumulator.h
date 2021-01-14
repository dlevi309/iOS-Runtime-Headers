/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDHealthRecordsProfileExtension, NSSet, HDClinicalIngestionResponseTimeMetric, HDClinicalIngestionRequestFailureMetric, NSString;

@interface HDClinicalIngestionAnalyticsAccumulator : NSObject {

	HDHealthRecordsProfileExtension* _profileExtension;
	NSSet* _collectionEnabledCountryCodes;
	HDClinicalIngestionResponseTimeMetric* _responseTimes;
	HDClinicalIngestionRequestFailureMetric* _requestFailures;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,copy,readonly) NSSet * collectionEnabledCountryCodes;                             //@synthesize collectionEnabledCountryCodes=_collectionEnabledCountryCodes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionResponseTimeMetric * responseTimes;                  //@synthesize responseTimes=_responseTimes - In the implementation block
@property (nonatomic,readonly) HDClinicalIngestionRequestFailureMetric * requestFailures;              //@synthesize requestFailures=_requestFailures - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsString; 
-(void)submitMetricsWithCoordinator:(id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(void)logMetrics;
-(NSSet *)collectionEnabledCountryCodes;
-(NSString *)analyticsString;
-(id)initWithProfileExtension:(id)arg1 ;
-(HDClinicalIngestionRequestFailureMetric *)requestFailures;
-(void)consumeAndResetIngestionAnalyticsMetricsFromAccumulator:(id)arg1 ;
-(void)resetMetrics;
-(void)accumulateIngestionAnalyticsMetric:(id)arg1 gatewayCountryCode:(id)arg2 ;
-(HDClinicalIngestionResponseTimeMetric *)responseTimes;
@end

