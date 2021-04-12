/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideo, SVInteractivePlaybackTransitioning;
@class SVPlaybackTransitionContext;

@interface SVPlaybackTransition : NSObject {

	id<SVVideo> _fromVideo;
	id<SVVideo> _toVideo;
	id<SVInteractivePlaybackTransitioning> _transitionCoordinator;
	SVPlaybackTransitionContext* _context;

}

@property (nonatomic,retain) SVPlaybackTransitionContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<SVVideo> fromVideo;                                                     //@synthesize fromVideo=_fromVideo - In the implementation block
@property (nonatomic,readonly) id<SVVideo> toVideo;                                                       //@synthesize toVideo=_toVideo - In the implementation block
@property (nonatomic,readonly) id<SVInteractivePlaybackTransitioning> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)cancel;
-(SVPlaybackTransitionContext *)context;
-(void)setContext:(SVPlaybackTransitionContext *)arg1 ;
-(id<SVInteractivePlaybackTransitioning>)transitionCoordinator;
-(id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 transitionCoordinator:(id)arg3 ;
-(void)performTransitionWithVisibilityMonitor:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<SVVideo>)fromVideo;
-(id<SVVideo>)toVideo;
@end

