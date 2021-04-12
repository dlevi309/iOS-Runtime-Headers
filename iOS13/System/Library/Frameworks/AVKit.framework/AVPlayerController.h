/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIResponder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSArray, AVMediaSelectionOption, NSString, NSObject, NSNumber, AVValueTiming, AVPlayer, AVObservationController, AVAsset, AVAssetTrack, AVTimecodeController, NSDictionary, NSDate, NSError;

@interface AVPlayerController : UIResponder {

	BOOL _jKeyDown;
	BOOL _kKeyDown;
	BOOL _lKeyDown;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	AVMediaSelectionOption* _cachedSelectedAudioMediaSelectionOption;
	AVMediaSelectionOption* _cachedSelectedLegibleMediaSelectionOption;
	AVMediaSelectionOption* _cachedSelectedLegibleMediaSelectionOptionAccordingToAVFoundation;
	NSString* _lastKnownPersistedExtendedLanguageTag;
	float _rate;
	BOOL _isResumed;
	NSObject*<OS_dispatch_source> _seekTimer;
	double _timeOfLastUpdate;
	NSObject*<OS_dispatch_queue> _seekQueue;
	BOOL _ignoreRateKeyValueChange;
	void* _observationInfo;
	BOOL _inspectionSuspended;
	id _updateAtMinMaxTimePeriodicObserverToken;
	id _timecodePeriodicObserverToken;
	BOOL _pictureInPictureInterrupted;
	BOOL _handlesAudioSessionInterruptions;
	BOOL _isDeallocating;
	NSNumber* _rateToRestoreAfterAudioSessionInterruptionEnds;
	/*^block*/id _retryPlayingImmediatelyBlock;
	BOOL _shouldPlayImmediately;
	BOOL _looping;
	long long _actionAtItemEnd;
	BOOL _pendingSeek;
	SCD_Struct_AV10 _toleranceBefore;
	SCD_Struct_AV10 _toleranceAfter;
	BOOL _isScanningForward;
	BOOL _isScanningBackward;
	unsigned long long _scanningCount;
	double _preScanningRate;
	AVValueTiming* _liveStreamMinTiming;
	AVValueTiming* _liveStreamMaxTiming;
	BOOL _liveStreamEventModePossible;
	long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
	BOOL _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
	BOOL _shouldPlayWhenLikelyToKeepUp;
	BOOL _forceScanning;
	double _rateBeforeForceScanning;
	BOOL _playingOnSecondScreen;
	BOOL _didPreventSleepWhenStartingExternalPlayback;
	BOOL _atMaxTime;
	BOOL _atMinTime;
	BOOL _scrubbing;
	BOOL _pictureInPictureSupported;
	BOOL _seekingInternal;
	BOOL _seeking;
	BOOL _composable;
	BOOL _hasProtectedContent;
	BOOL _compatibleWithAirPlayVideo;
	BOOL _preventingIdleSystemSleep;
	BOOL _preventingIdleDisplaySleep;
	BOOL _disablingAutomaticTermination;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _pictureInPictureActive;
	BOOL _canTogglePictureInPicture;
	BOOL _hasBegunInspection;
	BOOL _touchBarRequiresLinearPlayback;
	AVPlayer* _player;
	AVObservationController* _observationController;
	AVAsset* _currentAssetIfReady;
	NSObject*<OS_dispatch_queue> _assetInspectionQueue;
	AVAsset* _assetBeingPrepared;
	AVValueTiming* _timing;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	AVAssetTrack* _currentAudioTrack;
	AVTimecodeController* _timecodeController;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _contentChapters;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	double _defaultPlaybackRate;
	CGSize _presentationSize;
	SCD_Struct_AV10 _seekToTimeInternal;

}

