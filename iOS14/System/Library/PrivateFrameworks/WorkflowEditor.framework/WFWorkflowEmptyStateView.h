/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UIView.h>

@protocol WFWorkflowEmptyStateViewDelegate;
@class WFWorkflow, UILabel, UIButton, NSLayoutConstraint, NSAttributedString;

@interface WFWorkflowEmptyStateView : UIView {

	WFWorkflow* _workflow;
	id<WFWorkflowEmptyStateViewDelegate> _delegate;
	UILabel* _instructionLabel;
	UIButton* _tourButton;
	UIButton* _addButton;
	NSLayoutConstraint* _addButtonHeightConstraint;

}

@property (nonatomic,readonly) UILabel * instructionLabel;                                      //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (nonatomic,readonly) UIButton * tourButton;                                           //@synthesize tourButton=_tourButton - In the implementation block
@property (nonatomic,readonly) UIButton * addButton;                                            //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * addButtonHeightConstraint;                  //@synthesize addButtonHeightConstraint=_addButtonHeightConstraint - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                           //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowEmptyStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * instructionText; 
-(void)tintColorDidChange;
-(void)updateFontSizes;
-(id<WFWorkflowEmptyStateViewDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowEmptyStateViewDelegate>)arg1 ;
-(void)updateColors;
-(WFWorkflow *)workflow;
-(UILabel *)instructionLabel;
-(UIButton *)addButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setInstructionText:(NSAttributedString *)arg1 ;
-(id)initWithWorkflow:(id)arg1 forNewWorkflow:(BOOL)arg2 ;
-(void)adoptTraitCollection:(id)arg1 ;
-(void)showTutorial;
-(void)showDrawer;
-(NSAttributedString *)instructionText;
-(UIButton *)tourButton;
-(NSLayoutConstraint *)addButtonHeightConstraint;
@end

