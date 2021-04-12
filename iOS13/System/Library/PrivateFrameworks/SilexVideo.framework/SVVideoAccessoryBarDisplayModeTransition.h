/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoAccessoryItemDisplayModeTransitioning;
@class SVVideoAccessoryBarDisplayState, SVVideoAccessoryBarDisplayModeTransitionContext;

@interface SVVideoAccessoryBarDisplayModeTransition : NSObject {

	SVVideoAccessoryBarDisplayState* _fromState;
	SVVideoAccessoryBarDisplayState* _toState;
	id<SVVideoAccessoryItemDisplayModeTransitioning> _transitionCoordinator;
	SVVideoAccessoryBarDisplayModeTransitionContext* _context;

}

@property (nonatomic,retain) SVVideoAccessoryBarDisplayModeTransitionContext * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) SVVideoAccessoryBarDisplayState * fromState;                                         //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,readonly) SVVideoAccessoryBarDisplayState * toState;                                           //@synthesize toState=_toState - In the implementation block
@property (nonatomic,readonly) id<SVVideoAccessoryItemDisplayModeTransitioning> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)cancel;
-(SVVideoAccessoryBarDisplayModeTransitionContext *)context;
-(void)setContext:(SVVideoAccessoryBarDisplayModeTransitionContext *)arg1 ;
-(id<SVVideoAccessoryItemDisplayModeTransitioning>)transitionCoordinator;
-(SVVideoAccessoryBarDisplayState *)fromState;
-(SVVideoAccessoryBarDisplayState *)toState;
-(id)initWithFromState:(id)arg1 toState:(id)arg2 transitionCoordinator:(id)arg3 ;
-(void)performTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
@end

