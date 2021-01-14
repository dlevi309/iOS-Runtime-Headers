/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPhoneHeroView, PKPaymentSetupInitialCardEducationIconsView, UIView, UIImageView;

@interface PKEducationPhone : UIView {

	CGSize _screenSize;
	BOOL _hasPearl;
	BOOL _isAnimating;
	unsigned long long _screenType;
	PKPhoneHeroView* _phoneBackgroundView;
	PKPaymentSetupInitialCardEducationIconsView* _iconsView;
	UIView* _homeButtonView;
	UIView* _homeButtonOutlineView;
	UIImageView* _walletImageView;
	UIImageView* _cardImageView;
	UIImageView* _biometricsImageView;
	UIImageView* _powerIndicatorView;
	UIImageView* _powerArrowImageView;

}
-(double)_topPadding;
-(void)startAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setPassImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayOptions:(unsigned long long)arg2 ;
-(void)_setHomeButtonOutlineColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_deviceIconsPadding;
-(void)_startPowerIndicatorAnimation;
@end

