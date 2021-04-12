/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIResponder.h>

@protocol OS_dispatch_source, OS_dispatch_queue, AVPlayerControllerDelegate;
@class NSArray, AVMediaSelectionOption, NSString, NSObject, NSNumber, AVValueTiming, BSSimpleAssertion, AVTimecodeController, AVPlayer, AVObservationController, AVAsset, AVAssetTrack, NSDictionary, AVPlayerLayer, NSDate, NSError;

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
	SCD_Struct_AV3 _toleranceBefore;
	SCD_Struct_AV3 _toleranceAfter;
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
	BSSimpleAssertion* _reduceResourceUsageAssertion;
	double _defaultPlaybackRate;
	BOOL _touchBarRequiresLinearPlayback;
	AVTimecodeController* _timecodeController;
	id<AVPlayerControllerDelegate> _internalDelegate;
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
	AVPlayer* _player;
	AVObservationController* _observationController;
	AVAsset* _currentAssetIfReady;
	NSObject*<OS_dispatch_queue> _assetInspectionQueue;
	AVAsset* _assetBeingPrepared;
	AVValueTiming* _timing;
	AVValueTiming* _minTiming;
	AVValueTiming* _maxTiming;
	AVAssetTrack* _currentAudioTrack;
	double _seekToTime;
	NSDictionary* _metadata;
	NSArray* _contentChapters;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;
	AVPlayerLayer* _playerLayerForReducingResources;
	CGSize _presentationSize;
	SCD_Struct_AV3 _seekToTimeInternal;

}

