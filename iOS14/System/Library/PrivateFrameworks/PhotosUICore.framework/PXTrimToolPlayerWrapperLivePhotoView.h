/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/PXTrimToolPlayerWrapper.h>

@protocol PXTrimToolPlayerObserver, PXLivePhotoView;
@class UIView, ISVideoPlayerUIView, ISWrappedAVPlayer, NSString;

@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper> {

	SCD_Struct_PX59 _delegateFlags;
	BOOL _needsPlayerUpdate;
	id<PXTrimToolPlayerObserver> _playerObserver;
	UIView* _loupePlayerView;
	ISVideoPlayerUIView* _videoPlayerView;
	ISWrappedAVPlayer* _wrappedAVPlayer;
	id<PXLivePhotoView> _livePhotoView;
	id _periodicTimeObserver;
	SCD_Struct_PX8 _periodicTimeObservationInterval;

}

@property (nonatomic,retain) ISWrappedAVPlayer * wrappedAVPlayer;                             //@synthesize wrappedAVPlayer=_wrappedAVPlayer - In the implementation block
@property (nonatomic,readonly) id<PXLivePhotoView> livePhotoView;                             //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (assign,nonatomic) BOOL needsPlayerUpdate;                                          //@synthesize needsPlayerUpdate=_needsPlayerUpdate - In the implementation block
@property (nonatomic,retain) ISVideoPlayerUIView * _videoPlayerView;                          //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 periodicTimeObservationInterval;                  //@synthesize periodicTimeObservationInterval=_periodicTimeObservationInterval - In the implementation block
@property (nonatomic,retain) id periodicTimeObserver;                                         //@synthesize periodicTimeObserver=_periodicTimeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXTrimToolPlayerObserver> playerObserver;              //@synthesize playerObserver=_playerObserver - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX9 trimRange; 
@property (nonatomic,readonly) UIView * loupePlayerView;                                      //@synthesize loupePlayerView=_loupePlayerView - In the implementation block
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(id<PXLivePhotoView>)livePhotoView;
-(BOOL)isPlaying;
-(void)pause;
-(void)play;
-(void)invalidateComposition;
-(id)initWithLivePhotoView:(id)arg1 ;
-(ISVideoPlayerUIView *)_videoPlayerView;
-(BOOL)isReadyToPlay;
-(void)requestPlayerItemWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)loupePlayerView;
-(void)applyTrimTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)stopPeriodicTimeObserver;
-(void)startPeriodicTimeObserver;
-(void)setPlayerObserver:(id<PXTrimToolPlayerObserver>)arg1 ;
-(void)seekToTime:(SCD_Struct_PX8)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3 ;
-(id)videoPlayerView;
-(SCD_Struct_PX9)trimRange;
-(void)seekToTime:(SCD_Struct_PX8)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id<PXTrimToolPlayerObserver>)playerObserver;
-(void)_loadWrappedAVPlayerIfNecessary;
-(void)setWrappedAVPlayer:(ISWrappedAVPlayer *)arg1 ;
-(id)_videoPlayerViewIfLoaded;
-(void)_createLoupePlayerView;
-(void)_addPeriodicTimeObserver;
-(void)_timeObserverTimeChanged:(SCD_Struct_PX8)arg1 ;
-(void)set_videoPlayerView:(ISVideoPlayerUIView *)arg1 ;
-(ISWrappedAVPlayer *)wrappedAVPlayer;
-(BOOL)needsPlayerUpdate;
-(void)setNeedsPlayerUpdate:(BOOL)arg1 ;
-(id)periodicTimeObserver;
-(SCD_Struct_PX8)periodicTimeObservationInterval;
-(void)setPeriodicTimeObservationInterval:(SCD_Struct_PX8)arg1 ;
-(void)setPeriodicTimeObserver:(id)arg1 ;
@end

