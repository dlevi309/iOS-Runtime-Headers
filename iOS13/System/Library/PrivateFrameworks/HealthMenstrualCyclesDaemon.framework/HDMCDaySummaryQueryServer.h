/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKMCDaySummaryQueryConfiguration;

@interface HDMCDaySummaryQueryServer : HDQueryServer {

	HKMCDaySummaryQueryConfiguration* _configuration;

}
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)objectTypes;
-(BOOL)_queue_surfaceDaySummariesWithError:(id*)arg1 ;
@end

