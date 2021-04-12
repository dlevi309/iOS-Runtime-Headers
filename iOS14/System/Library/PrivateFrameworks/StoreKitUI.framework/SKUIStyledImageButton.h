/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class SKUIImageView;

@interface SKUIStyledImageButton : UIControl {

	BOOL _didInitialHighlightForTouch;
	SKUIImageView* _imageView;
	SKUIImageView* _additionalImageView;
	UIEdgeInsets _bigHitInsets;
	BOOL _useBigHitTarget;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets bigHitInsets;                          //@synthesize bigHitInsets=_bigHitInsets - In the implementation block
@property (nonatomic,readonly) SKUIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SKUIImageView * additionalImageView;              //@synthesize additionalImageView=_additionalImageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                         //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) BOOL useBigHitTarget;                               //@synthesize useBigHitTarget=_useBigHitTarget - In the implementation block
-(CGRect)hitRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(SKUIImageView *)imageView;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)bigHitInsets;
-(void)setBigHitInsets:(UIEdgeInsets)arg1 ;
-(BOOL)useBigHitTarget;
-(void)setUseBigHitTarget:(BOOL)arg1 ;
-(SKUIImageView *)additionalImageView;
@end

