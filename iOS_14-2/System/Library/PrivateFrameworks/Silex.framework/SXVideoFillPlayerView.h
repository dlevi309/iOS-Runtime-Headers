/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <UIKitCore/UIView.h>

@class SXVideoResource, SXPlayerLayer, SXAVPlayer, SXImageView;

@interface SXVideoFillPlayerView : UIView {

	BOOL _shouldLoop;
	BOOL _hasRequestedPlayback;
	unsigned long long _fillMode;
	SXVideoResource* _videoResource;
	SXPlayerLayer* _playerLayer;
	SXAVPlayer* _player;
	SXImageView* _stillImageView;

}

@property (nonatomic,retain) SXVideoResource * videoResource;              //@synthesize videoResource=_videoResource - In the implementation block
@property (nonatomic,retain) SXPlayerLayer * playerLayer;                  //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) SXAVPlayer * player;                          //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) SXImageView * stillImageView;                 //@synthesize stillImageView=_stillImageView - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedPlayback;                    //@synthesize hasRequestedPlayback=_hasRequestedPlayback - In the implementation block
@property (assign,nonatomic) unsigned long long fillMode;                  //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) BOOL shouldLoop;                              //@synthesize shouldLoop=_shouldLoop - In the implementation block
-(SXAVPlayer *)player;
-(void)setPlayer:(SXAVPlayer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)fillMode;
-(void)setFillMode:(unsigned long long)arg1 ;
-(void)pause;
-(void)play;
-(void)layoutSubviews;
-(void)reset;
-(void)setPlayerLayer:(SXPlayerLayer *)arg1 ;
-(void)dealloc;
-(SXPlayerLayer *)playerLayer;
-(id)initWithVideoResource:(id)arg1 imageView:(id)arg2 ;
-(void)setShouldLoop:(BOOL)arg1 ;
-(void)playIfPossible;
-(BOOL)shouldLoop;
-(SXImageView *)stillImageView;
-(void)switchToPlayer;
-(void)setHasRequestedPlayback:(BOOL)arg1 ;
-(void)setStillImageView:(SXImageView *)arg1 ;
-(BOOL)hasRequestedPlayback;
-(SXVideoResource *)videoResource;
-(void)setVideoResource:(SXVideoResource *)arg1 ;
@end

