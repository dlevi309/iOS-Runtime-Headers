/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <libobjc.A.dylib/SCRStateTransitionable.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class SCRSchedulingConfiguration, NSError, SCRTask, SCRStateMachine, SCRApprovalCoordinator, NSString;

@interface SCRTaskSession : NSObject <SCRStateTransitionable, SCRSchedulable> {

	id _context;
	NSError* _error;
	SCRTask* _task;
	SCRStateMachine* _stateMachine;
	SCRApprovalCoordinator* _approvalCoordinator;

}

@property (nonatomic,readonly) SCRTask * task;                                               //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) SCRStateMachine * stateMachine;                               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) SCRApprovalCoordinator * approvalCoordinator;                 //@synthesize approvalCoordinator=_approvalCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) SCRSchedulingConfiguration * schedulingConfiguration; 
+(id)validStateTransitions;
+(id)descriptionForState:(unsigned long long)arg1 ;
-(SCRApprovalCoordinator *)approvalCoordinator;
-(SCRTask *)task;
-(void)_requestApproval;
-(void)_complete;
-(void)_start;
-(void)perform;
-(void)_performTask;
-(void)_teardownSharedContext;
-(void)_completeTask;
-(SCRStateMachine *)stateMachine;
-(void)handleStateTransition:(id)arg1 ;
-(id)initWithTask:(id)arg1 approvalCoordinator:(id)arg2 ;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(void)_setupSharedContext;
@end

