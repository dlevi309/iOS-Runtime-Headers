/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIViewPropertyAnimator, CAContext, CALayer, UIView, UIColor;

@interface SBRecordingIndicatorViewController : UIViewController {

	UIViewPropertyAnimator* _animatorScaleToOverscale;
	UIViewPropertyAnimator* _animatorScaleToNormal;
	UIViewPropertyAnimator* _animatorScaleToRest;
	UIViewPropertyAnimator* _animatorScaleToZero;
	UIViewPropertyAnimator* _animatorFastFade;
	double _size;
	double _sideOffset;
	double _topOffset;
	CGPoint _center;
	CAContext* _context;
	CALayer* _rootLayer;
	CALayer* _contentLayer;
	BOOL _isStatusBarPortal;
	UIView* _indicatorView;
	UIColor* _indicatorColor;
	unsigned long long _indicatorAnimationState;
	long long _activeInterfaceOrientation;

}

@property (assign,nonatomic) BOOL isStatusBarPortal;                                                              //@synthesize isStatusBarPortal=_isStatusBarPortal - In the implementation block
@property (getter=indicatorView,nonatomic,readonly) UIView * indicatorView;                                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (getter=indicatorColor,nonatomic,retain) UIColor * indicatorColor;                                      //@synthesize indicatorColor=_indicatorColor - In the implementation block
@property (nonatomic,readonly) unsigned long long indicatorAnimationState;                                        //@synthesize indicatorAnimationState=_indicatorAnimationState - In the implementation block
@property (assign,getter=activeInterfaceOrientation,nonatomic) long long activeInterfaceOrientation;              //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(long long)activeInterfaceOrientation;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_stopAllAnimations;
-(BOOL)_canShowWhileLocked;
-(UIView *)indicatorView;
-(id)initForPortalView:(BOOL)arg1 ;
-(void)updateIndicatorVisibility:(BOOL)arg1 ;
-(void)updateIndicatorVisibility:(BOOL)arg1 skipFadeOutAnimation:(BOOL)arg2 ;
-(unsigned long long)indicatorAnimationState;
-(void)updateIndicatorVisibilityWithFastFadeAnimation:(BOOL)arg1 ;
-(void)setIndicatorColor:(UIColor *)arg1 ;
-(void)_configureRootLayer;
-(void)calculateInitialIndicatorPositionAndSize;
-(void)_updateToOrientation:(long long)arg1 ;
-(BOOL)isStatusBarPortal;
-(void)_updateIndicatorLayerWithBounds:(CGRect)arg1 andCenter:(CGPoint)arg2 ;
-(void)_updateIndicatorLayerSize:(double)arg1 opacity:(double)arg2 ;
-(void)_updateIndicatorViewSize:(double)arg1 alpha:(double)arg2 ;
-(UIColor *)indicatorColor;
-(void)setIsStatusBarPortal:(BOOL)arg1 ;
@end

