/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class UIView, UIVisualEffectView, NSString;

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory> {

	BOOL _blurred;
	BOOL _dimmed;
	BOOL __supportsBlur;
	UIView* _snapshotView;
	long long _desiredAspectRatio;
	UIView* __lowQualityBlurView;
	UIView* __dimmingView;
	UIVisualEffectView* __blurView;
	long long __blurStyleForEffectAnimationFactory;

}

@property (nonatomic,readonly) BOOL _supportsBlur;                                                                                      //@synthesize _supportsBlur=__supportsBlur - In the implementation block
@property (nonatomic,readonly) UIView * _lowQualityBlurView;                                                                            //@synthesize _lowQualityBlurView=__lowQualityBlurView - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                                                                                   //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (setter=_setBlurView:,nonatomic,retain) UIVisualEffectView * _blurView;                                                       //@synthesize _blurView=__blurView - In the implementation block
@property (assign,setter=_setBlurStyleForEffectAnimationFactory:,nonatomic) long long _blurStyleForEffectAnimationFactory;              //@synthesize _blurStyleForEffectAnimationFactory=__blurStyleForEffectAnimationFactory - In the implementation block
@property (nonatomic,readonly) UIView * snapshotView;                                                                                   //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,readonly) long long desiredAspectRatio;                                                                            //@synthesize desiredAspectRatio=_desiredAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL blurred;                                                                                              //@synthesize blurred=_blurred - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                                                               //@synthesize dimmed=_dimmed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)_lowQualityBlurView;
-(BOOL)dimmed;
-(long long)desiredAspectRatio;
-(UIView *)snapshotView;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setBlurred:(BOOL)arg1 ;
-(UIView *)_dimmingView;
-(void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(BOOL)arg2 inputRadiusAmount:(double*)arg3 inputRadiusDuration:(double*)arg4 inputRadiusDelay:(double*)arg5 inputRadiusTimingFunction:(id*)arg6 opacityAmount:(double*)arg7 opacityDuration:(double*)arg8 opacityDelay:(double*)arg9 opacityTimingFunction:(id*)arg10 ;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(double)_resumeFadeInDuration;
-(void)_setBlurStyleForEffectAnimationFactory:(long long)arg1 ;
-(id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2 ;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)fadeOutAnimatedWithStyle:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeInflightBlurAnimations;
-(void)_applySnapshotBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(UIVisualEffectView *)_blurView;
-(void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2 ;
-(void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(long long)_blurStyleForEffectAnimationFactory;
-(void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)_supportsBlur;
-(void)setDimmed:(BOOL)arg1 ;
-(void)prepareForResumingUsingCrossfade;
-(void)_setBlurView:(id)arg1 ;
-(void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 style:(long long)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)blurred;
-(void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(BOOL)arg2 opacityAmount:(double*)arg3 opacityDuration:(double*)arg4 opacityDelay:(double*)arg5 opacityTimingFunction:(id*)arg6 targetView:(id*)arg7 ;
-(void)_setupDimOnSnapshot;
@end

