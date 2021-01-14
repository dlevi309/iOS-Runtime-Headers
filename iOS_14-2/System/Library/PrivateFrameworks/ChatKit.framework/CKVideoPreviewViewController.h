/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)reachedEnd;
-(BOOL)prefersStatusBarHidden;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPlaying;
-(id)init;
-(void)pause;
-(AVPlayerLayer *)avPlayerLayer;
-(void)videoDidReachEnd:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
-(void)play;
-(void)setReachedEnd:(BOOL)arg1 ;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(AVPlayer *)avPlayer;
-(void)loadView;
-(BOOL)togglePlayPause;
-(void)setAvPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(id<CKVideoPreviewViewControllerDelegate>)videoPreviewDelegate;
-(void)setVideoFileURL:(id)arg1 ;
-(void)setVideoPreviewDelegate:(id<CKVideoPreviewViewControllerDelegate>)arg1 ;
-(BOOL)redisplayStatusBar;
-(void)setRedisplayStatusBar:(BOOL)arg1 ;
-(void)dealloc;
@end

