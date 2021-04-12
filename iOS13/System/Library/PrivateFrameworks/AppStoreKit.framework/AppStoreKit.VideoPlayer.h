/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AVFoundation/AVPlayer.h>

@interface AppStoreKit.VideoPlayer : AVPlayer {

	 state;
	??? videoUrl;
	 videoObserver;
	 playerItem;
	??? failure;
	 failureCount;
	 playbackChecks;
	 shouldBePlaying;
	 shouldLoopPlayback;
	 lastPlaybackTimeGuard;
	 lastPlaybackTimeUnsynchronized;
	 delegate;

}
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)play;
-(id)initWithPlayerItem:(id)arg1 ;
@end

