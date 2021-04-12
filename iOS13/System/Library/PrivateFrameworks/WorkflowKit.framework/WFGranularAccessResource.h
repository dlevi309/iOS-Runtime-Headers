/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAccessResource.h>

@class WFGranularAccessResourcePerWorkflowState, NSSet;

@interface WFGranularAccessResource : WFAccessResource {

	WFGranularAccessResourcePerWorkflowState* _stateForRequestedEntries;

}

@property (nonatomic,readonly) WFGranularAccessResourcePerWorkflowState * currentGranularPerWorkflowState; 
@property (nonatomic,retain) WFGranularAccessResourcePerWorkflowState * stateForRequestedEntries;                       //@synthesize stateForRequestedEntries=_stateForRequestedEntries - In the implementation block
@property (nonatomic,readonly) NSSet * requestedEntries; 
@property (nonatomic,readonly) NSSet * valuesWithNotDeterminedAccess; 
@property (nonatomic,readonly) NSSet * valuesWithDeniedAccess; 
+(Class)perWorkflowStateClass;
-(id)description;
-(NSSet *)requestedEntries;
-(void)updateStateForRequestedEntries;
-(NSSet *)valuesWithNotDeterminedAccess;
-(NSSet *)valuesWithDeniedAccess;
-(WFGranularAccessResourcePerWorkflowState *)currentGranularPerWorkflowState;
-(void)setCurrentPerWorkflowState:(id)arg1 ;
-(unsigned long long)workflowLevelStatus;
-(id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2 ;
-(WFGranularAccessResourcePerWorkflowState *)stateForRequestedEntries;
-(void)setStateForRequestedEntries:(WFGranularAccessResourcePerWorkflowState *)arg1 ;
@end

