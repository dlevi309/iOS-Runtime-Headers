/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)debugDescription;
-(unsigned long long)responseTime;
-(id)initWithHost:(id)arg1 resourceType:(long long)arg2 interactionType:(long long)arg3 timeInterval:(double)arg4 ;
-(HDClinicalIngestionAnalyticsMetricKey *)keyElement;
@end

