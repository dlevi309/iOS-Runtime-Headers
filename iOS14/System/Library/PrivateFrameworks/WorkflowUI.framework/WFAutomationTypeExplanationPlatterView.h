/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setButtonColor:(id)arg1 ;
-(WFMultilineBackgroundFadingButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIStackView *)stackView;
-(void)setIcon:(id)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)iconView;
-(void)setButtonTitle:(id)arg1 ;
-(void)setButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)configureForAutomationType:(unsigned long long)arg1 ;
-(void)setExplanatoryText:(id)arg1 ;
-(id)homeAutomationIcon;
-(id)homeExplanatoryText;
-(id)homeButtonColor;
-(UILabel *)explanationTextLabel;
@end

