/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSMutableArray;

@interface PUAnimationGroup : NSObject {

	BOOL _paused;
	PUAnimationGroup* _superAnimationGroup;
	NSMutableArray* _subAnimationGroups;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic,__weak) PUAnimationGroup * superAnimationGroup;                //@synthesize superAnimationGroup=_superAnimationGroup - In the implementation block
@property (nonatomic,readonly) NSMutableArray * subAnimationGroups;                        //@synthesize subAnimationGroups=_subAnimationGroups - In the implementation block
@property (nonatomic,copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isReadyToComplete,nonatomic,readonly) BOOL readyToComplete; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                  //@synthesize paused=_paused - In the implementation block
+(id)animationGroupWithAnimations:(/*^block*/id)arg1 ;
+(void)pushAnimationGroup:(id)arg1 ;
+(void)popAnimationGroup:(id)arg1 ;
-(void)finishImmediately;
-(void)setElapsedTime:(double)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)completionHandler;
-(double)elapsedTime;
-(id)description;
-(void)complete;
-(BOOL)isReadyToComplete;
-(void)addSubAnimationGroup:(id)arg1 ;
-(void)setSuperAnimationGroup:(PUAnimationGroup *)arg1 ;
-(void)completeIfNeeded;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(PUAnimationGroup *)superAnimationGroup;
-(NSMutableArray *)subAnimationGroups;
-(BOOL)isPaused;
-(void)dealloc;
@end

