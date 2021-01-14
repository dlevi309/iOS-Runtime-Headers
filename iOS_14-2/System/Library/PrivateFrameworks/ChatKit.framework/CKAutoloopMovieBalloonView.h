/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>
#import <libobjc.A.dylib/ISWrappedAVPlayerDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class CKMovieMediaObject, UIImageView, ISVideoPlayerUIView, ISWrappedAVPlayer, ISWrappedAVAudioSession, UIView, NSString;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver> {

	BOOL _isJellyfishVideo;
	BOOL _isMuted;
	BOOL _isListeningToVideoPlayer;
	CKMovieMediaObject* _mediaObject;
	UIImageView* _muteButton;
	ISVideoPlayerUIView* _videoPlayer;
	ISWrappedAVPlayer* _avPlayer;
	ISWrappedAVAudioSession* _audioSession;
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
+(Class)AVPlayerClass;
+(Class)VideoPlayerUIViewClass;
+(Class)AVPlayerLayerClass;
+(id)_autoloopAVAudioSessionQueue;
+(BOOL)isEnabled;
-(void)prepareForDisplay;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIView *)snapshotView;
-(void)prepareForAcknowledgementDisplay;
-(void)prepareForAcknowledgementDismissal;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(BOOL)isJellyfishVideo;
-(void)setIsJellyfishVideo:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)muteButton;
-(void)prepareForReuse;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setVideoPlayer:(ISVideoPlayerUIView *)arg1 ;
-(ISVideoPlayerUIView *)videoPlayer;
-(NSString *)description;
-(void)layoutSubviews;
-(void)startListeningToVideoPlayer;
-(void)setMuteButton:(UIImageView *)arg1 ;
-(void)stopListeningToVideoPlayer;
-(BOOL)isListeningToVideoPlayer;
-(void)setIsListeningToVideoPlayer:(BOOL)arg1 ;
-(void)_removeSnapshot;
-(BOOL)_shouldPauseInitialLooping;
-(BOOL)_thermalStateAcceptableForLooping;
-(BOOL)_shouldPresentQuickLookOnTap;
-(BOOL)_applicationStateAcceptableForLooping;
-(void)setAvPlayer:(ISWrappedAVPlayer *)arg1 ;
-(void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2 ;
-(void)avPlayerDidDeallocate;
-(void)_thermalStateDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)previewDidChange:(id)arg1 ;
-(CKMovieMediaObject *)mediaObject;
-(ISWrappedAVPlayer *)avPlayer;
-(void)setAudioSession:(ISWrappedAVAudioSession *)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(ISWrappedAVAudioSession *)audioSession;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

