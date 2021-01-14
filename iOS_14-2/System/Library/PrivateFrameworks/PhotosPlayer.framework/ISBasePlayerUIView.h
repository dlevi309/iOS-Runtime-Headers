/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISBasePlayerOutput.h>

@protocol OS_dispatch_queue, ISBasePlayerUIViewChangeObserver;
@class NSObject, ISPlayerOutputContent, ISBasePlayer, UIView, UIImage, CAMeshTransform, ISWrappedAVAudioSession, ISVideoPlayerUIView, UIImageView, NSString;

@interface ISBasePlayerUIView : UIView <ISChangeObserver, ISBasePlayerOutput> {

	NSObject*<OS_dispatch_queue> _audioSessionQueue;
	ISPlayerOutputContent* _content;
	SCD_Struct_IS4 _changeObserverRespondsTo;
	ISBasePlayer* _player;
	UIView* _customPhotoView;
	UIImage* _overrideImage;
	/*^block*/id _videoLayerReadyForDisplayChangeHandler;
	CAMeshTransform* _videoTransform;
	UIView* _containerView;
	UIView* _videoContainerView;
	ISWrappedAVAudioSession* _wrappedAudioSession;
	id<ISBasePlayerUIViewChangeObserver> __changeObserver;
	ISVideoPlayerUIView* _videoBlurView;
	UIImageView* _photoView;
	ISVideoPlayerUIView* _videoView;
	CGPoint _scaleAnchorOffset;
	CGRect _contentsRect;

}

@property (nonatomic,readonly) UIView * containerView;                                                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * videoContainerView;                                                                       //@synthesize videoContainerView=_videoContainerView - In the implementation block
@property (setter=_setWrappedAudioSession:,nonatomic,retain) ISWrappedAVAudioSession * wrappedAudioSession;                       //@synthesize wrappedAudioSession=_wrappedAudioSession - In the implementation block
@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<ISBasePlayerUIViewChangeObserver> _changeObserver;              //@synthesize _changeObserver=__changeObserver - In the implementation block
@property (nonatomic,readonly) ISVideoPlayerUIView * videoBlurView;                                                               //@synthesize videoBlurView=_videoBlurView - In the implementation block
@property (nonatomic,readonly) UIImageView * photoView;                                                                           //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) ISVideoPlayerUIView * videoView;                                                                   //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) ISBasePlayer * player;                                                                               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) CGPoint scaleAnchorOffset;                                                                           //@synthesize scaleAnchorOffset=_scaleAnchorOffset - In the implementation block
@property (nonatomic,retain) UIView * customPhotoView;                                                                            //@synthesize customPhotoView=_customPhotoView - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                                                                             //@synthesize overrideImage=_overrideImage - In the implementation block
@property (getter=isDisplayingPhoto,nonatomic,readonly) BOOL displayingPhoto; 
@property (assign,nonatomic) CGRect contentsRect;                                                                                 //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler;                                                             //@synthesize videoLayerReadyForDisplayChangeHandler=_videoLayerReadyForDisplayChangeHandler - In the implementation block
@property (nonatomic,copy) CAMeshTransform * videoTransform;                                                                      //@synthesize videoTransform=_videoTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isVideoReadyForDisplay; 
+(Class)playerClass;
-(ISBasePlayer *)player;
-(void)registerChangeObserver:(id)arg1 ;
-(void)contentDidChange;
-(void)setPlayer:(ISBasePlayer *)arg1 ;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(UIImage *)overrideImage;
-(void)unregisterChangeObserver:(id)arg1 ;
-(CGRect)contentsRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContent:(id)arg1 ;
-(CGPoint)scaleAnchorOffset;
-(void)setVideoLayerReadyForDisplayChangeHandler:(id)arg1 ;
-(void)_setChangeObserver:(id)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)audioSessionDidChange;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)playerDidChange;
-(void)setCustomPhotoView:(UIView *)arg1 ;
-(void)_performCommonInitialization;
-(id)initWithCoder:(id)arg1 ;
-(ISVideoPlayerUIView *)videoView;
-(void)_updatePhotoView;
-(id)generateSnapshotImage;
-(id<ISBasePlayerUIViewChangeObserver>)_changeObserver;
-(void)setScaleAnchorOffset:(CGPoint)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIImageView *)photoView;
-(BOOL)isDisplayingPhoto;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(UIView *)customPhotoView;
-(id)videoLayerReadyForDisplayChangeHandler;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isVideoReadyForDisplay;
-(void)setVideoTransform:(CAMeshTransform *)arg1 ;
-(void)_setWrappedAudioSession:(id)arg1 ;
-(void)_videoViewReadyForDisplayDidChange;
-(void)_updatePlayerAudioSession;
-(void)_signalChange:(unsigned long long)arg1 withAnimationDuration:(double)arg2 ;
-(CAMeshTransform *)videoTransform;
-(UIView *)videoContainerView;
-(ISWrappedAVAudioSession *)wrappedAudioSession;
-(ISVideoPlayerUIView *)videoBlurView;
@end

