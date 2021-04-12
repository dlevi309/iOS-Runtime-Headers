/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

@class NSNumber;


@protocol HDClinicalIngestionAnalyticsMetric
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSNumber * analyticsString; 
@required
+(unsigned)AWDMetricID;
-(unsigned long long)count;
-(id)codableRepresentationForAWDSubmission;
-(NSNumber *)analyticsString;

@end

