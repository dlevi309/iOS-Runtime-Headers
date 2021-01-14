/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetricElement.h>

@class HDClinicalIngestionAnalyticsMetricKey, NSString;

@interface HDClinicalIngestionResponseTimeMetricElement : NSObject <HDClinicalIngestionAnalyticsMetricElement> {

	HDClinicalIngestionAnalyticsMetricKey* _keyElement;
	unsigned long long _responseTime;

}

@property (nonatomic,copy,readonly) HDClinicalIngestionAnalyticsMetricKey * keyElement;              //@synthesize keyElement=_keyElement - In the implementation block
@property (nonatomic,readonly) unsigned long long responseTime;                                      //@synthesize responseTime=_responseTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metricWithSourceURL:(id)arg1 baseURL:(id)arg2 timeInterval:(double)arg3 ;
+(id)metricWithSourceURL:(id)arg1 resourceType:(id)arg2 interactionType:(long long)arg3 timeInterval:(double)arg4 ;
-(NSString *)debugDescription;
-(unsigned long long)responseTime;
-(HDClinicalIngestionAnalyticsMetricKey *)keyElement;
-(id)initWithKeyElement:(id)arg1 responseTime:(unsigned long long)arg2 ;
@end

