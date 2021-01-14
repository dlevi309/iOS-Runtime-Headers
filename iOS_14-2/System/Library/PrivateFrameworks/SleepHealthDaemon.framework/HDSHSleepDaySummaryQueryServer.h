/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKSHSleepDaySummaryQueryConfiguration;

@interface HDSHSleepDaySummaryQueryServer : HDQueryServer {

	HKSHSleepDaySummaryQueryConfiguration* _configuration;

}
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)objectTypes;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_queue_surfaceDaySummariesWithError:(id*)arg1 ;
@end