@property (nonatomic,readonly) BOOL supportsVolumeAnimation; 
@property (assign,nonatomic,__weak) id<AVPlayerControllerDelegate> internalDelegate; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@property (nonatomic,readonly) BOOL usesExternalPlaybackWhileExternalScreenIsActive; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (assign,nonatomic) BOOL handlesAudioSessionInterruptions; 
@property (nonatomic,readonly) AVTimecodeController * timecodeController; 
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
@property (getter=isSeekingInternal) BOOL seekingInternal;                                                           //@synthesize seekingInternal=_seekingInternal - In the implementation block
@property (assign,getter=isSeeking,nonatomic) BOOL seeking;                                                          //@synthesize seeking=_seeking - In the implementation block
@property (assign) SCD_Struct_AV3 seekToTimeInternal;                                                                //@synthesize seekToTimeInternal=_seekToTimeInternal - In the implementation block
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
@property (nonatomic,retain) BSSimpleAssertion * reduceResourceUsageAssertion; 
@property (assign,nonatomic,__weak) AVPlayerLayer * playerLayerForReducingResources;                                 //@synthesize playerLayerForReducingResources=_playerLayerForReducingResources - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> seekTimer; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * currentOrEstimatedDate; 
@property (assign,nonatomic) double defaultPlaybackRate; 
@property (assign,nonatomic) BOOL touchBarRequiresLinearPlayback; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(void)initialize;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
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
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingMuted;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingCurrentTime;
-(AVPlayer *)player;
-(void)setObservationInfo:(void*)arg1 ;
-(BOOL)hasProtectedContent;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(BOOL)isStreaming;
-(BOOL)isPlaying;
-(BOOL)allowsPictureInPicturePlayback;
-(AVValueTiming *)timing;
-(void)setVolume:(double)arg1 ;
-(BOOL)hasContent;
-(BOOL)isSeekingInternal;
-(void)setSeekingInternal:(BOOL)arg1 ;
-(SCD_Struct_AV3)seekToTimeInternal;
-(void)setSeekToTimeInternal:(SCD_Struct_AV3)arg1 ;
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
-(AVPlayerLayer *)playerLayerForReducingResources;
-(void)setPlayerLayerForReducingResources:(AVPlayerLayer *)arg1 ;
-(void)stopGeneratingTimecodes;
-(BOOL)handlesAudioSessionInterruptions;
-(void)seekToFrame:(long long)arg1 ;
-(void)seekToTimecode:(id)arg1 ;
-(float)nominalFrameRate;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(BOOL)allowsExternalPlayback;
-(void)setRateWithForce:(double)arg1 ;
-(NSDate *)currentDate;
-(AVTimecodeController *)timecodeController;
-(long long)frameNumberForCurrentTime;
-(id)init;
-(id)loadTimecodeControllerIfNeeded;
-(BOOL)canPlay;
-(void)reloadOptions;
-(id)loadedTimeRanges;
-(void)setHandlesAudioSessionInterruptions:(BOOL)arg1 ;
-(BOOL)hasTimecodes;
-(void)_ensureUserCaptionDisplayType:(long long)arg1 ;
-(void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(BOOL)arg1 ;
-(id)legibleOptions;
-(void)setLegibleMediaSelectionOptions:(id)arg1 audioMediaSelectionOptions:(id)arg2 assumeMediaOptionMayHaveChanged:(BOOL)arg3 ;
-(id)_optionsForGroup:(id)arg1 ;
-(void)reloadAudioOptions;
-(BOOL)hasReadableTimecodes;
-(double)timecodeObservationInterval;
-(BOOL)startGeneratingTimecodesUsingBlock:(/*^block*/id)arg1 ;
-(id)timecodeForCurrentTime;
-(id)maxTimecode;
-(void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(long long)arg1 ;
-(id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
-(id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
-(void)selectedMediaOptionMayHaveChanged;
-(void)reloadLegibleOptions;
-(void)togglePlayback:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(BOOL)hasSeekableLiveStreamingContent;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(id)_timecodeTrack;
-(id)maxFrameCountString;
-(BOOL)hasAudioMediaSelectionOptions;
-(BOOL)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(BOOL)isPlayingOnSecondScreen;
-(void)reloadOptionsAndCurrentSelections;
-(void)selectedMediaOptionMayHaveChanged:(BOOL)arg1 ;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(BOOL)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(BOOL)isPictureInPictureSupported;
-(void)updateMinMaxTiming;
-(BOOL)hasLiveStreamingContent;
-(void)setMinTiming:(AVValueTiming *)arg1 ;
-(void)setMaxTiming:(AVValueTiming *)arg1 ;
-(BOOL)isComposable;
-(void)beginScrubbing:(id)arg1 ;
-(BOOL)canSeek;
-(CGSize)maximumVideoResolution;
-(void)endScrubbing:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 ;
-(BOOL)supportsVolumeAnimation;
-(NSArray *)availableMetadataFormats;
-(void)setPlaying:(BOOL)arg1 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(BOOL)canScanForward;
-(BOOL)canSeekToBeginning;
-(BOOL)canSeekToEnd;
-(void)setRate:(double)arg1 ;
-(void)seekChapterBackward:(id)arg1 ;
-(void)seekChapterForward:(id)arg1 ;
-(BOOL)canSeekFrameBackward;
-(BOOL)canSeekFrameForward;
-(BOOL)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(void)toggleMuted:(id)arg1 ;
-(id)currentLegibleMediaSelectionOption;
-(BOOL)isPlayingOnExternalScreen;
-(BOOL)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(BOOL)arg1 ;
-(void)setCurrentAudioTrack:(AVAssetTrack *)arg1 ;
-(BOOL)canScanBackward;
-(BOOL)hasContentChapters;
-(BOOL)canTogglePlayback;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
-(BOOL)isLooping;
-(void)startKVO;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(id<AVPlayerControllerDelegate>)internalDelegate;
-(double)maxTime;
-(id)initWithPlayer:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSError *)error;
-(double)defaultPlaybackRate;
-(double)minTime;
-(void)play:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)beginScanningForward:(id)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(void)setMinTime:(double)arg1 ;
-(CGSize)contentDimensions;
-(double)contentDurationWithinEndTimes;
-(double)contentDuration;
-(void)setLooping:(BOOL)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(void*)observationInfo;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(double)currentTime;
-(CGSize)presentationSize;
-(SCD_Struct_AV3)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV3)arg1 ;
-(double)rate;
-(BOOL)isExternalPlaybackActive;
-(void)pause:(id)arg1 ;
-(id)seekableTimeRanges;
-(BOOL)isCompatibleWithAirPlayVideo;
-(void)setMuted:(BOOL)arg1 ;
-(id)audioOptions;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV3)arg1 ;
-(NSObject*<OS_dispatch_source>)seekTimer;
-(void)autoplay:(id)arg1 ;
-(BOOL)canPause;
-(id)_queuePlayer;
-(BOOL)isReadyToPlay;
-(void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(void)setDefaultPlaybackRate:(double)arg1 ;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(long long)timeControlStatus;
-(void)setInternalDelegate:(id<AVPlayerControllerDelegate>)arg1 ;
-(BOOL)isPictureInPictureActive;
-(SCD_Struct_AV3)reversePlaybackEndTime;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(double)volume;
-(BOOL)isAtMaxTime;
-(BOOL)isMuted;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(long long)externalPlaybackType;
-(NSDictionary *)metadata;
-(BOOL)isAtMinTime;
-(void)endScrubbing;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(id)preferredDisplayCriteria;
-(double)seekToTime;
-(void)beginScrubbing;
-(AVValueTiming *)maxTiming;
-(AVValueTiming *)minTiming;
-(void)setSeeking:(BOOL)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(AVObservationController *)observationController;
-(BOOL)isSeeking;
-(BOOL)isPictureInPicturePossible;
-(void)scanForward:(id)arg1 ;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(void)startInspectionIfNeeded;
-(BOOL)canPlayImmediately;
-(BOOL)isScrubbing;
-(BOOL)isCompletelySeekable;
-(void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)_retryPlayImmediatelyIfNeeded;
-(void)_handleSeekTimerEvent;
-(BOOL)touchBarRequiresLinearPlayback;
-(void)setTouchBarRequiresLinearPlayback:(BOOL)arg1 ;
-(void)updateAtMinMaxTime;
-(void)increaseVolume:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(long long)status;
-(void)dealloc;
-(BOOL)hasVideo;
-(void)setPictureInPictureSupported:(BOOL)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(BOOL)isInspectionSuspended;
-(void)setInspectionSuspended:(BOOL)arg1 ;
-(void)_setMinTiming:(id)arg1 maxTiming:(id)arg2 ;
-(NSDate *)currentOrEstimatedDate;
-(BOOL)hasTrimmableContent;
-(BOOL)hasShareableContent;
-(BOOL)_assetIsRestrictedFromSaving:(id)arg1 ;
-(id)audioWaveform;
-(void)actuallySeekToTime;
-(BOOL)_assetIsMarkedNotSerializable:(id)arg1 ;
-(BOOL)_assetContainsProResRaw:(id)arg1 ;
-(void)_updateCurrentAudioTrackIfNeeded;
-(void)seekToCMTime:(SCD_Struct_AV3)arg1 toleranceBefore:(SCD_Struct_AV3)arg2 toleranceAfter:(SCD_Struct_AV3)arg3 ;
-(void)throttledSeekToTime:(SCD_Struct_AV3)arg1 toleranceBefore:(SCD_Struct_AV3)arg2 toleranceAfter:(SCD_Struct_AV3)arg3 ;
-(void)_updateScanningForwardRate;
-(void)scanBackward:(id)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(void)_updateScanningBackwardRate;
-(void)seekFrameForward:(id)arg1 ;
-(void)seekFrameBackward:(id)arg1 ;
-(void)seekOrStepByFrameCount:(long long)arg1 ;
-(BOOL)canSeekChapterForward;
-(BOOL)canSeekChapterBackward;
-(void)updateTiming;
-(void)togglePictureInPicture:(id)arg1 ;
-(void)acquireResourceReductionAssertion;
-(void)setReduceResourceUsageAssertion:(BSSimpleAssertion *)arg1 ;
-(BSSimpleAssertion *)reduceResourceUsageAssertion;
-(BOOL)isReducingResourcesForPictureInPicture;
-(void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
-(void)_cancelPendingSeeksIfNeeded;
-(void)_updateRateForScrubbingAndSeeking;
-(void)setScrubbing:(BOOL)arg1 ;
-(id)scanningDelays;
-(void)_prepareAssetForInspectionIfNeeded;
-(void)setAtMaxTime:(BOOL)arg1 ;
-(void)setAtMinTime:(BOOL)arg1 ;
-(AVAsset *)currentAssetIfReady;
-(void)setCurrentAssetIfReady:(AVAsset *)arg1 ;
-(NSObject*<OS_dispatch_queue>)assetInspectionQueue;
-(void)setAssetInspectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AVAsset *)assetBeingPrepared;
-(void)setAssetBeingPrepared:(AVAsset *)arg1 ;
-(AVAssetTrack *)currentAudioTrack;
-(void)setSeekToTime:(double)arg1 ;
@end

