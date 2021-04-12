/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving;
@class SVTimeline, NSString;

@interface SVTimelineManager : NSObject <SVVideoTransitionObserver> {

	SVTimeline* _timeline;
	id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
	id<SVVideoPlaybackProgressObserving> _playbackProgressObserver;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                                   //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;              //@synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackProgressObserving> playbackProgressObserver;                             //@synthesize playbackProgressObserver=_playbackProgressObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPlaybackProgressObserverFactory>)playbackProgressObserverFactory;
-(void)setPlaybackProgressObserver:(id<SVVideoPlaybackProgressObserving>)arg1 ;
-(id<SVVideoPlaybackProgressObserving>)playbackProgressObserver;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithTimeline:(id)arg1 playbackProgressObserverFactory:(id)arg2 ;
-(SVTimeline *)timeline;
@end

