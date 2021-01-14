/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionAnalyticsMetricKey.h>
#import <libobjc.A.dylib/HDClinicalIngestionAnalyticsMetricElement.h>

@class HDClinicalIngestionAnalyticsMetricKey, NSDate, NSString;

@interface HDClinicalIngestionRequestFailureMetricElement : HDClinicalIngestionAnalyticsMetricKey <HDClinicalIngestionAnalyticsMetricElement> {

	unsigned long long _statusCode;
	NSDate* _observedDate;

}

@property (nonatomic,copy,readonly) HDClinicalIngestionAnalyticsMetricKey * keyElement; 
@property (nonatomic,readonly) unsigned long long statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy,readonly) NSDate * observedDate;                                           //@synthesize observedDate=_observedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * reportableObservedDateString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metricWithSourceURL:(id)arg1 baseURL:(id)arg2 statusCode:(unsigned long long)arg3 ;
+(id)metricWithSourceURL:(id)arg1 resourceType:(id)arg2 interactionType:(long long)arg3 statusCode:(unsigned long long)arg4 ;
-(unsigned long long)statusCode;
-(id)analyticsString;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(HDClinicalIngestionAnalyticsMetricKey *)keyElement;
-(NSString *)reportableObservedDateString;
-(id)initWithReportedHost:(id)arg1 resourceType:(id)arg2 interactionType:(long long)arg3 statusCode:(unsigned long long)arg4 observedDate:(id)arg5 ;
-(NSDate *)observedDate;
@end

