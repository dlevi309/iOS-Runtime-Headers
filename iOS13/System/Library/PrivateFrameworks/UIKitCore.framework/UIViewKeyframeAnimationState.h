/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewAnimationState.h>

@class NSMutableSet, NSMutableDictionary;

@interface UIViewKeyframeAnimationState : UIViewAnimationState {

	double _frameDuration;
	double _frameStartTime;
	long long _calculationMode;
	NSMutableSet* _keyframeLayers;
	NSMutableDictionary* _keyframeLayersForCurrentKeyFrameDict;
	BOOL _inFrame;

}
-(id)init;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(/*^block*/id)arg3 ;
-(void)pop;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(id)_createDeferredAnimationForKey:(id)arg1 ;
-(BOOL)_isKeyframeAnimation;
-(id)_updateAnimationFrameWithAnimationProperties:(id)arg1 ;
-(void)cleanupTrackedLayers;
@end

