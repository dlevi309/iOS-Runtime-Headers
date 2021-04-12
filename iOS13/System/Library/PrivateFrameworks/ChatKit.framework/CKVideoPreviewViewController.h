/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>

@protocol CKVideoPreviewViewControllerDelegate;
@class AVPlayerItem, AVPlayer, AVPlayerLayer;

@interface CKVideoPreviewViewController : UIViewController {

	BOOL _redisplayStatusBar;
	BOOL _reachedEnd;
	id<CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;

}

@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                                                       //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * avPlayer;                                                               //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * avPlayerLayer;                                                     //@synthesize avPlayerLayer=_avPlayerLayer - In the implementation block
@property (assign,nonatomic) BOOL reachedEnd;                                                                   //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (assign,nonatomic,__weak) id<CKVideoPreviewViewControllerDelegate> videoPreviewDelegate;              //@synthesize videoPreviewDelegate=_videoPreviewDelegate - In the implementation block
@property (assign,nonatomic) BOOL redisplayStatusBar;                                                           //@synthesize redisplayStatusBar=_redisplayStatusBar - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(id)init;
-(void)dealloc;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)play;
-(BOOL)prefersStatusBarHidden;
-(BOOL)isPlaying;
-(void)setVideoFileURL:(id)arg1 ;
-(AVPlayer *)avPlayer;
-(AVPlayerLayer *)avPlayerLayer;
-(void)videoDidReachEnd:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(void)setAvPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(id<CKVideoPreviewViewControllerDelegate>)videoPreviewDelegate;
-(BOOL)togglePlayPause;
-(void)setVideoPreviewDelegate:(id<CKVideoPreviewViewControllerDelegate>)arg1 ;
-(BOOL)redisplayStatusBar;
-(void)setRedisplayStatusBar:(BOOL)arg1 ;
@end

