/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;
@class PXScrubberSeekRequest, AVPlayerItem;

@interface PXVideoScrubberController : PXObservable {

	id _playerObserver;
	BOOL _needsUpdate;
	BOOL _avPlayerCurrentTimeNeedsUpdate;
	BOOL _avPlayerDurationNeedsUpdate;
	SCD_Struct_PX24 _videoScrubberDelegateFlags;
	SCD_Struct_PX59 _targetFlags;
	id<PXVideoScrubberControllerDelegate> _delegate;
	id<PXVideoScrubberControllerTarget> _target;
	double _estimatedDuration;
	double __playheadTime;
	PXScrubberSeekRequest* __pendingSeekRequest;
	PXScrubberSeekRequest* __activeSeekRequest;
	SCD_Struct_PX8 __avPlayerCurrentTime;
	SCD_Struct_PX8 __avPlayerDuration;

}

@property (assign,setter=_setPlayheadTime:,nonatomic) double _playheadTime;                                           //@synthesize _playheadTime=__playheadTime - In the implementation block
@property (setter=_setPendingSeekRequest:,nonatomic,retain) PXScrubberSeekRequest * _pendingSeekRequest;              //@synthesize _pendingSeekRequest=__pendingSeekRequest - In the implementation block
@property (setter=_setActiveSeekRequest:,nonatomic,retain) PXScrubberSeekRequest * _activeSeekRequest;                //@synthesize _activeSeekRequest=__activeSeekRequest - In the implementation block
@property (assign,setter=_setAvPlayerCurrentTime:,nonatomic) SCD_Struct_PX8 _avPlayerCurrentTime;                     //@synthesize _avPlayerCurrentTime=__avPlayerCurrentTime - In the implementation block
@property (assign,setter=_setAvPlayerDuration:,nonatomic) SCD_Struct_PX8 _avPlayerDuration;                           //@synthesize _avPlayerDuration=__avPlayerDuration - In the implementation block
@property (assign,nonatomic,__weak) id<PXVideoScrubberControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<PXVideoScrubberControllerTarget> target;                                            //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) double estimatedDuration;                                                              //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (nonatomic,readonly) double length; 
@property (assign,nonatomic) double playheadProgress; 
@property (nonatomic,readonly) AVPlayerItem * currentPlayerItem; 
@property (nonatomic,readonly) float playRate; 
-(void)_invalidate;
-(id)init;
-(id<PXVideoScrubberControllerDelegate>)delegate;
-(float)playRate;
-(double)length;
-(void)_updateIfNeeded;
-(void)endSeeking;
-(void)setDelegate:(id<PXVideoScrubberControllerDelegate>)arg1 ;
-(void)_playerItemDidChange;
-(void)_removeObservers;
-(void)_addObservers;
-(double)estimatedDuration;
-(double)playheadProgress;
-(id)initWithTarget:(id)arg1 estimatedDuration:(double)arg2 ;
-(void)setPlayheadProgress:(double)arg1 ;
-(void)_seekToTime:(double)arg1 ;
-(id)mutableChangeObject;
-(AVPlayerItem *)currentPlayerItem;
-(id<PXVideoScrubberControllerTarget>)target;
-(void)_setPlayheadProgress:(double)arg1 andSeekVideoPlayer:(BOOL)arg2 ;
-(void)beginSeeking;
-(void)_seekRequest:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)_handleTimeoutCallbackForSeekRequest:(id)arg1 ;
-(void)_setActiveSeekRequest:(id)arg1 ;
-(void)_playerDidChange:(id)arg1 ;
-(void)_playerItemDurationDidChange;
-(void)_playerStatusDidChange;
-(double)_timeForProgress:(double)arg1 ;
-(double)_progressForTime:(double)arg1 ;
-(void)_setPlayheadTime:(double)arg1 ;
-(void)_invalidateAvPlayerCurrentTime;
-(void)_updateAvPlayerCurrentTimeIfNeeded;
-(void)_invalidateAvPlayerDuration;
-(void)_updateAvPlayerDurationIfNeeded;
-(double)_playheadTime;
-(PXScrubberSeekRequest *)_pendingSeekRequest;
-(void)_setPendingSeekRequest:(id)arg1 ;
-(PXScrubberSeekRequest *)_activeSeekRequest;
-(SCD_Struct_PX8)_avPlayerDuration;
-(SCD_Struct_PX8)_avPlayerCurrentTime;
-(void)_setAvPlayerCurrentTime:(SCD_Struct_PX8)arg1 ;
-(void)_setAvPlayerDuration:(SCD_Struct_PX8)arg1 ;
-(double)_duration;
-(void)_updateSeeking;
-(void)dealloc;
-(double)_lengthForDuration:(double)arg1 ;
@end

