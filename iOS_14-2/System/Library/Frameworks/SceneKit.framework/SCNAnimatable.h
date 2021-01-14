/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class NSArray;


@protocol SCNAnimatable <NSObject>
@property (readonly) NSArray * animationKeys; 
@required
-(void)removeAllAnimations;
-(void)addAnimation:(id)arg1 forKey:(id)arg2;
-(id)animationForKey:(id)arg1;
-(NSArray *)animationKeys;
-(void)removeAnimationForKey:(id)arg1;
-(id)animationPlayerForKey:(id)arg1;
-(void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
-(void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
-(void)pauseAnimationForKey:(id)arg1;
-(void)resumeAnimationForKey:(id)arg1;
-(void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
-(BOOL)isAnimationForKeyPaused:(id)arg1;

@end

