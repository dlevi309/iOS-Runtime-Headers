/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

