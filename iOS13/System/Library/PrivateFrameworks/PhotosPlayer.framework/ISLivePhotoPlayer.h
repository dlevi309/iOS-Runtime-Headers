/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayer.h>
#import <libobjc.A.dylib/ISLivePhotoSettleBehaviorDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class NSMutableSet, ISLivePhotoVitalityFilter, NSDate, NSSet, NSString;

@interface ISLivePhotoPlayer : ISBasePlayer <ISLivePhotoSettleBehaviorDelegate, ISChangeObserver> {

	NSMutableSet* _playbackFilters;
	Ai _fadeInRequestID;
	SCD_Struct_IS9 _isValid;
	double _lastAppliedScale;
	BOOL _playingVitality;
	BOOL _hinting;
	BOOL _isAttemptingToPlayback;
	BOOL _immediatelyShowsPhotoWhenPlaybackEnds;
	BOOL _playbackAllowed;
	BOOL __settleAutomaticallyWhenReady;
	BOOL __shouldPrepareForVitalityWhenReady;
	BOOL __shouldPlayVitalityWhenReady;
	BOOL __shouldPrepareForHintWhenReady;
	ISLivePhotoVitalityFilter* _vitalityFilter;
	long long _currentPlaybackStyle;
	long long _targetReadiness;
	long long __styleToPlayWhenReady;
	NSDate* __vitalityTimeoutDate;
	SCD_Struct_IS1 _seekTime;
	SCD_Struct_IS10 _trimTimeRange;

}

