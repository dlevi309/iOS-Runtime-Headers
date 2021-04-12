/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionManager.h>

@protocol SVVideoTransitionManager <NSObject>
@required
-(void)addTransitionObserver:(id)arg1;
-(void)removeTransitionObserver:(id)arg1;
-(void)transitionToVideo:(id)arg1;

@end


@protocol SVPlaybackTransitionCoordinatorFactory, SVVideoVisibilityMonitorProviding, SVVideoQueueProviding, SVVideo;
@class NSMutableArray, SVPlaybackTransition, NSString;

@interface SVVideoTransitionManager : NSObject <SVVideoTransitionManager> {

	id<SVPlaybackTransitionCoordinatorFactory> _transitionCoordinatorFactory;
	id<SVVideoVisibilityMonitorProviding> _visibilityMonitorProviding;
	id<SVVideoQueueProviding> _queueProvider;
	NSMutableArray* _pendingVideos;
	NSMutableArray* _transitionObservers;
	SVPlaybackTransition* _activeTransition;
	id<SVVideo> _visibleVideo;

}

@property (nonatomic,readonly) id<SVPlaybackTransitionCoordinatorFactory> transitionCoordinatorFactory;              //@synthesize transitionCoordinatorFactory=_transitionCoordinatorFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoVisibilityMonitorProviding> visibilityMonitorProviding;                     //@synthesize visibilityMonitorProviding=_visibilityMonitorProviding - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                              //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingVideos;                                                       //@synthesize pendingVideos=_pendingVideos - In the implementation block
@property (nonatomic,readonly) NSMutableArray * transitionObservers;                                                 //@synthesize transitionObservers=_transitionObservers - In the implementation block
@property (nonatomic,retain) SVPlaybackTransition * activeTransition;                                                //@synthesize activeTransition=_activeTransition - In the implementation block
@property (nonatomic,retain) id<SVVideo> visibleVideo;                                                               //@synthesize visibleVideo=_visibleVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVPlaybackTransition *)activeTransition;
-(void)setActiveTransition:(SVPlaybackTransition *)arg1 ;
-(NSMutableArray *)transitionObservers;
-(void)addTransitionObserver:(id)arg1 ;
-(void)removeTransitionObserver:(id)arg1 ;
-(id<SVVideoQueueProviding>)queueProvider;
-(void)transitionToVideo:(id)arg1 ;
-(id)initWithTransitionCoordinatorFactory:(id)arg1 visibilityMonitorProviding:(id)arg2 ;
-(NSMutableArray *)pendingVideos;
-(void)performNextTransition;
-(id<SVPlaybackTransitionCoordinatorFactory>)transitionCoordinatorFactory;
-(id<SVVideoVisibilityMonitorProviding>)visibilityMonitorProviding;
-(id<SVVideo>)visibleVideo;
-(void)setVisibleVideo:(id<SVVideo>)arg1 ;
@end

