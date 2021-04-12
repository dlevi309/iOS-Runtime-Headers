/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UIImageView, UILabel, WFMultilineBackgroundFadingButton;

@interface WFAutomationTypeExplanationPlatterView : UIView {

	UIStackView* _stackView;
	UIImageView* _iconView;
	UILabel* _explanationTextLabel;
	WFMultilineBackgroundFadingButton* _button;

}

@property (nonatomic,readonly) UIStackView * stackView;                                 //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * explanationTextLabel;                          //@synthesize explanationTextLabel=_explanationTextLabel - In the implementation block
@property (nonatomic,readonly) WFMultilineBackgroundFadingButton * button;              //@synthesize button=_button - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(WFMultilineBackgroundFadingButton *)button;
-(UIStackView *)stackView;
-(void)setIcon:(id)arg1 ;
-(UIImageView *)iconView;
-(void)setButtonTitle:(id)arg1 ;
-(void)setButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setButtonColor:(id)arg1 ;
-(void)configureForAutomationType:(unsigned long long)arg1 ;
-(void)setExplanatoryText:(id)arg1 ;
-(id)homeAutomationIcon;
-(id)homeExplanatoryText;
-(id)homeButtonColor;
-(UILabel *)explanationTextLabel;
@end

