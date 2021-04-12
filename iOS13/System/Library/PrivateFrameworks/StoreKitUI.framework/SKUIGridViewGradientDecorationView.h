/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class SKUIGridViewGradientDecorationBackgroundView, IKColor, UIView;

@interface SKUIGridViewGradientDecorationView : UICollectionReusableView {

	SKUIGridViewGradientDecorationBackgroundView* _backgroundView;
	IKColor* _kolor;

}

@property (nonatomic,readonly) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_createGradient:(id)arg1 withGradientType:(long long)arg2 ;
@end