@property (nonatomic,readonly) BOOL supportsVolumeAnimation; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (nonatomic,readonly) BOOL usesExternalPlaybackWhileExternalScreenIsActive; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (assign,nonatomic) BOOL handlesAudioSessionInterruptions; 
@property (nonatomic,readonly) BOOL hasTimecodes; 
@property (nonatomic,readonly) BOOL hasReadableTimecodes; 
@property (assign,getter=isAtMaxTime,nonatomic) BOOL atMaxTime;                                                      //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (assign,getter=isAtMinTime,nonatomic) BOOL atMinTime;                                                      //@synthesize atMinTime=_atMinTime - In the implementation block
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;                                                      //@synthesize scrubbing=_scrubbing - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                      //@synthesize observationController=_observationController - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                                                //@synthesize presentationSize=_presentationSize - In the implementation block
@property (nonatomic,retain) AVAsset * currentAssetIfReady;                                                          //@synthesize currentAssetIfReady=_currentAssetIfReady - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetInspectionQueue;                                      //@synthesize assetInspectionQueue=_assetInspectionQueue - In the implementation block
@property (nonatomic,retain) AVAsset * assetBeingPrepared;                                                           //@synthesize assetBeingPrepared=_assetBeingPrepared - In the implementation block
@property (assign,getter=isPictureInPictureSupported,nonatomic) BOOL pictureInPictureSupported;                      //@synthesize pictureInPictureSupported=_pictureInPictureSupported - In the implementation block
@property (getter=isReadyToPlay,nonatomic,readonly) BOOL readyToPlay; 
@property (nonatomic,retain) AVValueTiming * timing;                                                                 //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) AVValueTiming * minTiming;                                                              //@synthesize minTiming=_minTiming - In the implementation block
@property (nonatomic,retain) AVValueTiming * maxTiming;                                                              //@synthesize maxTiming=_maxTiming - In the implementation block
@property (nonatomic,retain) AVAssetTrack * currentAudioTrack;                                                       //@synthesize currentAudioTrack=_currentAudioTrack - In the implementation block
@property (nonatomic,retain) AVTimecodeController * timecodeController;                                              //@synthesize timecodeController=_timecodeController - In the implementation block
@property (getter=isSeekingInternal) BOOL seekingInternal;                                                           //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                          //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV10 seekToTimeInternal;                                                               //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
@property (assign,nonatomic) double seekToTime;                                                                      //@synthesize seekToTime=_seekToTime - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * contentChapters;                                                              //@synthesize contentChapters=_contentChapters - In the implementation block
@property (assign,getter=isComposable,nonatomic) BOOL composable;                                                    //@synthesize composable=_composable - In the implementation block
@property (assign,nonatomic) BOOL hasProtectedContent;                                                               //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (nonatomic,retain) NSArray * availableMetadataFormats;                                                     //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (assign,getter=isCompatibleWithAirPlayVideo,nonatomic) BOOL compatibleWithAirPlayVideo;                    //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign,nonatomic) double rateBeforeScrubBegan;                                                            //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (assign,getter=isPreventingIdleSystemSleep,nonatomic) BOOL preventingIdleSystemSleep;                      //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (assign,getter=isPreventingIdleDisplaySleep,nonatomic) BOOL preventingIdleDisplaySleep;                    //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (assign,getter=isDisablingAutomaticTermination,nonatomic) BOOL disablingAutomaticTermination;              //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                    //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;                            //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,nonatomic) BOOL canTogglePictureInPicture;                                                         //@synthesize canTogglePictureInPicture=_canTogglePictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL hasBegunInspection;                                                                //@synthesize hasBegunInspection=_hasBegunInspection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> seekTimer; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * currentOrEstimatedDate; 
@property (assign,nonatomic) double defaultPlaybackRate;                                                             //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (assign,nonatomic) BOOL touchBarRequiresLinearPlayback;                                                    //@synthesize touchBarRequiresLinearPlayback=_touchBarRequiresLinearPlayback - In the implementation block
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(void)initialize;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingReadyToPlay;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingCompletelySeekable;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingReversePlaybackEndTime;
+(id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasVideo;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingStreaming;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;
+(id)keyPathsForValuesAffectingPreferredDisplayCriteria;
+(id)keyPathsForValuesAffectingMaximumVideoResolution;
-(id)init;
-(void)dealloc;
-(void)setObservationInfo:(void*)arg1 ;
-(NSError *)error;
-(void*)observationInfo;
-(long long)status;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(id)loadedTimeRanges;
-(double)currentTime;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(BOOL)isPlaying;
-(BOOL)isLooping;
-(BOOL)hasContent;
-(BOOL)isPictureInPictureActive;
-(BOOL)hasProtectedContent;
-(void)setMuted:(BOOL)arg1 ;
-(AVValueTiming *)timing;
-(BOOL)isMuted;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(NSDate *)currentDate;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(long long)timeControlStatus;
-(id)seekableTimeRanges;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(long long)externalPlaybackType;
-(BOOL)allowsExternalPlayback;
-(BOOL)isScrubbing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(double)contentDuration;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)seekToTime:(double)arg1 ;
-(BOOL)hasSeekableLiveStreamingContent;
-(AVValueTiming *)maxTiming;
-(AVValueTiming *)minTiming;
-(BOOL)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(BOOL)isPlayingOnSecondScreen;
-(void)updateMinMaxTiming;
-(BOOL)hasLiveStreamingContent;
-(double)minTime;
-(double)maxTime;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(void)play:(id)arg1 ;
-(void)pause:(id)arg1 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(BOOL)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(BOOL)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(BOOL)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)currentLegibleMediaSelectionOption;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(BOOL)canScanBackward;
-(BOOL)canPause;
-(BOOL)canTogglePlayback;
-(BOOL)canSeek;
-(CGSize)contentDimensions;
-(BOOL)hasEnabledAudio;
-(BOOL)hasEnabledVideo;
-(BOOL)hasVideo;
-(double)contentDurationWithinEndTimes;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(BOOL)isPictureInPicturePossible;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)isPictureInPictureSupported;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV10)arg1 ;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV10)arg1 ;
-(CGSize)maximumVideoResolution;
-(id)preferredDisplayCriteria;
-(NSArray *)availableMetadataFormats;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(float)nominalFrameRate;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(SCD_Struct_AV10)forwardPlaybackEndTime;
-(SCD_Struct_AV10)reversePlaybackEndTime;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(CGSize)presentationSize;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(id)_queuePlayer;
-(id)audioOptions;
-(BOOL)isStreaming;
-(double)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(double)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)setCurrentAudioTrack:(AVAssetTrack *)arg1 ;
-(AVObservationController *)observationController;
-(BOOL)allowsPictureInPicturePlayback;
-(void)_ensureUserCaptionDisplayType:(long long)arg1 ;
-(void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(BOOL)arg1 ;
-(id)legibleOptions;
-(void)setLegibleMediaSelectionOptions:(id)arg1 audioMediaSelectionOptions:(id)arg2 assumeMediaOptionMayHaveChanged:(BOOL)arg3 ;
-(id)_optionsForGroup:(id)arg1 ;
-(void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(long long)arg1 ;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)selectedMediaOptionMayHaveChanged;
-(void)reloadOptions;
-(void)reloadOptionsAndCurrentSelections;
-(void)reloadAudioOptions;
-(void)reloadLegibleOptions;
-(void)selectedMediaOptionMayHaveChanged:(BOOL)arg1 ;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(BOOL)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(BOOL)supportsVolumeAnimation;
-(void)setScrubbing:(BOOL)arg1 ;
-(id)_timecodeTrack;
-(id)maxFrameCountString;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(void)startInspectionIfNeeded;
-(void)startKVO;
-(BOOL)isReadyToPlay;
-(BOOL)isCompletelySeekable;
-(void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)_retryPlayImmediatelyIfNeeded;
-(BOOL)canPlayImmediately;
-(NSObject*<OS_dispatch_source>)seekTimer;
-(void)_handleSeekTimerEvent;
-(void)autoplay:(id)arg1 ;
-(void)setTouchBarRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setLooping:(BOOL)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(BOOL)isInspectionSuspended;
-(void)setInspectionSuspended:(BOOL)arg1 ;
-(void)_setMinTiming:(id)arg1 maxTiming:(id)arg2 ;
-(NSDate *)currentOrEstimatedDate;
-(BOOL)hasContentChapters;
-(BOOL)hasTrimmableContent;
-(BOOL)hasShareableContent;
-(BOOL)_assetIsRestrictedFromSaving:(id)arg1 ;
-(id)audioWaveform;
-(BOOL)_assetIsMarkedNotSerializable:(id)arg1 ;
-(BOOL)_assetContainsProResRaw:(id)arg1 ;
-(void)_updateCurrentAudioTrackIfNeeded;
-(void)seekToCMTime:(SCD_Struct_AV10)arg1 toleranceBefore:(SCD_Struct_AV10)arg2 toleranceAfter:(SCD_Struct_AV10)arg3 ;
-(void)throttledSeekToTime:(SCD_Struct_AV10)arg1 toleranceBefore:(SCD_Struct_AV10)arg2 toleranceAfter:(SCD_Struct_AV10)arg3 ;
-(void)actuallySeekToTime;
-(void)scanForward:(id)arg1 ;
-(void)_updateScanningForwardRate;
-(void)scanBackward:(id)arg1 ;
-(void)_updateScanningBackwardRate;
-(BOOL)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(BOOL)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekOrStepByFrameCount:(long long)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(BOOL)canSeekChapterForward;
-(BOOL)canSeekChapterBackward;
-(void)updateTiming;
-(void)togglePictureInPicture:(id)arg1 ;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)_cancelPendingSeeksIfNeeded;
-(void)_updateRateForScrubbingAndSeeking;
-(id)scanningDelays;
-(void)_prepareAssetForInspectionIfNeeded;
-(BOOL)isAtMaxTime;
-(void)setAtMaxTime:(BOOL)arg1 ;
-(BOOL)isAtMinTime;
-(void)setAtMinTime:(BOOL)arg1 ;
-(AVAsset *)currentAssetIfReady;
-(void)setCurrentAssetIfReady:(AVAsset *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetInspectionQueue;
-(void)setAssetInspectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVAsset *)assetBeingPrepared;
-(void)setAssetBeingPrepared:(AVAsset *)arg1 ;
-(void)setPictureInPictureSupported:(BOOL)arg1 ;
-(AVAssetTrack *)currentAudioTrack;
-(AVTimecodeController *)timecodeController;
-(void)setTimecodeController:(AVTimecodeController *)arg1 ;
-(BOOL)isSeekingInternal;
-(void)setSeekingInternal:(BOOL)arg1 ;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(SCD_Struct_AV10)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV10)arg1 ;
-(double)seekToTime;
-(void)setSeekToTime:(double)arg1 ;
-(NSArray *)contentChapters;
-(void)setContentChapters:(NSArray *)arg1 ;
-(void)setComposable:(BOOL)arg1 ;
-(void)setHasProtectedContent:(BOOL)arg1 ;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(void)setCompatibleWithAirPlayVideo:(BOOL)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(BOOL)isPreventingIdleSystemSleep;
-(void)setPreventingIdleSystemSleep:(BOOL)arg1 ;
-(BOOL)isPreventingIdleDisplaySleep;
-(void)setPreventingIdleDisplaySleep:(BOOL)arg1 ;
-(BOOL)isDisablingAutomaticTermination;
-(void)setDisablingAutomaticTermination:(BOOL)arg1 ;
-(BOOL)canTogglePictureInPicture;
-(void)setCanTogglePictureInPicture:(BOOL)arg1 ;
-(BOOL)hasBegunInspection;
-(void)setHasBegunInspection:(BOOL)arg1 ;
-(BOOL)touchBarRequiresLinearPlayback;
-(void)stopGeneratingTimecodes;
-(BOOL)handlesAudioSessionInterruptions;
-(void)setRateWithForce:(double)arg1 ;
-(void)setHandlesAudioSessionInterruptions:(BOOL)arg1 ;
-(BOOL)hasTimecodes;
-(id)loadTimecodeControllerIfNeeded;
-(long long)frameNumberForCurrentTime;
-(BOOL)hasReadableTimecodes;
-(double)timecodeObservationInterval;
-(BOOL)startGeneratingTimecodesUsingBlock:(/*^block*/id)arg1 ;
-(void)seekToTimecode:(id)arg1 ;
-(void)seekToFrame:(long long)arg1 ;
-(id)timecodeForCurrentTime;
-(id)maxTimecode;
@end

