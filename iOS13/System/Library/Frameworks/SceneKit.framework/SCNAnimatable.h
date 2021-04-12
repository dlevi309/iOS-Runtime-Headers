/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class NSArray;


@protocol SCNAnimatable <NSObject>
@property (readonly) NSArray * animationKeys; 
@required
-(id)animationForKey:(id)arg1;
-(void)removeAnimationForKey:(id)arg1;
-(void)addAnimation:(id)arg1 forKey:(id)arg2;
-(void)removeAllAnimations;
-(NSArray *)animationKeys;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
-(id)animationPlayerForKey:(id)arg1;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
-(void)pauseAnimationForKey:(id)arg1;
-(void)resumeAnimationForKey:(id)arg1;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
-(BOOL)isAnimationForKeyPaused:(id)arg1;

@end

