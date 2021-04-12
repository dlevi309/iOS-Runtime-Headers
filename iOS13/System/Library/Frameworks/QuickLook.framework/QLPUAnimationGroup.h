/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@class NSMutableArray;

@interface QLPUAnimationGroup : NSObject {

	BOOL _paused;
	QLPUAnimationGroup* _superAnimationGroup;
	NSMutableArray* _subAnimationGroups;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic,__weak) QLPUAnimationGroup * superAnimationGroup;              //@synthesize superAnimationGroup=_superAnimationGroup - In the implementation block
@property (nonatomic,readonly) NSMutableArray * subAnimationGroups;                        //@synthesize subAnimationGroups=_subAnimationGroups - In the implementation block
@property (nonatomic,copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isReadyToComplete,nonatomic,readonly) BOOL readyToComplete; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                  //@synthesize paused=_paused - In the implementation block
+(void)pushAnimationGroup:(id)arg1 ;
+(void)popAnimationGroup:(id)arg1 ;
+(id)animationGroupWithAnimations:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isPaused;
-(void)complete;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(double)elapsedTime;
-(void)setElapsedTime:(double)arg1 ;
-(void)finishImmediately;
-(NSMutableArray *)subAnimationGroups;
-(BOOL)isReadyToComplete;
-(void)completeIfNeeded;
-(void)addSubAnimationGroup:(id)arg1 ;
-(QLPUAnimationGroup *)superAnimationGroup;
-(void)setSuperAnimationGroup:(QLPUAnimationGroup *)arg1 ;
-(void)pauseAnimations;
-(void)resumeAnimations;
@end

