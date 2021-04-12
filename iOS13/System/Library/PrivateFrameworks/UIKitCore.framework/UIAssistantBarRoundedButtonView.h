/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIAssistantBarRoundedButtonViewButton;

@interface UIAssistantBarRoundedButtonView : UIView {

	UIView* _shadowView;
	BOOL _dropShadow;
	UIAssistantBarRoundedButtonViewButton* _button;

}

@property (assign,nonatomic) BOOL dropShadow;                                               //@synthesize dropShadow=_dropShadow - In the implementation block
@property (nonatomic,readonly) UIAssistantBarRoundedButtonViewButton * button;              //@synthesize button=_button - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIAssistantBarRoundedButtonViewButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)dropShadow;
-(void)setDropShadow:(BOOL)arg1 ;
@end

