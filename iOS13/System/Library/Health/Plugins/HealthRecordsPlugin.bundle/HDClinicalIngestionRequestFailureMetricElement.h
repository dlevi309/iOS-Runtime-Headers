/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionAnalyticsMetricKey.h>
#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetricElement.h>

@class HDClinicalIngestionAnalyticsMetricKey, NSString;

@interface HDClinicalIngestionRequestFailureMetricElement : HDClinicalIngestionAnalyticsMetricKey <HDClinicalIngestionAnalyticsMetricElement> {

	unsigned long long _statusCode;

}

@property (nonatomic,copy,readonly) HDClinicalIngestionAnalyticsMetricKey * keyElement; 
@property (nonatomic,readonly) unsigned long long statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)statusCode;
-(id)analyticsString;
-(id)initWithHost:(id)arg1 resourceType:(long long)arg2 interactionType:(long long)arg3 statusCode:(unsigned long long)arg4 ;
-(HDClinicalIngestionAnalyticsMetricKey *)keyElement;
@end

