/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVInteractivePlaybackTransitioning.h>
#import <libobjc.A.dylib/SVPlaybackTransitionCoordinator.h>

@protocol SVPlaybackTransitionCoordinator <NSObject>
@required
-(void)transitionAlongside:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2;

@end


@protocol SVPlaybackTransitionContext;
@class NSMutableArray, NFStateMachine, NFStateMachineState, NSString;

@interface SVPlaybackTransitionCoordinator : NSObject <SVInteractivePlaybackTransitioning, SVPlaybackTransitionCoordinator> {

	NSMutableArray* _transitionAlongsideBlocks;
	NSMutableArray* _completionBlocks;
	id<SVPlaybackTransitionContext> _context;
	NFStateMachine* _stateMachine;
	NFStateMachineState* _transitioningState;

}

@property (nonatomic,readonly) NSMutableArray * transitionAlongsideBlocks;              //@synthesize transitionAlongsideBlocks=_transitionAlongsideBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionBlocks;                       //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) id<SVPlaybackTransitionContext> context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NFStateMachineState * transitioningState;                //@synthesize transitioningState=_transitioningState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SVPlaybackTransitionContext>)context;
-(void)setContext:(id<SVPlaybackTransitionContext>)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(NFStateMachine *)stateMachine;
-(NSMutableArray *)completionBlocks;
-(NFStateMachineState *)transitioningState;
-(void)transitionAlongside:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)transitionAlongsideBlocks;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
@end

