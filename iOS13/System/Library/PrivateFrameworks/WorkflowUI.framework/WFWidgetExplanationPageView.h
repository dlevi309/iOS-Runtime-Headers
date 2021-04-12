/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFWidgetExplanationPageViewDelegate;
@class UILabel, UIButton, WFWidgetExplanationSettings;

@interface WFWidgetExplanationPageView : UIView {

	id<WFWidgetExplanationPageViewDelegate> _delegate;
	UILabel* _sloganLabel;
	UILabel* _supplementaryLabel;
	UIButton* _continueButton;
	WFWidgetExplanationSettings* _settings;

}

@property (assign,nonatomic,__weak) UILabel * sloganLabel;                                         //@synthesize sloganLabel=_sloganLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * supplementaryLabel;                                  //@synthesize supplementaryLabel=_supplementaryLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * continueButton;                                     //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) WFWidgetExplanationSettings * settings;                               //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<WFWidgetExplanationPageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFWidgetExplanationPageViewDelegate>)delegate;
-(void)setDelegate:(id<WFWidgetExplanationPageViewDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(WFWidgetExplanationSettings *)settings;
-(void)setSettings:(WFWidgetExplanationSettings *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(void)completedOnboarding;
-(void)continueButtonPressed;
-(CGSize)sloganSizeThatFits:(CGSize)arg1 ;
-(CGSize)supplementarySizeThatFits:(CGSize)arg1 ;
-(UILabel *)sloganLabel;
-(void)setSloganLabel:(UILabel *)arg1 ;
-(UILabel *)supplementaryLabel;
-(void)setSupplementaryLabel:(UILabel *)arg1 ;
@end

