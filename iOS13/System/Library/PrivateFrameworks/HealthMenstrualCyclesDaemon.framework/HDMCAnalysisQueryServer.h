/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDMCAnalysisManagerObserver.h>

@class HDMCProfileExtension, HKMCAnalysis, NSString;

@interface HDMCAnalysisQueryServer : HDQueryServer <HDMCAnalysisManagerObserver> {

	HDMCProfileExtension* _profileExtension;
	HKMCAnalysis* _analysis;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(id)objectTypes;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(id)_analysisQueryClientProxy;
-(void)_handleAnalysis:(id)arg1 ;
@end

