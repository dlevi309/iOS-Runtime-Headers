/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@protocol NMROriginObserverDelegate <NSObject>
@optional
-(void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2;

@end

