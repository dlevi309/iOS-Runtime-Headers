/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


@interface CATransaction : NSObject
+(void)mt_addCompletionBlock:(/*^block*/id)arg1 ;
+(void)synchronize;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)lock;
+(void)unlock;
+(id)valueForKey:(id)arg1 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)begin;
+(double)inputTime;
+(void)setInputTime:(double)arg1 ;
+(void)commit;
+(unsigned)currentState;
+(void)flush;
+(double)beginTime;
+(void)setBeginTime:(double)arg1 ;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)activate;
+(void)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(double)animationDuration;
+(id)animationTimingFunction;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(/*^block*/id)animator;
+(BOOL)disableActions;
+(void)setLowLatency:(BOOL)arg1 ;
+(BOOL)lowLatency;
+(void)setEarliestAutomaticCommitTime:(double)arg1 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
+(double)earliestAutomaticCommitTime;
+(int)currentPhase;
+(unsigned)generateSeed;
+(void)activateBackground:(BOOL)arg1 ;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(void)assertInactive;
@end

