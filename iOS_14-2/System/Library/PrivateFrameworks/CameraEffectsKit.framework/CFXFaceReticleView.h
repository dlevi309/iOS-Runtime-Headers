/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UISelectionFeedbackGenerator, UIViewPropertyAnimator, NSMutableArray;

@interface CFXFaceReticleView : UIView {

	BOOL _isShowingFaceIndicator;
	BOOL _canPerformFadeInAnimations;
	BOOL _canPerformFadeOutAnimations;
	UIImageView* _reticleImageView;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	UIViewPropertyAnimator* _bounceAnimator;
	UIViewPropertyAnimator* _fadeOutAnimator;
	UIViewPropertyAnimator* _animojiBounceAnimator;
	UIViewPropertyAnimator* _animojiFadeOutAnimator;
	NSMutableArray* _reticleLayersToAnimate;

}

@property (assign,nonatomic) BOOL isShowingFaceIndicator;                                   //@synthesize isShowingFaceIndicator=_isShowingFaceIndicator - In the implementation block
@property (nonatomic,retain) UIImageView * reticleImageView;                                //@synthesize reticleImageView=_reticleImageView - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL canPerformFadeInAnimations;                               //@synthesize canPerformFadeInAnimations=_canPerformFadeInAnimations - In the implementation block
@property (assign,nonatomic) BOOL canPerformFadeOutAnimations;                              //@synthesize canPerformFadeOutAnimations=_canPerformFadeOutAnimations - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * bounceAnimator;                       //@synthesize bounceAnimator=_bounceAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * fadeOutAnimator;                      //@synthesize fadeOutAnimator=_fadeOutAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animojiBounceAnimator;                //@synthesize animojiBounceAnimator=_animojiBounceAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animojiFadeOutAnimator;               //@synthesize animojiFadeOutAnimator=_animojiFadeOutAnimator - In the implementation block
@property (nonatomic,retain) NSMutableArray * reticleLayersToAnimate;                       //@synthesize reticleLayersToAnimate=_reticleLayersToAnimate - In the implementation block
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)userFeedbackForTrackingType:(long long)arg1 needsHaptics:(BOOL)arg2 ;
-(void)fadeOutAndEndHapticWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 reticleType:(long long)arg2 ;
-(void)updateFrameForDisplayRelativeToBounds:(CGRect)arg1 withOrientationState:(id)arg2 ;
-(void)showAndAnimateAnimojiFaceReticle;
-(void)hideAnimojiFaceReticleAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)setupAnimojiReticleLayers;
-(UIImageView *)reticleImageView;
-(void)fadeInAnimation;
-(void)fadeOutAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)shouldUseHapticFeedback:(BOOL)arg1 ;
-(BOOL)canPerformFadeInAnimations;
-(void)setCanPerformFadeInAnimations:(BOOL)arg1 ;
-(void)setCanPerformFadeOutAnimations:(BOOL)arg1 ;
-(void)setBounceAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)bounceAnimator;
-(BOOL)canPerformFadeOutAnimations;
-(void)setFadeOutAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)fadeOutAnimator;
-(void)setReticleLayersToAnimate:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reticleLayersToAnimate;
-(void)setAnimojiBounceAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animojiBounceAnimator;
-(void)animojiFadeInAnimation;
-(void)setAnimojiFadeOutAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animojiFadeOutAnimator;
-(void)animojiCloseAnimationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isShowingFaceIndicator;
-(void)setIsShowingFaceIndicator:(BOOL)arg1 ;
-(void)setReticleImageView:(UIImageView *)arg1 ;
@end

