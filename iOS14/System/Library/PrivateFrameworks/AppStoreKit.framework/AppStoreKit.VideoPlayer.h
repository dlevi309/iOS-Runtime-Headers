/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AVFCore/AVPlayer.h>

@interface AppStoreKit.VideoPlayer : AVPlayer {

	 state;
	 videoObserver;
	 playerItem;
	 failureCount;
	 playbackChecks;
	 shouldBePlaying;
	 shouldLoopPlayback;
	 lastPlaybackTimeGuard;
	 lastPlaybackTimeUnsynchronized;
	 delegate;

}
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)play;
-(id)initWithPlayerItem:(id)arg1 ;
-(void)dealloc;
@end

