/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTransaction : NSObject
+(void)unlock;
+(void)flush;
+(void)commit;
+(double)animationDuration;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)begin;
+(unsigned)currentState;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(void)lock;
+(void)setDisableActions:(BOOL)arg1 ;
+(BOOL)disableActions;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)animationTimingFunction;
+(void)setAnimationDuration:(double)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(BOOL)immediateMode;
+(void)setImmediateMode:(BOOL)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)commitImmediate;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)setImmediateModeRestrictedContext:(C3DSceneRef)arg1 ;
+(C3DSceneRef)immediateModeRestrictedContext;
+(void)checkUncommittedTransactions;
-(void)unlock;
-(void)flush;
-(void)commit;
-(double)animationDuration;
-(void)begin;
-(void)lock;
-(void)setDisableActions:(BOOL)arg1 ;
-(BOOL)disableActions;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(id)animationTimingFunction;
-(void)setAnimationDuration:(double)arg1 ;
@end

