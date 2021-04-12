/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIView, EMFEmojiToken, NSArray, ShapeView;

@interface TUIEmojiVariantSelectorView : UIControl {

	UIView* _variantCellContainerView;
	EMFEmojiToken* _selectedVariant;
	NSArray* _allVariants;
	UIView* _deepShadowView;
	UIView* _keyShadowView;
	UIView* _backdropView;
	ShapeView* _backgroundMaskView;
	ShapeView* _borderView;
	UIView* _separatorView;
	EMFEmojiToken* _baseEmojiToken;
	NSArray* _arrangedVariantCells;
	CGRect _originRect;

}

@property (nonatomic,retain) UIView * deepShadowView;                          //@synthesize deepShadowView=_deepShadowView - In the implementation block
@property (nonatomic,retain) UIView * keyShadowView;                           //@synthesize keyShadowView=_keyShadowView - In the implementation block
@property (nonatomic,retain) UIView * backdropView;                            //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) ShapeView * backgroundMaskView;                   //@synthesize backgroundMaskView=_backgroundMaskView - In the implementation block
@property (nonatomic,retain) ShapeView * borderView;                           //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                           //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) CGRect originRect;                                //@synthesize originRect=_originRect - In the implementation block
@property (nonatomic,retain) EMFEmojiToken * baseEmojiToken;                   //@synthesize baseEmojiToken=_baseEmojiToken - In the implementation block
@property (nonatomic,retain) NSArray * arrangedVariantCells;                   //@synthesize arrangedVariantCells=_arrangedVariantCells - In the implementation block
@property (nonatomic,readonly) UIView * variantCellContainerView;              //@synthesize variantCellContainerView=_variantCellContainerView - In the implementation block
@property (nonatomic,readonly) EMFEmojiToken * selectedVariant;                //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (nonatomic,readonly) NSArray * allVariants;                          //@synthesize allVariants=_allVariants - In the implementation block
+(id)emojiTextAttributes;
-(UIView *)backdropView;
-(void)setBackdropView:(UIView *)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)separatorView;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(EMFEmojiToken *)selectedVariant;
-(void)layoutSubviews;
-(ShapeView *)borderView;
-(CGRect)originRect;
-(id)initWithFrame:(CGRect)arg1 emojiToken:(id)arg2 originRect:(CGRect)arg3 ;
-(CGSize)_emojiCellSize;
-(NSArray *)allVariants;
-(unsigned long long)_numberOfVariants;
-(id)_backgroundBezierPathForContainerRect:(CGRect)arg1 originRect:(CGRect)arg2 ;
-(void)_unhighlightAllViews;
-(UIView *)deepShadowView;
-(id)_variantCellAtLocation:(CGPoint)arg1 ;
-(BOOL)_highlightCellAtLocation:(CGPoint)arg1 ;
-(UIView *)variantCellContainerView;
-(void)setDeepShadowView:(UIView *)arg1 ;
-(UIView *)keyShadowView;
-(void)setKeyShadowView:(UIView *)arg1 ;
-(ShapeView *)backgroundMaskView;
-(void)setBackgroundMaskView:(ShapeView *)arg1 ;
-(void)setBorderView:(ShapeView *)arg1 ;
-(void)setOriginRect:(CGRect)arg1 ;
-(EMFEmojiToken *)baseEmojiToken;
-(void)setBaseEmojiToken:(EMFEmojiToken *)arg1 ;
-(NSArray *)arrangedVariantCells;
-(void)setArrangedVariantCells:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