@property (assign,setter=_setCurrentPlaybackStyle:,nonatomic) long long currentPlaybackStyle;                                    //@synthesize currentPlaybackStyle=_currentPlaybackStyle - In the implementation block
@property (assign,setter=_setStyleToPlayWhenReady:,nonatomic) long long _styleToPlayWhenReady;                                   //@synthesize _styleToPlayWhenReady=__styleToPlayWhenReady - In the implementation block
@property (assign,setter=_setIsAttemptingToPlayback:,nonatomic) BOOL isAttemptingToPlayback;                                     //@synthesize isAttemptingToPlayback=_isAttemptingToPlayback - In the implementation block
@property (assign,setter=_setSettleAutomaticallyWhenReady:,nonatomic) BOOL _settleAutomaticallyWhenReady;                        //@synthesize _settleAutomaticallyWhenReady=__settleAutomaticallyWhenReady - In the implementation block
@property (assign,setter=_setShouldPrepareForVitalityWhenReady:,nonatomic) BOOL _shouldPrepareForVitalityWhenReady;              //@synthesize _shouldPrepareForVitalityWhenReady=__shouldPrepareForVitalityWhenReady - In the implementation block
@property (assign,setter=_setShouldPlayVitalityWhenReady:,nonatomic) BOOL _shouldPlayVitalityWhenReady;                          //@synthesize _shouldPlayVitalityWhenReady=__shouldPlayVitalityWhenReady - In the implementation block
@property (assign,setter=_setShouldPrepareForHintWhenReady:,nonatomic) BOOL _shouldPrepareForHintWhenReady;                      //@synthesize _shouldPrepareForHintWhenReady=__shouldPrepareForHintWhenReady - In the implementation block
@property (assign,setter=_setPlayingVitality:,getter=isPlayingVitality,nonatomic) BOOL playingVitality;                          //@synthesize playingVitality=_playingVitality - In the implementation block
@property (assign,setter=_setHinting:,getter=isHinting,nonatomic) BOOL hinting;                                                  //@synthesize hinting=_hinting - In the implementation block
@property (setter=_setVitalityTimeoutDate:,nonatomic,retain) NSDate * _vitalityTimeoutDate;                                      //@synthesize _vitalityTimeoutDate=__vitalityTimeoutDate - In the implementation block
@property (nonatomic,readonly) BOOL _canPlayVitality; 
@property (nonatomic,readonly) NSSet * playbackFilters; 
@property (nonatomic,retain) ISLivePhotoVitalityFilter * vitalityFilter;                                                         //@synthesize vitalityFilter=_vitalityFilter - In the implementation block
@property (assign,nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds;                                                         //@synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds - In the implementation block
@property (assign,getter=isPlaybackAllowed,nonatomic) BOOL playbackAllowed;                                                      //@synthesize playbackAllowed=_playbackAllowed - In the implementation block
@property (assign,nonatomic) long long targetReadiness;                                                                          //@synthesize targetReadiness=_targetReadiness - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 seekTime;                                                                          //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS10 trimTimeRange;                                                                      //@synthesize trimTimeRange=_trimTimeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)statusDidChange;
-(void)stopPlayback;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(void)didPerformChanges;
-(BOOL)isPlaybackAllowed;
-(void)setPlaybackAllowed:(BOOL)arg1 ;
-(void)startPlaybackWithStyleWhenReady:(long long)arg1 ;
-(SCD_Struct_IS1)seekTime;
-(void)setTargetReadiness:(long long)arg1 ;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(long long)targetReadiness;
-(long long)currentPlaybackStyle;
-(BOOL)isHinting;
-(BOOL)isPlayingVitality;
-(void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(BOOL)arg2 ;
-(void)setTrimTimeRange:(SCD_Struct_IS10)arg1 ;
-(void)setSeekTime:(SCD_Struct_IS1)arg1 completion:(/*^block*/id)arg2 ;
-(void)playerItemDidChange;
-(void)stopPlaybackAnimated:(BOOL)arg1 ;
-(BOOL)isAttemptingToPlayback;
-(void)playHintWhenReady;
-(void)prepareForHintWhenReady;
-(void)configurePlayerItem;
-(void)activeBehaviorDidChange;
-(double)videoWillPlayToPhotoInterval;
-(double)lastAppliedScale;
-(double)_photoTransitionDuration;
-(BOOL)immediatelyShowsPhotoWhenPlaybackEnds;
-(void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1 ;
-(void)livePhotoPlaybackBehaviorDidFinish:(id)arg1 ;
-(void)livePhotoPlaybackBehaviorWillTransitionToPhoto:(id)arg1 ;
-(void)livePhotoSettleBehaviorDidFinish:(id)arg1 ;
-(void)addPlaybackFilter:(id)arg1 ;
-(void)removePlaybackFilter:(id)arg1 ;
-(NSSet *)playbackFilters;
-(void)setVitalityFilter:(ISLivePhotoVitalityFilter *)arg1 ;
-(void)_updatePlayerItemLoadingTarget;
-(void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(BOOL)arg2 ;
-(void)prepareForVitality;
-(void)playVitality;
-(id)_createVitalityBehavior;
-(BOOL)_canPlayVitality;
-(void)_playIfNeeded;
-(void)_prepareForVitalityIfNeeded;
-(void)_handleVitalityFilterDidChange:(id)arg1 ;
-(void)_handlePlaybackFilterDidChange;
-(void)_invalidateApertureMode;
-(void)_updateApertureModeIfNeeded;
-(void)_invalidateScale;
-(void)_updateScaleIfNeeded;
-(void)_setHinting:(BOOL)arg1 ;
-(void)_setCurrentPlaybackStyle:(long long)arg1 ;
-(void)setIsAttemptingToPlayback:(BOOL)arg1 ;
-(void)_configurePlaybackFilters;
-(void)_resetPlaybackFilters;
-(long long)_coalescedPlaybackFilterState;
-(double)_coalescedPlaybackFilterHintProgress;
-(void)_configurePlaybackFilter:(id)arg1 ;
-(void)_updateHintingAndVitality;
-(void)_fadeInAudio;
-(void)vitalityBehaviorDidBeginPlaying:(id)arg1 ;
-(void)vitalityBehaviorDidEndPlaying:(id)arg1 ;
-(BOOL)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1 ;
-(ISLivePhotoVitalityFilter *)vitalityFilter;
-(void)_setIsAttemptingToPlayback:(BOOL)arg1 ;
-(void)setImmediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg1 ;
-(SCD_Struct_IS10)trimTimeRange;
-(long long)_styleToPlayWhenReady;
-(void)_setStyleToPlayWhenReady:(long long)arg1 ;
-(BOOL)_settleAutomaticallyWhenReady;
-(void)_setSettleAutomaticallyWhenReady:(BOOL)arg1 ;
-(BOOL)_shouldPrepareForVitalityWhenReady;
-(void)_setShouldPrepareForVitalityWhenReady:(BOOL)arg1 ;
-(BOOL)_shouldPlayVitalityWhenReady;
-(void)_setShouldPlayVitalityWhenReady:(BOOL)arg1 ;
-(BOOL)_shouldPrepareForHintWhenReady;
-(void)_setShouldPrepareForHintWhenReady:(BOOL)arg1 ;
-(NSDate *)_vitalityTimeoutDate;
-(void)_setVitalityTimeoutDate:(id)arg1 ;
@end

