/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFModuleModelProvider.h>

@protocol WFParameterPickerViewControllerDelegate;
@class WFWorkflow, WFWorkflowViewController, NSArray, NSString;

@interface WFParameterPickerViewController : UIViewController <WFModuleModelProvider> {

	WFWorkflow* _workflow;
	id<WFParameterPickerViewControllerDelegate> _delegate;
	WFWorkflowViewController* _workflowViewController;
	NSArray* _excludedParameters;

}

@property (assign,nonatomic,__weak) WFWorkflowViewController * workflowViewController;                 //@synthesize workflowViewController=_workflowViewController - In the implementation block
@property (nonatomic,retain) NSArray * excludedParameters;                                             //@synthesize excludedParameters=_excludedParameters - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                                  //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFParameterPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFParameterPickerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)cancelPressed;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(WFWorkflowViewController *)workflowViewController;
-(void)setWorkflowViewController:(WFWorkflowViewController *)arg1 ;
-(id)createModelForAction:(id)arg1 ;
-(void)component:(id)arg1 didSelectAction:(id)arg2 parameter:(id)arg3 ;
-(NSArray *)excludedParameters;
-(void)setExcludedParameters:(NSArray *)arg1 ;
@end

