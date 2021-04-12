/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SKUIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)bigHitInsets;
-(void)setBigHitInsets:(UIEdgeInsets)arg1 ;
-(BOOL)useBigHitTarget;
-(void)setUseBigHitTarget:(BOOL)arg1 ;
-(SKUIImageView *)additionalImageView;
@end

