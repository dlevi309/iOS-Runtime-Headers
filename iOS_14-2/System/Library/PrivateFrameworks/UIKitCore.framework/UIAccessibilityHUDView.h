/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAccessibilityHUDItem, UIView, UIVisualEffectView, UIBlurEffect, UIImageView, UILabel;

@interface UIAccessibilityHUDView : UIView {

	UIAccessibilityHUDItem* _item;
	UIView* _transformContainer;
	UIVisualEffectView* _effectView;
	UIBlurEffect* _blurEffect;
	UIVisualEffectView* _itemEffectView;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIView* _customView;

}

@property (nonatomic,copy) UIAccessibilityHUDItem * item;              //@synthesize item=_item - In the implementation block
+(CGSize)preferredHUDSize;
-(id)titleLabel;
-(id)imageView;
-(UIAccessibilityHUDItem *)item;
-(id)layoutManager;
-(void)setItem:(UIAccessibilityHUDItem *)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)layoutSubviews;
-(id)customView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHUDItem:(id)arg1 ;
-(void)_show:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(UIEdgeInsets)imageInsetsForLayout;
-(id)itemContainerViewForLayout;
-(id)containerViewForLayout;
-(void)_updateLabelForItem;
-(id)_contentEffectsForItem:(id)arg1 ;
@end

