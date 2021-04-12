/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFWorkflowControllerDelegate.h>

@class WFWorkflowController, NSString;

@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate> {

	WFWorkflowController* _workflowController;

}

@property (assign,nonatomic,__weak) WFWorkflowController * workflowController;              //@synthesize workflowController=_workflowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)wasAddedToWorkflowByUser:(id)arg1 ;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(BOOL)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2 ;
-(id)targetDataInfo;
-(WFWorkflowController *)workflowController;
-(void)setWorkflowController:(WFWorkflowController *)arg1 ;
-(id)getWorkflowWithError:(id*)arg1 ;
-(void)setHandoffWorkflowControllerState:(id)arg1 ;
-(void)getHandoffWorkflowControllerState:(/*^block*/id)arg1 ;
-(void)runWorkflowWithInput:(id)arg1 ;
@end

