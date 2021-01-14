/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable;

@interface AFNowPlayingObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _playbackStateGroup;
	long long _playbackStateGroupDepth;
	long long _playbackState;
	NSHashTable* _listeners;
	BOOL _isObserving;

}

@property (nonatomic,readonly) long long playbackState; 
+(id)defaultObserver;
-(void)addListener:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)getNowPlayingInfoWithCompletion:(/*^block*/id)arg1 ;
-(long long)playbackState;
-(void)nowPlayingApplicationPlaybackStateChanged:(id)arg1 ;
-(void)_stopObservingNowPlayingAppPlaybackState;
-(void)_endGroup;
-(void)getPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchNowPlayingAppPlaybackStateForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginGroup;
-(void)nowPlayingInfoDidChange:(id)arg1 ;
-(void)_startObservingNowPlayingAppPlaybackState;
-(void)removeListener:(id)arg1 ;
-(void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1 ;
-(void)dealloc;
@end

