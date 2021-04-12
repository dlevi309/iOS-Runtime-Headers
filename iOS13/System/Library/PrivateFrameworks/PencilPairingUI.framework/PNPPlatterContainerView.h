/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, PNPPlatterShadowView, UIVisualEffectView, NSDate;

@interface PNPPlatterContainerView : UIView {

	UIView* _contentViewContainerView;
	PNPPlatterShadowView* _shadowView;
	UIView* _dimmingView;
	UIVisualEffectView* _effectView;
	BOOL _presented;
	BOOL _dismissUsingAlpha;
	UIView* _contentView;
	/*^block*/id _autoDismissBlock;
	NSDate* _autoDismissDate;
	unsigned long long _edge;
	double _preferredCornerRadius;
	long long _dimmingState;
	double _pencilOffset;
	CGAffineTransform _animationTranslation;

}

@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) id autoDismissBlock;                                   //@synthesize autoDismissBlock=_autoDismissBlock - In the implementation block
@property (nonatomic,retain) NSDate * autoDismissDate;                            //@synthesize autoDismissDate=_autoDismissDate - In the implementation block
@property (assign,nonatomic) unsigned long long edge;                             //@synthesize edge=_edge - In the implementation block
@property (assign,nonatomic) double preferredCornerRadius;                        //@synthesize preferredCornerRadius=_preferredCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL presented;                                      //@synthesize presented=_presented - In the implementation block
@property (assign,nonatomic) long long dimmingState;                              //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) double pencilOffset;                                 //@synthesize pencilOffset=_pencilOffset - In the implementation block
@property (assign,nonatomic) BOOL dismissUsingAlpha;                              //@synthesize dismissUsingAlpha=_dismissUsingAlpha - In the implementation block
@property (assign,nonatomic) CGAffineTransform animationTranslation;              //@synthesize animationTranslation=_animationTranslation - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)presented;
-(void)setEdge:(unsigned long long)arg1 ;
-(unsigned long long)edge;
-(void)setDimmingState:(long long)arg1 ;
-(long long)dimmingState;
-(double)preferredCornerRadius;
-(double)pencilOffset;
-(CGRect)presentedFrameForViewWithSize:(CGSize)arg1 edge:(unsigned long long)arg2 inRect:(CGRect)arg3 ;
-(BOOL)dismissUsingAlpha;
-(CGRect)dismissedFrameForViewWithSize:(CGSize)arg1 edge:(unsigned long long)arg2 inRect:(CGRect)arg3 ;
-(CGAffineTransform)_dismissedTransformForEdge:(unsigned long long)arg1 ;
-(double)_dismissedAlphaForEdge:(double)arg1 ;
-(void)_updateShadowForCenteredPlatter:(BOOL)arg1 ;
-(void)setPreferredCornerRadius:(double)arg1 ;
-(void)setPresented:(BOOL)arg1 ;
-(void)setAnimationTranslation:(CGAffineTransform)arg1 ;
-(id)autoDismissBlock;
-(void)setAutoDismissBlock:(id)arg1 ;
-(NSDate *)autoDismissDate;
-(void)setAutoDismissDate:(NSDate *)arg1 ;
-(void)setPencilOffset:(double)arg1 ;
-(void)setDismissUsingAlpha:(BOOL)arg1 ;
-(CGAffineTransform)animationTranslation;
@end

