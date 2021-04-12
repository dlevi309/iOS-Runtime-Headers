/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)supportsAnchorBasedAuthorization;
-(id)quantityType;
-(unsigned long long)mergeStrategy;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)_queue_fetchStatisticsWithError:(id*)arg1 ;
-(unsigned long long)statisticsOptions;
@end

