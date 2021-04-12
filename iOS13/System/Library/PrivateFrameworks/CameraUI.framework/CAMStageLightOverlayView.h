/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, CAShapeLayer, CAGradientLayer, CAMStageLightAnimator;

@interface CAMStageLightOverlayView : UIView {

	BOOL _active;
	BOOL _visible;
	long long _orientation;
	double _bottomContentInset;
	UIView* __tintView;
	UIImageView* __vignetteView;
	CAShapeLayer* __circleLayer;
	unsigned long long __activeTimerID;
	CAGradientLayer* __gradientLayer;
	CAMStageLightAnimator* __animator;
	CGRect _viewportFrame;

}

@property (nonatomic,readonly) UIView * _tintView;                                                     //@synthesize _tintView=__tintView - In the implementation block
@property (nonatomic,readonly) UIImageView * _vignetteView;                                            //@synthesize _vignetteView=__vignetteView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * _circleLayer;                                            //@synthesize _circleLayer=__circleLayer - In the implementation block
@property (assign,setter=_setActiveTimerID:,nonatomic) unsigned long long _activeTimerID;              //@synthesize _activeTimerID=__activeTimerID - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * _gradientLayer;                                       //@synthesize _gradientLayer=__gradientLayer - In the implementation block
@property (setter=_setAnimator:,nonatomic,retain) CAMStageLightAnimator * _animator;                   //@synthesize _animator=__animator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                            //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) long long orientation;                                                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGRect viewportFrame;                                                     //@synthesize viewportFrame=_viewportFrame - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                                //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
+(CGRect)circleFrameForViewport:(CGRect)arg1 orientation:(long long)arg2 bottomContentInset:(double)arg3 ;
+(BOOL)_useLargeLayoutForViewportSize:(CGSize)arg1 ;
+(double)_circleDiameterForViewportSize:(CGSize)arg1 orientation:(long long)arg2 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(CAMStageLightAnimator *)_animator;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setAnimator:(id)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)_vignetteView;
-(CAGradientLayer *)_gradientLayer;
-(UIView *)_tintView;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
-(CAShapeLayer *)_circleLayer;
-(void)setViewportFrame:(CGRect)arg1 ;
-(CGRect)viewportFrame;
-(void)_updateShadowViewsAnimated:(BOOL)arg1 ;
-(void)_updateAnimatorState;
-(CGRect)_circleFrameForOrientation:(long long)arg1 ;
-(unsigned long long)_activeTimerID;
-(void)_setActiveTimerID:(unsigned long long)arg1 ;
@end

