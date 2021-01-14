/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(void)cancelPressed;
-(id<WFParameterPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFParameterPickerViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)loadView;
-(id)initWithWorkflow:(id)arg1 ;
-(WFWorkflowViewController *)workflowViewController;
-(id)createModelForAction:(id)arg1 ;
-(void)component:(id)arg1 didSelectAction:(id)arg2 parameter:(id)arg3 ;
-(void)setWorkflowViewController:(WFWorkflowViewController *)arg1 ;
-(NSArray *)excludedParameters;
-(void)setExcludedParameters:(NSArray *)arg1 ;
@end

