/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTransaction : NSObject
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)lock;
+(void)unlock;
+(id)valueForKey:(id)arg1 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)begin;
+(void)commit;
+(unsigned)currentState;
+(void)flush;
+(void)setDisableActions:(BOOL)arg1 ;
+(double)animationDuration;
+(id)animationTimingFunction;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(BOOL)disableActions;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(BOOL)immediateMode;
+(void)setImmediateMode:(BOOL)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)commitImmediate;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)setImmediateModeRestrictedContext:(C3DSceneRef)arg1 ;
+(C3DSceneRef)immediateModeRestrictedContext;
+(void)checkUncommittedTransactions;
-(void)lock;
-(void)unlock;
-(void)begin;
-(void)commit;
-(void)flush;
-(void)setDisableActions:(BOOL)arg1 ;
-(double)animationDuration;
-(id)animationTimingFunction;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(BOOL)disableActions;
@end

