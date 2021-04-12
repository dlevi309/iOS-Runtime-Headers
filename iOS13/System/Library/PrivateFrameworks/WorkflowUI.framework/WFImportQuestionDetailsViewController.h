/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFParameterEditorHostingCellDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol WFImportQuestionDetailsViewControllerDelegate;
@class WFGradient, WFWorkflowSettingsLayoutMetrics, WFWorkflowImportQuestion, WFParameterEditorModel, WFParameterEditorHostingCell, UITextView, WFParameter, WFAction, NSString;

@interface WFImportQuestionDetailsViewController : UITableViewController <WFParameterEditorHostingCellDelegate, UITextViewDelegate> {

	BOOL _focusOnTextView;
	id<WFImportQuestionDetailsViewControllerDelegate> _delegate;
	WFGradient* _workflowGradient;
	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
	WFWorkflowImportQuestion* _importQuestion;
	WFParameterEditorModel* _parameterEditorModel;
	WFParameterEditorHostingCell* _parameterEditorCell;
	UITextView* _textView;
	WFParameter* _retainedParameter;
	WFAction* _retainedAction;
	CGSize _parameterEditorSize;

}

@property (nonatomic,retain) WFWorkflowImportQuestion * importQuestion;                                      //@synthesize importQuestion=_importQuestion - In the implementation block
@property (nonatomic,retain) WFParameterEditorModel * parameterEditorModel;                                  //@synthesize parameterEditorModel=_parameterEditorModel - In the implementation block
@property (assign,nonatomic,__weak) WFParameterEditorHostingCell * parameterEditorCell;                      //@synthesize parameterEditorCell=_parameterEditorCell - In the implementation block
@property (assign,nonatomic) CGSize parameterEditorSize;                                                     //@synthesize parameterEditorSize=_parameterEditorSize - In the implementation block
@property (assign,nonatomic) BOOL focusOnTextView;                                                           //@synthesize focusOnTextView=_focusOnTextView - In the implementation block
@property (assign,nonatomic,__weak) UITextView * textView;                                                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) WFParameter * retainedParameter;                                              //@synthesize retainedParameter=_retainedParameter - In the implementation block
@property (nonatomic,readonly) WFAction * retainedAction;                                                    //@synthesize retainedAction=_retainedAction - In the implementation block
@property (assign,nonatomic,__weak) id<WFImportQuestionDetailsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFGradient * workflowGradient;                                                //@synthesize workflowGradient=_workflowGradient - In the implementation block
@property (nonatomic,retain) WFWorkflowSettingsLayoutMetrics * layoutMetrics;                                //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFImportQuestionDetailsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFImportQuestionDetailsViewControllerDelegate>)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)dismissKeyboard;
-(void)textViewDidChange:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(void)setLayoutMetrics:(WFWorkflowSettingsLayoutMetrics *)arg1 ;
-(void)invalidateLayoutMetrics;
-(void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2 ;
-(void)parameterEditorCellDidInvalidateSize:(id)arg1 ;
-(id)initWithImportQuestion:(id)arg1 forTypingQuestion:(BOOL)arg2 workflowGradient:(id)arg3 ;
-(void)updateParameterEditorModel;
-(void)reflowParameterEditorCell;
-(WFGradient *)workflowGradient;
-(WFWorkflowImportQuestion *)importQuestion;
-(void)setImportQuestion:(WFWorkflowImportQuestion *)arg1 ;
-(WFParameterEditorModel *)parameterEditorModel;
-(void)setParameterEditorModel:(WFParameterEditorModel *)arg1 ;
-(WFParameterEditorHostingCell *)parameterEditorCell;
-(void)setParameterEditorCell:(WFParameterEditorHostingCell *)arg1 ;
-(CGSize)parameterEditorSize;
-(void)setParameterEditorSize:(CGSize)arg1 ;
-(BOOL)focusOnTextView;
-(void)setFocusOnTextView:(BOOL)arg1 ;
-(WFParameter *)retainedParameter;
-(WFAction *)retainedAction;
@end

