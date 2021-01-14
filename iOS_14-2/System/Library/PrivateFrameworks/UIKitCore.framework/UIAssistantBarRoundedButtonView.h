/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIAssistantBarRoundedButtonViewButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)dropShadow;
-(void)setDropShadow:(BOOL)arg1 ;
@end

