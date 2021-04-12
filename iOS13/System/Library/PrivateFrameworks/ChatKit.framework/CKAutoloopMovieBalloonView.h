/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>
#import <libobjc.A.dylib/ISWrappedAVPlayerDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class CKMovieMediaObject, ISVideoPlayerUIView, ISWrappedAVPlayer, ISWrappedAVAudioSession, UIImageView, UIView, NSString;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver> {

	BOOL _isJellyfishVideo;
	BOOL _isMuted;
	BOOL _isListeningToVideoPlayer;
	CKMovieMediaObject* _mediaObject;
	ISVideoPlayerUIView* _videoPlayer;
	ISWrappedAVPlayer* _avPlayer;
	ISWrappedAVAudioSession* _audioSession;
	UIImageView* _muteButton;
	UIView* _snapshotView;

}

@property (nonatomic,retain) ISVideoPlayerUIView * videoPlayer;                   //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) ISWrappedAVPlayer * avPlayer;                        //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,retain) ISWrappedAVAudioSession * audioSession;              //@synthesize audioSession=_audioSession - In the implementation block
@property (nonatomic,retain) UIImageView * muteButton;                            //@synthesize muteButton=_muteButton - In the implementation block
@property (assign,nonatomic) BOOL isMuted;                                        //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                               //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) BOOL isListeningToVideoPlayer;                       //@synthesize isListeningToVideoPlayer=_isListeningToVideoPlayer - In the implementation block
@property (nonatomic,retain) CKMovieMediaObject * mediaObject;                    //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic) BOOL isJellyfishVideo;                               //@synthesize isJellyfishVideo=_isJellyfishVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
+(Class)AVPlayerClass;
+(Class)VideoPlayerUIViewClass;
+(Class)AVPlayerLayerClass;
+(id)_autoloopAVAudioSessionQueue;
-(void)dealloc;
-(NSString *)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAudioSession:(ISWrappedAVAudioSession *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)prepareForDisplay;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(ISWrappedAVAudioSession *)audioSession;
-(void)tapGestureRecognized:(id)arg1 ;
-(ISWrappedAVPlayer *)avPlayer;
-(UIImageView *)muteButton;
-(CKMovieMediaObject *)mediaObject;
-(void)prepareForAcknowledgementDisplay;
-(void)prepareForAcknowledgementDismissal;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(BOOL)isJellyfishVideo;
-(void)setIsJellyfishVideo:(BOOL)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(void)setVideoPlayer:(ISVideoPlayerUIView *)arg1 ;
-(void)startListeningToVideoPlayer;
-(void)setMuteButton:(UIImageView *)arg1 ;
-(void)_thermalStateDidChange:(id)arg1 ;
-(void)stopListeningToVideoPlayer;
-(ISVideoPlayerUIView *)videoPlayer;
-(BOOL)isListeningToVideoPlayer;
-(void)setIsListeningToVideoPlayer:(BOOL)arg1 ;
-(void)_removeSnapshot;
-(BOOL)_shouldPauseInitialLooping;
-(BOOL)_thermalStateAcceptableForLooping;
-(BOOL)_shouldPresentQuickLookOnTap;
-(BOOL)_applicationStateAcceptableForLooping;
-(void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2 ;
-(void)avPlayerDidDeallocate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setAvPlayer:(ISWrappedAVPlayer *)arg1 ;
@end

