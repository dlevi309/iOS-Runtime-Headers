/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAppInstalledResource.h>

@class INIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource {

	BOOL _intentIsSynced;
	BOOL _actionRequiresRemoteExecution;
	INIntentExecutionInfo* _executionInfo;

}

@property (nonatomic,readonly) INIntentExecutionInfo * executionInfo;              //@synthesize executionInfo=_executionInfo - In the implementation block
@property (nonatomic,readonly) BOOL intentIsSynced;                                //@synthesize intentIsSynced=_intentIsSynced - In the implementation block
@property (nonatomic,readonly) BOOL actionRequiresRemoteExecution;                 //@synthesize actionRequiresRemoteExecution=_actionRequiresRemoteExecution - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)refreshAvailability;
-(id)initWithDefinition:(id)arg1 intentExecutionInfo:(id)arg2 isSyncedFromOtherDevice:(BOOL)arg3 ;
-(BOOL)intentIsEligibleForRemoteExecution;
-(BOOL)intentIsLocallyAvailable;
-(void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1 ;
-(INIntentExecutionInfo *)executionInfo;
-(BOOL)intentIsSynced;
-(BOOL)actionRequiresRemoteExecution;
@end

