/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKWorkoutRoute;

@interface HDWorkoutRouteQueryServer : HDQueryServer {

	unsigned long long _batchThreshold;
	HKWorkoutRoute* _locationSeries;

}
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)unitTest_setBatchThreshold:(unsigned long long)arg1 ;
@end

