/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFEditWorkflowViewControllerDelegate.h>

@class WFWorkflow, WFEditWorkflowViewController, NSString;

@interface VCUIEditActionViewController : UIViewController <WFEditWorkflowViewControllerDelegate> {

	WFWorkflow* _workflow;
	WFEditWorkflowViewController* _workflowViewController;

}

@property (nonatomic,retain) WFEditWorkflowViewController * workflowViewController;              //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                            //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWorkflow *)workflow;
-(void)viewDidLoad;
-(id)initWithWorkflow:(id)arg1 ;
-(WFEditWorkflowViewController *)workflowViewController;
-(BOOL)workflowViewControllerCanRemoveActions:(id)arg1 ;
-(void)setWorkflowViewController:(WFEditWorkflowViewController *)arg1 ;
@end

