/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <UIKitCore/UIView.h>

@class SXVideoResource, AVPlayerLayer, SXAVPlayer, SXImageView;

@interface SXVideoFillPlayerView : UIView {

	BOOL _shouldLoop;
	BOOL _hasRequestedPlayback;
	unsigned long long _fillMode;
	SXVideoResource* _videoResource;
	AVPlayerLayer* _playerLayer;
	SXAVPlayer* _player;
	SXImageView* _stillImageView;

}

@property (nonatomic,retain) SXVideoResource * videoResource;              //@synthesize videoResource=_videoResource - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                  //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) SXAVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SXImageView * stillImageView;                 //@synthesize stillImageView=_stillImageView - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedPlayback;                    //@synthesize hasRequestedPlayback=_hasRequestedPlayback - In the implementation block
@property (assign,nonatomic) unsigned long long fillMode;                  //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) BOOL shouldLoop;                              //@synthesize shouldLoop=_shouldLoop - In the implementation block
-(void)dealloc;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(void)play;
-(void)layoutSubviews;
-(void)setFillMode:(unsigned long long)arg1 ;
-(unsigned long long)fillMode;
-(SXAVPlayer *)player;
-(void)setPlayer:(SXAVPlayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(BOOL)shouldLoop;
-(void)setShouldLoop:(BOOL)arg1 ;
-(id)initWithVideoResource:(id)arg1 imageView:(id)arg2 ;
-(void)playIfPossible;
-(SXImageView *)stillImageView;
-(void)switchToPlayer;
-(void)setHasRequestedPlayback:(BOOL)arg1 ;
-(void)setStillImageView:(SXImageView *)arg1 ;
-(BOOL)hasRequestedPlayback;
-(SXVideoResource *)videoResource;
-(void)setVideoResource:(SXVideoResource *)arg1 ;
@end

