/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UILabel;

@interface SKUIRoundedRectButton : UIButton {

	UIView* _borderView;
	UILabel* _subtitleLabel;

}
-(void)tintColorDidChange;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_reloadColors;
-(void)_reloadFonts;
-(void)setSubtitleWithLabel:(id)arg1 ;
@end

