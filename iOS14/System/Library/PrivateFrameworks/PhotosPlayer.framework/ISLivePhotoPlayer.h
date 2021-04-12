/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_IS8 _trimTimeRange;

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
@property (assign,nonatomic) SCD_Struct_IS8 trimTimeRange;                                                                       //@synthesize trimTimeRange=_trimTimeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(SCD_Struct_IS1)seekTime;
-(void)stopPlayback;
-(void)_fadeInAudio;
-(void)_setIsAttemptingToPlayback:(BOOL)arg1 ;
-(void)_configurePlaybackFilter:(id)arg1 ;
-(id)_createVitalityBehavior;
-(id)init;
-(BOOL)immediatelyShowsPhotoWhenPlaybackEnds;
-(void)startPlaybackWithStyleWhenReady:(long long)arg1 ;
-(void)setTrimTimeRange:(SCD_Struct_IS8)arg1 ;
-(void)removePlaybackFilter:(id)arg1 ;
-(void)_invalidateApertureMode;
-(void)addPlaybackFilter:(id)arg1 ;
-(void)_handlePlaybackFilterDidChange;
-(void)_prepareForVitalityIfNeeded;
-(BOOL)isAttemptingToPlayback;
-(void)didPerformChanges;
-(ISLivePhotoVitalityFilter *)vitalityFilter;
-(BOOL)_shouldPrepareForVitalityWhenReady;
-(void)_playIfNeeded;
-(void)startPlaybackWithStyle:(long long)arg1 settleAutomatically:(BOOL)arg2 ;
-(void)livePhotoPlaybackBehaviorDidBeginPlaying:(id)arg1 ;
-(long long)targetReadiness;
-(void)_handleVitalityFilterDidChange:(id)arg1 ;
-(void)setPlaybackAllowed:(BOOL)arg1 ;
-(void)prepareForHintWhenReady;
-(void)setImmediatelyShowsPhotoWhenPlaybackEnds:(BOOL)arg1 ;
-(BOOL)_shouldPrepareForHintWhenReady;
-(void)setSeekTime:(SCD_Struct_IS1)arg1 completion:(/*^block*/id)arg2 ;
-(void)configurePlayerItem;
-(void)statusDidChange;
-(BOOL)isPlaybackAllowed;
-(void)vitalityBehaviorDidBeginPlaying:(id)arg1 ;
-(double)_coalescedPlaybackFilterHintProgress;
-(void)startPlaybackWithStyleWhenReady:(long long)arg1 settleAutomatically:(BOOL)arg2 ;
-(BOOL)_settleAutomaticallyWhenReady;
-(void)playHintWhenReady;
-(void)_resetPlaybackFilters;
-(void)setIsAttemptingToPlayback:(BOOL)arg1 ;
-(void)playVitality;
-(void)activeBehaviorDidChange;
-(void)stopPlaybackAnimated:(BOOL)arg1 ;
-(void)_setVitalityTimeoutDate:(id)arg1 ;
-(void)_setStyleToPlayWhenReady:(long long)arg1 ;
-(void)_updateScaleIfNeeded;
-(void)prepareForVitality;
-(void)playerItemDidChange;
-(void)setVitalityFilter:(ISLivePhotoVitalityFilter *)arg1 ;
-(SCD_Struct_IS8)trimTimeRange;
-(BOOL)isHinting;
-(void)_setShouldPrepareForVitalityWhenReady:(BOOL)arg1 ;
-(double)videoWillPlayToPhotoInterval;
-(void)livePhotoPlaybackBehaviorWillTransitionToPhoto:(id)arg1 ;
-(void)_setSettleAutomaticallyWhenReady:(BOOL)arg1 ;
-(long long)_styleToPlayWhenReady;
-(long long)_coalescedPlaybackFilterState;
-(long long)currentPlaybackStyle;
-(void)vitalityBehaviorDidEndPlaying:(id)arg1 ;
-(void)_setCurrentPlaybackStyle:(long long)arg1 ;
-(void)livePhotoPlaybackBehaviorDidFinish:(id)arg1 ;
-(NSDate *)_vitalityTimeoutDate;
-(BOOL)_shouldPlayVitalityWhenReady;
-(BOOL)_canPlayVitality;
-(void)_setHinting:(BOOL)arg1 ;
-(double)lastAppliedScale;
-(void)_invalidateScale;
-(BOOL)isPlayingVitality;
-(void)_setShouldPlayVitalityWhenReady:(BOOL)arg1 ;
-(double)_photoTransitionDuration;
-(void)livePhotoSettleBehaviorDidFinish:(id)arg1 ;
-(void)_updateApertureModeIfNeeded;
-(void)setTargetReadiness:(long long)arg1 ;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(BOOL)vitalityBehaviorShouldEndPlayingAtPhoto:(id)arg1 ;
-(void)_setShouldPrepareForHintWhenReady:(BOOL)arg1 ;
-(void)_updateHintingAndVitality;
-(void)_updatePlayerItemLoadingTarget;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(NSSet *)playbackFilters;
-(void)_configurePlaybackFilters;
@end

