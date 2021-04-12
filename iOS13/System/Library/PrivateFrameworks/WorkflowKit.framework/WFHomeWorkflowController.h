/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFOutOfProcessWorkflowControllerDelegate.h>

@class WFOutOfProcessWorkflowController, WFHomeWorkflow, NSString;

@interface WFHomeWorkflowController : NSObject <WFOutOfProcessWorkflowControllerDelegate> {

	WFOutOfProcessWorkflowController* _workflowController;
	WFHomeWorkflow* _workflow;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFOutOfProcessWorkflowController * workflowController;              //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFHomeWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(BOOL)isRunning;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFHomeWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(WFOutOfProcessWorkflowController *)workflowController;
@end

