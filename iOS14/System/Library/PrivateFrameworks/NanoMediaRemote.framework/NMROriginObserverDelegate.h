/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

