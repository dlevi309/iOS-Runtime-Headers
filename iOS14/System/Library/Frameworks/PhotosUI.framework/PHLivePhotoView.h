/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXLivePhotoView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@protocol PHLivePhotoViewDelegate;
@class ISLivePhotoPlayer, PHLivePhoto, ISPlayerItem, UIView, ISLivePhotoUIView, UIGestureRecognizer, NSString;

@interface PHLivePhotoView : UIView <PXLivePhotoView, ISChangeObserver> {

	struct {
		BOOL respondsToWillBeginPlaybackWithStyle;
		BOOL respondsToDidEndPlayback;
	}  _delegateFlags;
	struct {
		BOOL respondsToDidEndPlayingVitality;
		BOOL respondsToDidBeginHinting;
		BOOL respondsToDidBeginScrubbing;
		BOOL respondsToDidEndScrubbing;
	}  _delegatePrivateFlags;
	long long _currentPlaybackStyle;
	BOOL _muted;
	BOOL __playingVitality;
	BOOL __playbackRequested;
	BOOL _scrubbing;
	BOOL _shouldApplyTargetReadiness;
	BOOL _showsStatusBorder;
	id<PHLivePhotoViewDelegate> _delegate;
	PHLivePhoto* _livePhoto;
	ISPlayerItem* __playerItem;
	long long _targetReadiness;
	UIView* _photoView;
	ISLivePhotoUIView* _playerView;
	ISLivePhotoPlayer* _player;
	CGPoint _scaleAnchorOffset;
	SCD_Struct_PH5 _trimmedTimeRange;

}

@property (nonatomic,retain) ISLivePhotoPlayer * player; 
@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;                  //@synthesize _playerItem=__playerItem - In the implementation block
@property (assign,setter=_setPlayingVitality:,nonatomic) BOOL _playingVitality;                  //@synthesize _playingVitality=__playingVitality - In the implementation block
@property (assign,setter=_setPlaybackRequested:,nonatomic) BOOL _playbackRequested;              //@synthesize _playbackRequested=__playbackRequested - In the implementation block
@property (assign,setter=_setScrubbing:,nonatomic) BOOL scrubbing;                               //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) long long targetReadiness;                                          //@synthesize targetReadiness=_targetReadiness - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyTargetReadiness;                                    //@synthesize shouldApplyTargetReadiness=_shouldApplyTargetReadiness - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                                 //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) CGPoint scaleAnchorOffset;                                          //@synthesize scaleAnchorOffset=_scaleAnchorOffset - In the implementation block
@property (nonatomic,retain) ISLivePhotoUIView * playerView;                                     //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) ISLivePhotoPlayer * player;                                         //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBorder;                                             //@synthesize showsStatusBorder=_showsStatusBorder - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH5 trimmedTimeRange;                                    //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (assign,nonatomic) CGImageRef overridePhoto; 
@property (assign,nonatomic) SCD_Struct_PH4 seekTime; 
@property (getter=isDisplayingPhoto,nonatomic,readonly) BOOL displayingPhoto; 
@property (assign,nonatomic,__weak) id<PHLivePhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                            //@synthesize livePhoto=_livePhoto - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                          //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1 ;
-(ISLivePhotoPlayer *)player;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(SCD_Struct_PH4)seekTime;
-(void)setPlayer:(ISLivePhotoPlayer *)arg1 ;
-(void)stopPlayback;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(PHLivePhoto *)livePhoto;
-(ISPlayerItem *)_playerItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PHLivePhotoViewDelegate>)delegate;
-(CGPoint)scaleAnchorOffset;
-(void)setShouldApplyTargetReadiness:(BOOL)arg1 ;
-(long long)targetReadiness;
-(BOOL)shouldApplyTargetReadiness;
-(ISLivePhotoUIView *)playerView;
-(BOOL)_playingVitality;
-(void)setPlayerView:(ISLivePhotoUIView *)arg1 ;
-(void)setShowsStatusBorder:(BOOL)arg1 ;
-(void)_playerDidBeginHinting;
-(void)setDelegate:(id<PHLivePhotoViewDelegate>)arg1 ;
-(void)_handlePlayerItemStatusChanged;
-(SCD_Struct_PH5)trimmedTimeRange;
-(void)setMuted:(BOOL)arg1 ;
-(void)_setScrubbing:(BOOL)arg1 ;
-(void)_setPlaybackRequested:(BOOL)arg1 ;
-(void)_updateCurrentPlaybackStyleAndSeeking;
-(void)setSeekTime:(SCD_Struct_PH4)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPhotoView:(UIView *)arg1 ;
-(void)setTrimmedTimeRange:(SCD_Struct_PH5)arg1 ;
-(void)_updatePlayerAudioEnabled;
-(void)_updatePlayerTargetReadiness;
-(void)setOverridePhoto:(CGImageRef)arg1 ;
-(id)generateSnapshotImage;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)setScaleAnchorOffset:(CGPoint)arg1 ;
-(BOOL)isMuted;
-(void)_commonPHLivePhotoViewInitialization;
-(void)_updateStatusBorder;
-(CGImageRef)overridePhoto;
-(void)setContentMode:(long long)arg1 ;
-(UIView *)photoView;
-(BOOL)showsStatusBorder;
-(void)setTargetReadiness:(long long)arg1 ;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(void)_setPlayerItem:(id)arg1 ;
-(BOOL)isDisplayingPhoto;
-(void)_updatePlayingVitality;
-(BOOL)_playbackRequested;
-(BOOL)scrubbing;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

