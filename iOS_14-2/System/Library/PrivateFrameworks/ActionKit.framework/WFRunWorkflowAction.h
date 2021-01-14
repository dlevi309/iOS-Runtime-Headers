/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stop;
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2 ;
-(id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2 ;
-(id)targetContentAttribution;
-(WFWorkflowController *)workflowController;
-(void)setWorkflowController:(WFWorkflowController *)arg1 ;
-(id)getWorkflowWithError:(id*)arg1 ;
-(void)setHandoffWorkflowControllerState:(id)arg1 ;
-(void)getHandoffWorkflowControllerState:(/*^block*/id)arg1 ;
@end

