/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UIVisualEffectView, UIView, PKSplashImageHeaderView, UIVisualEffect, UIColor;

@interface PKTransactionHistoryMerchantHeaderCell : PKDashboardCollectionViewCell {

	UIVisualEffectView* _overlayEffectView;
	UIView* _shadowView;
	PKSplashImageHeaderView* _headerView;
	UIVisualEffect* _overlayEffect;
	UIColor* _shadowColor;
	double _overlayAlpha;

}

@property (nonatomic,readonly) PKSplashImageHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * overlayEffect;                      //@synthesize overlayEffect=_overlayEffect - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                               //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) double overlayAlpha;                                 //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
-(void)setOverlayAlpha:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)overlayAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)shadowColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKSplashImageHeaderView *)headerView;
-(void)setOverlayEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)overlayEffect;
@end

