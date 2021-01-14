/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGAnimationDataStore, PXGAnimatorLayout, PXGIndexSetArray, PXGSpriteDataStore;

@interface PXGAnimator : NSObject {

	PXGAnimationDataStore* _animationDataStore;
	PXGAnimatorLayout* _animatorLayout;
	double _lastUpdateTime;
	unsigned _numberOfProlongatedSprites;
	PXGIndexSetArray* _spriteIndexesByGroupIndex;
	PXGSpriteDataStore* _doubleSidedSpriteDataStore;
	PXGSpriteDataStore* _oldAnimationPresentationSpriteDataStore;
	BOOL _isSkippingAnimations;
	BOOL _animating;
	double _speed;
	long long _computeCount;
	long long _preferredFramesPerSecond;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;               //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) double speed;                                    //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) long long computeCount;                        //@synthesize computeCount=_computeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasCriticalAnimations; 
@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
-(void)setSpeed:(double)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id)init;
-(double)speed;
-(BOOL)hasCriticalAnimations;
-(void)retargetAnimationsAfterStartTime:(double)arg1 newStartTime:(double)arg2 ;
-(void)_stopAllAnimations;
-(long long)preferredFramesPerSecond;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(id)_animationByAnimationIndexForAnimations:(id)arg1 ;
-(void)computeAnimationStateForTime:(double)arg1 inputSpriteDataStore:(id)arg2 inputChangeDetails:(id)arg3 inputLayout:(id)arg4 viewportShift:(CGPoint)arg5 animationPresentationSpriteDataStore:(id)arg6 animationTargetSpriteDataStore:(id)arg7 animationChangeDetails:(out id*)arg8 animationLayout:(out id*)arg9 ;
-(BOOL)isAnimating;
-(long long)computeCount;
-(void)dealloc;
@end

