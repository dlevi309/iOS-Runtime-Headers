/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class NSDateInterval, HKQuantityType;

@interface HDStatisticsQueryServer : HDQueryServer {

	NSDateInterval* _dateInterval;
	HKQuantityType* _quantityType;
	unsigned long long _statisticsOptions;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,readonly) unsigned long long statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeStrategy;                  //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(BOOL)supportsAnchorBasedAuthorization;
+(id)requiredEntitlements;
+(Class)queryClass;
-(unsigned long long)mergeStrategy;
-(id)quantityType;
-(unsigned long long)statisticsOptions;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)_queue_fetchStatisticsWithError:(id*)arg1 ;
@end

