/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextView *)textView;
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)dismissKeyboard;
-(id<WFImportQuestionDetailsViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFImportQuestionDetailsViewControllerDelegate>)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)parameterEditorCellDidInvalidateSize:(id)arg1 ;
-(void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2 ;
-(void)setLayoutMetrics:(WFWorkflowSettingsLayoutMetrics *)arg1 ;
-(void)invalidateLayoutMetrics;
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

