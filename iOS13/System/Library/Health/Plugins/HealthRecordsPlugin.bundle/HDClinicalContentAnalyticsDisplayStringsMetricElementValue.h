/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@interface HDClinicalContentAnalyticsDisplayStringsMetricElementValue : NSObject {

	double _sumSquareError;
	unsigned long long _count;
	unsigned long long _maxLength;
	double _meanLength;

}

@property (nonatomic,readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) double meanLength;                         //@synthesize meanLength=_meanLength - In the implementation block
@property (nonatomic,readonly) double stdLength; 
+(id)analyticsString;
-(id)debugDescription;
-(unsigned long long)count;
-(id)initWithLength:(unsigned long long)arg1 ;
-(unsigned long long)maxLength;
-(id)analyticsString;
-(double)stdLength;
-(double)meanLength;
-(id)metricElementValueByAddingLength:(unsigned long long)arg1 ;
@end

