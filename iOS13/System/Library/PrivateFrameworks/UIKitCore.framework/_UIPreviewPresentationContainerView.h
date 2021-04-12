/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationContainerView : UIView {

	BOOL _shouldLayoutForCommitPhase;
	UIView* _contentView;
	double _cornerRadius;
	_UIPreviewPresentationEffectView* _platterClippingView;
	UIView* _platterShadowView;
	UIView* _contentTransformView;
	_UIPreviewPresentationEffectView* _platterView;
	CGSize _preferredContentSize;

}

@property (nonatomic,retain) _UIPreviewPresentationEffectView * platterClippingView;              //@synthesize platterClippingView=_platterClippingView - In the implementation block
@property (nonatomic,retain) UIView * platterShadowView;                                          //@synthesize platterShadowView=_platterShadowView - In the implementation block
@property (nonatomic,retain) UIView * contentTransformView;                                       //@synthesize contentTransformView=_contentTransformView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * platterView;                      //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                         //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius;                                                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeForTransition; 
@property (assign,nonatomic) BOOL shouldLayoutForCommitPhase;                                     //@synthesize shouldLayoutForCommitPhase=_shouldLayoutForCommitPhase - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(double)cornerRadius;
-(void)setPlatterView:(_UIPreviewPresentationEffectView *)arg1 ;
-(_UIPreviewPresentationEffectView *)platterView;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
-(void)setContentTransformView:(UIView *)arg1 ;
-(UIView *)contentTransformView;
-(BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1 ;
-(void)initPlatterViewsIfNeeded;
-(CGSize)_standardPreferredContentSize;
-(CGRect)_preferredPlatterRectForContainerRect:(CGRect)arg1 ;
-(BOOL)shouldLayoutForCommitPhase;
-(_UIPreviewPresentationEffectView *)platterClippingView;
-(UIView *)platterShadowView;
-(void)setPlatterClippingView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setPlatterShadowView:(UIView *)arg1 ;
-(void)setShouldLayoutForCommitPhase:(BOOL)arg1 ;
@end

