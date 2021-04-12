/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UILabel;

@interface SKUIRoundedRectButton : UIButton {

	UIView* _borderView;
	UILabel* _subtitleLabel;

}
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_basicAnimationWithKeyPath:(id)arg1 ;
-(void)_reloadColors;
-(void)_reloadFonts;
-(void)setSubtitleWithLabel:(id)arg1 ;
@end

