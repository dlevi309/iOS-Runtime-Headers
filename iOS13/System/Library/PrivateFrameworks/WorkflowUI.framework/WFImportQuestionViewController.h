/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFParameterEditorHostingCellDelegate.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@protocol WFImportQuestionViewControllerDelegate;
@class WFWorkflowImportQuestion, WFGradient, UIViewController, WFParameterEditorHostingCell, WFParameterEditorModel, NSString;

@interface WFImportQuestionViewController : UITableViewController <WFParameterEditorHostingCellDelegate, WFActionEventObserver> {

	id<WFImportQuestionViewControllerDelegate> _delegate;
	WFWorkflowImportQuestion* _importQuestion;
	WFGradient* _workflowGradient;
	UIViewController* _presenter;
	WFParameterEditorHostingCell* _parameterEditorCell;
	WFParameterEditorModel* _parameterEditorModel;
	CGSize _parameterEditorSize;

}

@property (assign,nonatomic,__weak) WFParameterEditorHostingCell * parameterEditorCell;               //@synthesize parameterEditorCell=_parameterEditorCell - In the implementation block
@property (nonatomic,retain) WFParameterEditorModel * parameterEditorModel;                           //@synthesize parameterEditorModel=_parameterEditorModel - In the implementation block
@property (assign,nonatomic) CGSize parameterEditorSize;                                              //@synthesize parameterEditorSize=_parameterEditorSize - In the implementation block
@property (assign,nonatomic,__weak) id<WFImportQuestionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflowImportQuestion * importQuestion;                             //@synthesize importQuestion=_importQuestion - In the implementation block
@property (nonatomic,readonly) WFGradient * workflowGradient;                                         //@synthesize workflowGradient=_workflowGradient - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenter;                                     //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFImportQuestionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFImportQuestionViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(UIViewController *)presenter;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2 ;
-(void)parameterEditorCellDidInvalidateSize:(id)arg1 ;
-(void)updateParameterEditorModel;
-(WFGradient *)workflowGradient;
-(WFWorkflowImportQuestion *)importQuestion;
-(WFParameterEditorModel *)parameterEditorModel;
-(void)setParameterEditorModel:(WFParameterEditorModel *)arg1 ;
-(WFParameterEditorHostingCell *)parameterEditorCell;
-(void)setParameterEditorCell:(WFParameterEditorHostingCell *)arg1 ;
-(CGSize)parameterEditorSize;
-(void)setParameterEditorSize:(CGSize)arg1 ;
-(id)initWithImportQuestion:(id)arg1 workflowGradient:(id)arg2 ;
-(void)reflowParameterEditor;
@end

