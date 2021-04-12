/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoPlaybackAttemptTrackerFactory, SVVideoEventTrackerProviding, SVVideoPlaybackAttemptTracking, SVVideoEventTracker;
@class NSString;

@interface SVVideoPlaybackAttemptTrackerManager : NSObject <SVVideoTransitionObserver> {

	id<SVVideoPlaybackAttemptTrackerFactory> _playbackAttemptTrackerFactory;
	id<SVVideoEventTrackerProviding> _eventTrackerProvider;
	id<SVVideoPlaybackAttemptTracking> _playbackAttemptTracker;
	id<SVVideoEventTracker> _eventTracker;

}

@property (nonatomic,readonly) id<SVVideoPlaybackAttemptTrackerFactory> playbackAttemptTrackerFactory;              //@synthesize playbackAttemptTrackerFactory=_playbackAttemptTrackerFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> eventTrackerProvider;                               //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackAttemptTracking> playbackAttemptTracker;                             //@synthesize playbackAttemptTracker=_playbackAttemptTracker - In the implementation block
@property (nonatomic,retain) id<SVVideoEventTracker> eventTracker;                                                  //@synthesize eventTracker=_eventTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoEventTracker>)eventTracker;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setEventTracker:(id<SVVideoEventTracker>)arg1 ;
-(id<SVVideoEventTrackerProviding>)eventTrackerProvider;
-(id)initWithPlaybackAttemptTrackerFactory:(id)arg1 eventTrackerProvider:(id)arg2 ;
-(id<SVVideoPlaybackAttemptTrackerFactory>)playbackAttemptTrackerFactory;
-(void)setPlaybackAttemptTracker:(id<SVVideoPlaybackAttemptTracking>)arg1 ;
-(id<SVVideoPlaybackAttemptTracking>)playbackAttemptTracker;
@end

