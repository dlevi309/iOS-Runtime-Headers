/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CFXFaceTrackingRendererHapticsDelegate;
@class UIImageView, UISelectionFeedbackGenerator, UIViewPropertyAnimator, NSMutableArray;

@interface CFXFaceReticleView : UIView {

	BOOL _isShowingFaceIndicator;
	BOOL _canPerformFadeInAnimations;
	BOOL _canPerformFadeOutAnimations;
	id<CFXFaceTrackingRendererHapticsDelegate> _hapticsDelegate;
	UIImageView* _reticleImageView;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	UIViewPropertyAnimator* _bounceAnimator;
	UIViewPropertyAnimator* _fadeOutAnimator;
	UIViewPropertyAnimator* _animojiBounceAnimator;
	UIViewPropertyAnimator* _animojiFadeOutAnimator;
	NSMutableArray* _reticleLayersToAnimate;

}

@property (assign,nonatomic) BOOL isShowingFaceIndicator;                                                    //@synthesize isShowingFaceIndicator=_isShowingFaceIndicator - In the implementation block
@property (nonatomic,retain) UIImageView * reticleImageView;                                                 //@synthesize reticleImageView=_reticleImageView - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;                               //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL canPerformFadeInAnimations;                                                //@synthesize canPerformFadeInAnimations=_canPerformFadeInAnimations - In the implementation block
@property (assign,nonatomic) BOOL canPerformFadeOutAnimations;                                               //@synthesize canPerformFadeOutAnimations=_canPerformFadeOutAnimations - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * bounceAnimator;                                        //@synthesize bounceAnimator=_bounceAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * fadeOutAnimator;                                       //@synthesize fadeOutAnimator=_fadeOutAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animojiBounceAnimator;                                 //@synthesize animojiBounceAnimator=_animojiBounceAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animojiFadeOutAnimator;                                //@synthesize animojiFadeOutAnimator=_animojiFadeOutAnimator - In the implementation block
@property (nonatomic,retain) NSMutableArray * reticleLayersToAnimate;                                        //@synthesize reticleLayersToAnimate=_reticleLayersToAnimate - In the implementation block
@property (assign,nonatomic,__weak) id<CFXFaceTrackingRendererHapticsDelegate> hapticsDelegate;              //@synthesize hapticsDelegate=_hapticsDelegate - In the implementation block
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)setFadeOutAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)fadeOutAnimator;
-(void)userFeedbackForTrackingType:(int)arg1 needsHaptics:(BOOL)arg2 ;
-(void)fadeOutAndEndHapticWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 reticleType:(long long)arg2 ;
-(void)updateFrameForDisplayRelativeToBounds:(CGRect)arg1 ;
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
-(void)setReticleLayersToAnimate:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reticleLayersToAnimate;
-(void)setAnimojiBounceAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animojiBounceAnimator;
-(void)animojiFadeInAnimation;
-(void)setAnimojiFadeOutAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animojiFadeOutAnimator;
-(void)animojiCloseAnimationWithCompletion:(/*^block*/id)arg1 ;
-(id<CFXFaceTrackingRendererHapticsDelegate>)hapticsDelegate;
-(void)setHapticsDelegate:(id<CFXFaceTrackingRendererHapticsDelegate>)arg1 ;
-(BOOL)isShowingFaceIndicator;
-(void)setIsShowingFaceIndicator:(BOOL)arg1 ;
-(void)setReticleImageView:(UIImageView *)arg1 ;
@end

