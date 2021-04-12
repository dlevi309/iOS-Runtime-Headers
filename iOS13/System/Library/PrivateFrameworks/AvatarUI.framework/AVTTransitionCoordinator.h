/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTTransitionScheduler;
@class NSMutableArray;

@interface AVTTransitionCoordinator : NSObject {

	double _delay;
	id<AVTTransitionScheduler> _scheduler;
	NSMutableArray* _pendingTransitions;
	NSMutableArray* _runningTransitions;

}

@property (nonatomic,retain) id<AVTTransitionScheduler> scheduler;               //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingTransitions;              //@synthesize pendingTransitions=_pendingTransitions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * runningTransitions;              //@synthesize runningTransitions=_runningTransitions - In the implementation block
@property (nonatomic,readonly) double delay;                                     //@synthesize delay=_delay - In the implementation block
+(id)concurrentTransitionCoordinatorWithDelay:(double)arg1 ;
+(id)synchronousTransitionCoordinator;
+(/*^block*/id)eventHandlerForCoordinator:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)delay;
-(id<AVTTransitionScheduler>)scheduler;
-(void)setScheduler:(id<AVTTransitionScheduler>)arg1 ;
-(void)addTransition:(id)arg1 ;
-(void)cancelAllTransitions;
-(void)cancelTransitionsMatchingModel:(id)arg1 ;
-(void)startNextTransition;
-(NSMutableArray *)pendingTransitions;
-(NSMutableArray *)runningTransitions;
-(void)didCompleteRunningTransition:(id)arg1 ;
-(id)allTransitions;
-(id)transitionsMatchingModel:(id)arg1 ;
@end

