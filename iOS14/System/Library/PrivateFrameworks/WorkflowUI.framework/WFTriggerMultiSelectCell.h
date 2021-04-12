/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFTriggerMultiSelectCellDelegate;
@class UIStackView, WFTriggerOptionSelectionView, UIImpactFeedbackGenerator;

@interface WFTriggerMultiSelectCell : UITableViewCell {

	BOOL _leftViewSelected;
	BOOL _rightViewSelected;
	id<WFTriggerMultiSelectCellDelegate> _delegate;
	UIStackView* _stackView;
	WFTriggerOptionSelectionView* _leftView;
	WFTriggerOptionSelectionView* _rightView;
	UIImpactFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,readonly) UIStackView * stackView;                                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) WFTriggerOptionSelectionView * leftView;                         //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,readonly) WFTriggerOptionSelectionView * rightView;                        //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * feedbackGenerator;                   //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,getter=isLeftViewSelected,nonatomic) BOOL leftViewSelected;                   //@synthesize leftViewSelected=_leftViewSelected - In the implementation block
@property (assign,getter=isRightViewSelected,nonatomic) BOOL rightViewSelected;                 //@synthesize rightViewSelected=_rightViewSelected - In the implementation block
@property (assign,nonatomic,__weak) id<WFTriggerMultiSelectCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFTriggerMultiSelectCellDelegate>)delegate;
-(WFTriggerOptionSelectionView *)leftView;
-(UIStackView *)stackView;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(WFTriggerOptionSelectionView *)rightView;
-(void)prepareForReuse;
-(void)setDelegate:(id<WFTriggerMultiSelectCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)handleMultiSelectViewPressWithRecognizer:(id)arg1 ;
-(BOOL)leftViewSelected;
-(void)setLeftViewSelected:(BOOL)arg1 ;
-(BOOL)rightViewSelected;
-(void)setRightViewSelected:(BOOL)arg1 ;
-(void)configureWithLeftGlyph:(id)arg1 leftTitle:(id)arg2 rightGlyph:(id)arg3 rightTitle:(id)arg4 ;
-(BOOL)isLeftViewSelected;
-(BOOL)isRightViewSelected;
@end

