/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKMCDaySummaryQueryConfiguration;

@interface HDMCDaySummaryQueryServer : HDQueryServer {

	HKMCDaySummaryQueryConfiguration* _configuration;

}
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)objectTypes;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_queue_surfaceDaySummariesWithError:(id*)arg1 ;
@end

