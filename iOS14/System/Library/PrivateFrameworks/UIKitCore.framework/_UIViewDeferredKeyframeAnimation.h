/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewDeferredAnimation.h>

@class NSMutableArray;

@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation {

	NSMutableArray* _animationFrames;

}
-(void)_finalize;
-(void)_enumerateAnimationFramesForKeyframes:(/*^block*/id)arg1 ;
-(void)animateFrameAtIndex:(long long)arg1 animations:(/*^block*/id)arg2 ;
-(void)addAnimationFrameForValue:(id)arg1 ;
-(id)_animationFrames;
-(BOOL)isEmpty;
@end

