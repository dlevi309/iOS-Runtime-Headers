/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol _TVRemoteAlertVisualStyleProviding;
@class _TVRMaterialView, UIVisualEffectView, NSString;

@interface TVRUIAlertAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	long long _animationType;
	id<_TVRemoteAlertVisualStyleProviding> _visualStyle;
	_TVRMaterialView* _backgroundMaterialView;
	UIVisualEffectView* _foregroundVisualEffectView;
	double _foregroundBlurRadius;
	CGAffineTransform _scaleTransform;

}

@property (nonatomic,retain) UIVisualEffectView * foregroundVisualEffectView;                   //@synthesize foregroundVisualEffectView=_foregroundVisualEffectView - In the implementation block
@property (assign,nonatomic) double foregroundBlurRadius;                                       //@synthesize foregroundBlurRadius=_foregroundBlurRadius - In the implementation block
@property (assign,nonatomic) CGAffineTransform scaleTransform;                                  //@synthesize scaleTransform=_scaleTransform - In the implementation block
@property (nonatomic,readonly) long long animationType;                                         //@synthesize animationType=_animationType - In the implementation block
@property (nonatomic,readonly) id<_TVRemoteAlertVisualStyleProviding> visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) _TVRMaterialView * backgroundMaterialView;                         //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)animationType;
-(id<_TVRemoteAlertVisualStyleProviding>)visualStyle;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(CGAffineTransform)scaleTransform;
-(void)setBackgroundMaterialView:(_TVRMaterialView *)arg1 ;
-(_TVRMaterialView *)backgroundMaterialView;
-(void)_runPresentationAnimationWithTransition:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg1 ;
-(void)setForegroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)foregroundVisualEffectView;
-(id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2 ;
-(double)foregroundBlurRadius;
-(void)setForegroundBlurRadius:(double)arg1 ;
-(void)setScaleTransform:(CGAffineTransform)arg1 ;
@end

