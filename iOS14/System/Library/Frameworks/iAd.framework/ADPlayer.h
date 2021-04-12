/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>

@protocol ADPlayerDelegate;
@class ADBannerView, AVPlayerItem, AVPlayer, NSString;

@interface ADPlayer : NSObject <ADBannerViewInternalDelegate> {

	BOOL _playbackHasBegun;
	id<ADPlayerDelegate> _delegate;
	ADBannerView* _videoAd;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	unsigned long long _playbackState;
	id _timeObserver;

}

@property (assign,nonatomic) BOOL playbackHasBegun;                             //@synthesize playbackHasBegun=_playbackHasBegun - In the implementation block
@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                       //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * avPlayer;                               //@synthesize avPlayer=_avPlayer - In the implementation block
@property (assign,nonatomic) unsigned long long playbackState;                  //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) ADBannerView * videoAd;                            //@synthesize videoAd=_videoAd - In the implementation block
@property (nonatomic,retain) id timeObserver;                                   //@synthesize timeObserver=_timeObserver - In the implementation block
@property (assign,nonatomic,__weak) id<ADPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float playbackRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlaybackState:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)shutdown;
-(float)playbackRate;
-(id)init;
-(id<ADPlayerDelegate>)delegate;
-(unsigned long long)playbackState;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)performAction;
-(void)pause;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(AVPlayerItem *)avPlayerItem;
-(void)play;
-(void)applicationWillResignActive;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)setDelegate:(id<ADPlayerDelegate>)arg1 ;
-(void)applicationDidBecomeActive;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(void)bannerViewWillLoadAd:(id)arg1 ;
-(ADBannerView *)videoAd;
-(AVPlayer *)avPlayer;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(void)showAdTransparency;
-(void)dealloc;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(void)bannerViewShouldPauseMedia:(id)arg1 ;
-(void)bannerViewShouldResumeMedia:(id)arg1 ;
-(void)setTimeObserver:(id)arg1 ;
-(id)timeObserver;
-(void)setVideoAd:(ADBannerView *)arg1 ;
-(BOOL)prepareForPlayback;
-(id)_networkOptimalVideoURLForAd:(id)arg1 ;
-(BOOL)_beginLoadingVideoFromURL:(id)arg1 ;
-(BOOL)playbackHasBegun;
-(void)playerItemDidPlayToEnd:(id)arg1 ;
-(void)playerItemDidFailedToPlayToEnd:(id)arg1 ;
-(void)playerItemEncounteredPlaybackStall:(id)arg1 ;
-(void)setPlaybackHasBegun:(BOOL)arg1 ;
-(void)playerDidStart;
-(void)playerDidPause;
-(BOOL)prepareForPlayackOfInterstitialWithURL:(id)arg1 ;
@end

