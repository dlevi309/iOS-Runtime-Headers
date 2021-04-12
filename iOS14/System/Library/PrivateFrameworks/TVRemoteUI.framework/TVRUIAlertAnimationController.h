/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(id<_TVRemoteAlertVisualStyleProviding>)visualStyle;
-(double)transitionDuration:(id)arg1 ;
-(long long)animationType;
-(void)setScaleTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)scaleTransform;
-(_TVRMaterialView *)backgroundMaterialView;
-(void)setBackgroundMaterialView:(_TVRMaterialView *)arg1 ;
-(void)_runPresentationAnimationWithTransition:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg1 ;
-(void)setForegroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)foregroundVisualEffectView;
-(id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2 ;
-(double)foregroundBlurRadius;
-(void)setForegroundBlurRadius:(double)arg1 ;
@end

