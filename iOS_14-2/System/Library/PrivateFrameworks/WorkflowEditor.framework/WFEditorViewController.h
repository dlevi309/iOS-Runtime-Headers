/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIViewController.h>

@class WFWorkflow, WFEditorHostingViewController;

@interface WFEditorViewController : UIViewController {

	WFWorkflow* _workflow;
	WFEditorHostingViewController* _hostingViewController;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                                              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFEditorHostingViewController * hostingViewController;              //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
-(BOOL)isEditable;
-(WFEditorHostingViewController *)hostingViewController;
-(WFWorkflow *)workflow;
-(void)setEditable:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithWorkflow:(id)arg1 ;
@end

