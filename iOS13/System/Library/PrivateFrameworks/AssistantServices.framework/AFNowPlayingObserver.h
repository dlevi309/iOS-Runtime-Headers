/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface AFNowPlayingObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _playbackState;
	NSHashTable* _listeners;
	BOOL _isObserving;

}

@property (nonatomic,readonly) long long playbackState; 
+(id)defaultObserver;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(long long)playbackState;
-(void)_startObservingNowPlayingAppPlaybackState;
-(void)_fetchNowPlayingAppPlaybackState;
-(void)_stopObservingNowPlayingAppPlaybackState;
-(void)nowPlayingApplicationPlaybackStateChanged:(id)arg1 ;
-(void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1 ;
-(void)getPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
@end

