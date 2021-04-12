/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>

@protocol WFWorkflowEmptyStateViewDelegate;
@class WFWorkflowSettingsLayoutMetrics, WFWorkflow, UILabel, UIButton, NSLayoutConstraint, NSAttributedString;

@interface WFWorkflowEmptyStateView : UIView {

	WFWorkflowSettingsLayoutMetrics* _layoutMetrics;
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
@property (nonatomic,readonly) WFWorkflowSettingsLayoutMetrics * layoutMetrics;                 //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                                           //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowEmptyStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * instructionText; 
-(id<WFWorkflowEmptyStateViewDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowEmptyStateViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)updateFontSizes;
-(WFWorkflow *)workflow;
-(UIButton *)addButton;
-(void)updateColors;
-(UILabel *)instructionLabel;
-(WFWorkflowSettingsLayoutMetrics *)layoutMetrics;
-(id)initWithWorkflow:(id)arg1 forNewWorkflow:(BOOL)arg2 ;
-(void)adoptTraitCollection:(id)arg1 ;
-(void)showTutorial;
-(void)showDrawer;
-(void)setInstructionText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)instructionText;
-(UIButton *)tourButton;
-(NSLayoutConstraint *)addButtonHeightConstraint;
@end

