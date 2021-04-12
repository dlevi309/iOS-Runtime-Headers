/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(/*^block*/id)eventHandlerForCoordinator:(id)arg1 ;
+(id)concurrentTransitionCoordinatorWithDelay:(double)arg1 ;
+(id)synchronousTransitionCoordinator;
-(id)init;
-(void)addTransition:(id)arg1 ;
-(double)delay;
-(void)setScheduler:(id<AVTTransitionScheduler>)arg1 ;
-(void)startNextTransition;
-(NSMutableArray *)pendingTransitions;
-(NSMutableArray *)runningTransitions;
-(void)didCompleteRunningTransition:(id)arg1 ;
-(id)allTransitions;
-(id)transitionsMatchingModel:(id)arg1 ;
-(void)cancelAllTransitions;
-(void)cancelTransitionsMatchingModel:(id)arg1 ;
-(void)dealloc;
-(id<AVTTransitionScheduler>)scheduler;
@end

