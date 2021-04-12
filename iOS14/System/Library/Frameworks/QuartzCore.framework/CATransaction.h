/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


@interface CATransaction : NSObject
+(void)mt_addCompletionBlock:(/*^block*/id)arg1 ;
+(/*^block*/id)animator;
+(void)unlock;
+(void)flush;
+(void)commit;
+(BOOL)lowLatency;
+(double)animationDuration;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)setLowLatency:(BOOL)arg1 ;
+(double)inputTime;
+(double)beginTime;
+(void)begin;
+(unsigned)generateSeed;
+(unsigned)currentState;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)setBoolValue:(BOOL)arg1 forKey:(unsigned)arg2 ;
+(void)setBeginTime:(double)arg1 ;
+(id)valueForKey:(id)arg1 ;
+(void)lock;
+(void)setDisableActions:(BOOL)arg1 ;
+(BOOL)disableActions;
+(unsigned)startFrameWithReason:(int)arg1 beginTime:(double)arg2 commitDeadline:(double)arg3 ;
+(void)setFrameInputTime:(double)arg1 withToken:(unsigned)arg2 ;
+(void)finishFrameWithToken:(unsigned)arg1 ;
+(BOOL)boolValueForKey:(unsigned)arg1 ;
+(void)activate;
+(int)currentPhase;
+(void)setInputTime:(double)arg1 ;
+(void)synchronize;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(double)commitTime;
+(void)setEarliestAutomaticCommitTime:(double)arg1 ;
+(void)setCommitTime:(double)arg1 ;
+(double)earliestAutomaticCommitTime;
+(id)committingContexts;
+(void)setCommittingContexts:(id)arg1 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(BOOL)disableSignPosts;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(void)setDisableSignPosts:(BOOL)arg1 ;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)assertInactive;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(BOOL)frameStallSkipRequest;
+(unsigned)registerBoolKey;
+(void)setFrameStallSkipRequest:(BOOL)arg1 ;
+(void)activateBackground:(BOOL)arg1 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(BOOL)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(void)popAnimator;
+(id)animationTimingFunction;
+(void)setAnimationDuration:(double)arg1 ;
@end

