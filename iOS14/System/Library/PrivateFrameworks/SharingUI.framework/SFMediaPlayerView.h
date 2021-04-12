/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class AVPlayerLooper, AVQueuePlayer, NSMutableArray, NSObject;

@interface SFMediaPlayerView : UIView {

	AVPlayerLooper* _avLooper;
	AVQueuePlayer* _avQueuePlayer;
	NSMutableArray* _mediaItems;
	NSObject*<OS_dispatch_source> _speedUpTimer;
	BOOL _pausesAfterEachItem;

}

@property (assign,nonatomic) BOOL pausesAfterEachItem;              //@synthesize pausesAfterEachItem=_pausesAfterEachItem - In the implementation block
+(Class)layerClass;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)_pause;
-(void)play;
-(void)stop;
-(void)advanceToNextItem;
-(BOOL)isPaused;
-(void)startMovieLoopWithPath:(id)arg1 ;
-(void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3 ;
-(void)updateViewForAssetType:(int)arg1 adjustmentsURL:(id)arg2 ;
-(BOOL)pausesAfterEachItem;
-(void)setPausesAfterEachItem:(BOOL)arg1 ;
-(void)removeMovieItem:(id)arg1 ;
-(void)stopSpeedUpTimer;
-(void)enqueueItemsFromMediaItem:(id)arg1 afterItem:(id)arg2 ;
-(void)dequeueNonPlayingItemsFromMediaItem:(id)arg1 ;
-(void)setUpTimeRangeNotificationsForItem:(id)arg1 ;
-(void)addMovieItem:(id)arg1 ;
-(void)removeAllQueuedItems;
-(void)breakFirstEnqueuedLoop;
-(void)speedUpRemainderOfCurrentItem;
@end

