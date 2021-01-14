/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)completionHandler;
-(WFHomeWorkflow *)workflow;
-(BOOL)isRunning;
-(void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(BOOL)arg3 reference:(id)arg4 dialogAttribution:(id)arg5 ;
-(void)cancel;
-(id)initWithWorkflow:(id)arg1 ;
-(WFOutOfProcessWorkflowController *)workflowController;
@end

