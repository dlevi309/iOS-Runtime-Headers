/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKImageBalloonView.h>

@class CKMovieMediaObject, AVPlayerItem, AVPlayer, AVPlayerLayer;

@interface CKMovieBalloonView : CKImageBalloonView {

	CKMovieMediaObject* _mediaObject;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;

}

@property (setter=setAVPlayerItem:,nonatomic,retain) AVPlayerItem * avPlayerItem;                 //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (setter=setAVPlayer:,nonatomic,retain) AVPlayer * avPlayer;                             //@synthesize avPlayer=_avPlayer - In the implementation block
@property (setter=setAVPlayerLayer:,nonatomic,retain) AVPlayerLayer * avPlayerLayer;              //@synthesize avPlayerLayer=_avPlayerLayer - In the implementation block
@property (nonatomic,retain) CKMovieMediaObject * mediaObject;                                    //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic,__weak) id<CKMovieBalloonViewDelegate> delegate; 
-(void)dealloc;
-(id)description;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)tapGestureRecognized:(id)arg1 ;
-(AVPlayer *)avPlayer;
-(CKMovieMediaObject *)mediaObject;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(AVPlayerLayer *)avPlayerLayer;
-(void)cleanupPlayerIfNeeded;
-(void)setAVPlayerItem:(id)arg1 ;
-(void)videoDidReachEnd:(id)arg1 ;
-(void)setAVPlayer:(id)arg1 ;
-(void)setAVPlayerLayer:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
@end

