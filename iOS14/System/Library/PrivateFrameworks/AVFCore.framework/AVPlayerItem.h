/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemInternal, MPAVItem, MPQueuePlayer, NSDate, NSArray, NSString, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {

	AVPlayerItemInternal* _playerItem;

}

@property (nonatomic,retain) MPAVItem * MPAVItem; 
@property (assign,nonatomic,__weak) MPQueuePlayer * MP_associatedQueuePlayer; 
@property (getter=isAuthorizationRequiredForPlayback,nonatomic,readonly) BOOL authorizationRequiredForPlayback; 
@property (getter=isApplicationAuthorizedForPlayback,nonatomic,readonly) BOOL applicationAuthorizedForPlayback; 
@property (getter=isContentAuthorizedForPlayback,nonatomic,readonly) BOOL contentAuthorizedForPlayback; 
@property (assign,setter=_setExternalProtectionRequiredForPlayback:,getter=_isExternalProtectionRequiredForPlayback,nonatomic) BOOL _externalProtectionRequiredForPlayback; 
@property (getter=_isRental,nonatomic,readonly) BOOL _rental; 
@property (nonatomic,readonly) NSDate * _rentalStartDate; 
@property (nonatomic,readonly) NSDate * _rentalExpirationDate; 
@property (getter=_isRentalPlaybackStarted,nonatomic,readonly) BOOL _rentalPlaybackStarted; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackStartedDate; 
@property (nonatomic,readonly) NSDate * _rentalPlaybackExpirationDate; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * mediaDataCollectors; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (retain) id<NSObject><NSCopying> AVKitData; 
@property (assign) BOOL playHapticTracks; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
+(void)initialize;
+(id)playerItemWithAsset:(id)arg1 ;
+(id)playerItemWithURL:(id)arg1 ;
+(BOOL)_hasOverrideForSelector:(SEL)arg1 ;
+(int)_createFigPlaybackItemForFigPlayer:(OpaqueFigPlayerRef)arg1 asset:(id)arg2 URL:(id)arg3 flags:(unsigned)arg4 options:(CFDictionaryRef)arg5 playbackItem:(OpaqueFigPlaybackItem*)arg6 ;
+(BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+(BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+(OpaqueCMTimebaseRef)_copyTimebaseFromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfAsset;
+(BOOL)automaticallyNotifiesObserversOfStatus;
+(id)playerItemWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfVariantIndex;
+(BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+(BOOL)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+(BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+(BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+(BOOL)automaticallyNotifiesObserversOfNetworkUsuallyExceedsMaxBitRate;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+(BOOL)automaticallyNotifiesObserversOfTracks;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+(BOOL)automaticallyNotifiesObserversOfAllowProgressiveResume;
+(BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+(BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+(BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+(BOOL)automaticallyNotifiesObserversOfPresentationSize;
+(id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2 ;
+(void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1 ;
-(id)MP_shortDescription;
-(MPQueuePlayer *)MP_associatedQueuePlayer;
-(void)setMP_associatedQueuePlayer:(MPQueuePlayer *)arg1 ;
-(MPAVItem *)MPAVItem;
-(void)setMPAVItem:(MPAVItem *)arg1 ;
-(id)createLanguageOptions;
-(id)_URL;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(SCD_Struct_AV6)arg4 withLegibleOutputsDictionaryKey:(id)arg5 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)currentDate;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)delegate;
-(id)_loadedTimeRanges;
-(id)tracks;
-(id)asset;
-(void)setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 ;
-(id)mediaKind;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)loudnessInfo;
-(void)seekToTime:(SCD_Struct_AV6)arg1 toleranceBefore:(SCD_Struct_AV6)arg2 toleranceAfter:(SCD_Struct_AV6)arg3 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)_tracks;
-(NSError *)error;
-(id)audioMix;
-(id)accessLog;
-(void)_setURL:(id)arg1 ;
-(id)timedMetadata;
-(void)setDelegate:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(long long)_fileSize;
-(void)removeOutput:(id)arg1 ;
-(id)_nextItem;
-(id)selectedMediaOptionInMediaSelectionGroup:(id)arg1 ;
-(void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)arg1 ;
-(SCD_Struct_AV6)currentTime;
-(void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(id)description;
-(OpaqueCMTimebaseRef)timebase;
-(void)setVolumeAdjustment:(float)arg1 ;
-(void)setGaplessInfo:(id)arg1 ;
-(CGSize)presentationSize;
-(SCD_Struct_AV6)forwardPlaybackEndTime;
-(void)setForwardPlaybackEndTime:(SCD_Struct_AV6)arg1 ;
-(void)setSoundCheckVolumeNormalization:(float)arg1 ;
-(id)_seekableTimeRanges;
-(id)_weakReference;
-(void)_removeFPListeners;
-(id)initWithAsset:(id)arg1 ;
-(float)soundCheckVolumeNormalization;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;
-(unsigned long long)restrictions;
-(void)setRestrictions:(unsigned long long)arg1 ;
-(void)_setRampInOutInfo:(id)arg1 ;
-(void)_setAudibleDRMInfo:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_AV6)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)seekableTimeRanges;
-(void)seekToTime:(SCD_Struct_AV6)arg1 toleranceBefore:(SCD_Struct_AV6)arg2 toleranceAfter:(SCD_Struct_AV6)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_hasEnqueuedVideoFrame;
-(id)errorLog;
-(id)audioTimePitchAlgorithm;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)setReversePlaybackEndTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)_canPlayFastForward;
-(BOOL)_canPlayFastReverse;
-(id)_nameForLogging;
-(BOOL)canPlayFastReverse;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(void)_attachToPlayer:(id)arg1 ;
-(id)customVideoCompositor;
-(opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(BOOL)seekToDate:(id)arg1 ;
-(BOOL)canPlayFastForward;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(id<NSObject><NSCopying>)AVKitData;
-(void)_playerChangeStatusToFailedWithError:(id)arg1 ;
-(id)_preferredPixelBufferAttributes;
-(BOOL)_isRental;
-(BOOL)_suppressesVideoLayers;
-(BOOL)_getCachedPresentationSize:(CGSize*)arg1 ;
-(void)_addFPListeners;
-(BOOL)_isReadyForInspectionOfPresentationSize;
-(OpaqueCMTimebaseRef)_copyProxyTimebase;
-(void)setLoudnessInfo:(id)arg1 ;
-(BOOL)_getCachedNonForcedSubtitleEnabled:(BOOL*)arg1 ;
-(void)_makeReadyForEnqueueingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setAsset:(id)arg1 ;
-(void)_insertAfterItem:(id)arg1 ;
-(BOOL)_addToPlayQueueOfFigPlayerOfPlayer:(id)arg1 afterFigPlaybackItemOfItem:(id)arg2 ;
-(void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
-(void)_removeFromItems;
-(SCD_Struct_AV6)currentUnfoldedTime;
-(BOOL)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)gaplessInfo;
-(id)_fpNotificationNames;
-(id)initialDate;
-(BOOL)_hasEnabledVideo;
-(void)setMediaKind:(id)arg1 ;
-(void)setAudioMix:(id)arg1 ;
-(SCD_Struct_AV7)loopTimeRange;
-(void)stepByCount:(long long)arg1 ;
-(OpaqueFigPlaybackItemRef)_copyFigPlaybackItem;
-(void)_setTimedMetadata:(id)arg1 ;
-(void)cancelPendingSeeks;
-(id)automaticallyLoadedAssetKeys;
-(id)textStyleRules;
-(SCD_Struct_AV6)reversePlaybackEndTime;
-(void)setAVKitData:(id<NSObject><NSCopying>)arg1 ;
-(SCD_Struct_AV6)advanceTimeForOverlappedPlayback;
-(BOOL)advanceTimeForOverlappedPlaybackWasSet;
-(SCD_Struct_AV6)configuredTimeOffsetFromLive;
-(SCD_Struct_AV6)recommendedTimeOffsetFromLive;
-(BOOL)seekingWaitsForVideoCompositionRendering;
-(id)textHighlightArray;
-(BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
-(SCD_Struct_AV6)maximumForwardBufferDuration;
-(SCD_Struct_AV6)maximumTrailingBufferDuration;
-(double)preferredPeakBitRate;
-(unsigned)RTCReportingFlags;
-(BOOL)startsOnFirstEligibleVariant;
-(float)volumeAdjustment;
-(BOOL)reversesMoreVideoFramesInMemory;
-(BOOL)reversesMoreVideoFramesInMemoryWasSet;
-(BOOL)aggressivelyCachesVideoFrames;
-(BOOL)aggressivelyCachesVideoFramesWasSet;
-(BOOL)suppressesAudioOnlyVariants;
-(BOOL)decodesAllFramesDuringOrdinaryPlayback;
-(BOOL)decodesAllFramesDuringOrdinaryPlaybackWasSet;
-(BOOL)canStepForward;
-(BOOL)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
-(BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
-(SCD_Struct_AV6)minimumIntervalForIFrameOnlyPlayback;
-(BOOL)minimumIntervalForIFrameOnlyPlaybackWasSet;
-(BOOL)requiresAccessLog;
-(float)speedThresholdForIFrameOnlyPlayback;
-(BOOL)speedThresholdForIFrameOnlyPlaybackWasSet;
-(id)initialEstimatedDate;
-(id)imageQueueInterpolationCurve;
-(BOOL)imageQueueInterpolationCurveWasSet;
-(BOOL)blendsVideoFrames;
-(id)videoApertureMode;
-(BOOL)blendsVideoFramesWasSet;
-(BOOL)appliesPerFrameHDRDisplayMetadata;
-(BOOL)appliesPerFrameHDRDisplayMetadataWasSet;
-(SCD_Struct_AV6)_duration;
-(BOOL)usesMinimalLatencyForVideoCompositionRendering;
-(BOOL)playHapticTracks;
-(BOOL)savesDownloadedDataToDiskWhenDone;
-(BOOL)allowProgressiveSwitchUp;
-(BOOL)networkUsuallyExceedsMaxBitRate;
-(BOOL)allowProgressiveStartup;
-(BOOL)allowProgressiveResume;
-(BOOL)canPlaySlowReverse;
-(CGSize)IFramePrefetchTargetDimensions;
-(CGSize)preferredMaximumResolution;
-(CGSize)preferredMinimumResolution;
-(BOOL)canPlayReverse;
-(BOOL)canPlaySlowForward;
-(BOOL)canStepBackward;
-(BOOL)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
-(BOOL)hasEnabledVideo;
-(BOOL)hasEnabledAudio;
-(id)currentMediaSelection;
-(double)seekableTimeRangesLastModifiedTime;
-(BOOL)audioSpatializationAllowedWasSet;
-(unsigned long long)allowedAudioSpatializationFormats;
-(id)videoEnhancementMode;
-(BOOL)allowedAudioSpatializationFormatsWasSet;
-(id)initWithAsset:(id)arg1 automaticallyLoadedAssetKeys:(id)arg2 ;
-(void)_removeFAListeners;
-(void)_removeFoldedTBListeners;
-(void)setTextStyleRules:(id)arg1 ;
-(void)setTextHighlightArray:(id)arg1 ;
-(void)setRequiresAccessLog:(BOOL)arg1 ;
-(void)setSuppressesAudioOnlyVariants:(BOOL)arg1 ;
-(void)setAdvanceTimeForOverlappedPlayback:(SCD_Struct_AV6)arg1 ;
-(void)setBlendsVideoFrames:(BOOL)arg1 ;
-(BOOL)automaticallyPreservesTimeOffsetFromLive;
-(void)setAutomaticallyPreservesTimeOffsetFromLive:(BOOL)arg1 ;
-(id)_cachedTracks;
-(void)setConfiguredTimeOffsetFromLive:(SCD_Struct_AV6)arg1 ;
-(void)setImageQueueInterpolationCurve:(id)arg1 ;
-(void)setAggressivelyCachesVideoFrames:(BOOL)arg1 ;
-(void)setAppliesPerFrameHDRDisplayMetadata:(BOOL)arg1 ;
-(void)setReversesMoreVideoFramesInMemory:(BOOL)arg1 ;
-(void)setPlayHapticTracks:(BOOL)arg1 ;
-(void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)arg1 ;
-(BOOL)continuesPlayingDuringPrerollForRateChange;
-(int)_CreateSeekID;
-(void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1 ;
-(BOOL)continuesPlayingDuringPrerollForSeek;
-(void)_updateTimebase;
-(void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1 ;
-(void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)setMinimumIntervalForIFrameOnlyPlayback:(SCD_Struct_AV6)arg1 ;
-(void)setSpeedThresholdForIFrameOnlyPlayback:(float)arg1 ;
-(void)_attachToFigPlayer;
-(BOOL)isAudioSpatializationAllowed;
-(void)setAudioSpatializationAllowed:(BOOL)arg1 ;
-(void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1 ;
-(BOOL)isNonForcedSubtitleDisplayEnabled;
-(void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1 ;
-(void)setVideoEnhancementMode:(id)arg1 ;
-(void)setStartsOnFirstEligibleVariant:(BOOL)arg1 ;
-(BOOL)_isExternalProtectionRequiredForPlayback;
-(void)setSavesDownloadedDataToDiskWhenDone:(BOOL)arg1 ;
-(void)_updateLoopTimeRangeOnFigPlaybackItem;
-(void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
-(BOOL)limitReadAhead;
-(void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
-(void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
-(void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;
-(void)_updateBlendsVideoFramesOnFigPlaybackItem;
-(NSArray *)outputs;
-(void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;
-(void)_updateAllowedAudioSpatializationFormats;
-(void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
-(void)_configureVideoCompositionColorProperties;
-(SCD_Struct_AV6)duration;
-(void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
-(void)_setVideoCompositionInstructions:(id)arg1 ;
-(void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;
-(void)_updateAudioSpatializationAllowed;
-(void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
-(void)_updatePreservesTimeOffsetFromLive:(BOOL)arg1 ;
-(void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
-(void)_setVideoCompositionRenderSize:(CGSize)arg1 ;
-(void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
-(void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_setVideoCompositionFrameDuration:(SCD_Struct_AV6)arg1 ;
-(void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
-(void)_setVideoCompositionRenderScale:(float)arg1 ;
-(void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
-(void)_setVideoCompositor:(void*)arg1 ;
-(void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem:(SCD_Struct_AV6)arg1 ;
-(void)_applyCurrentAudioMix;
-(void)_quietlySetEQPreset:(int)arg1 ;
-(void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)_updatePlaybackPropertiesOnFigPlaybackItem;
-(void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_quietlySetVariantIndex:(long long)arg1 ;
-(void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
-(void)_updateVolumeAdjustmentOnFigPlaybackItem;
-(void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
-(void)_updateLoudnessInfoOnFigPlaybackItem;
-(BOOL)_canStepForward;
-(void)_updateAudioTapProcessorOnFigPlaybackItem;
-(void)_applyMediaSelectionOptions;
-(void)_quietlySetServiceIdentifier:(id)arg1 ;
-(void)_updateTextStyleRulesOnFigPlaybackItem;
-(void)_updateTextHighlightArrayOnFigPlaybackItem;
-(CGSize)_presentationSize;
-(void)_updateMediaKindOnFigPlaybackItem;
-(void)_updateRestrictionsOnFigPlaybackItem;
-(id)_metadataCollectors;
-(void)_setSyncLayersOnFigPlaybackItem:(id)arg1 ;
-(void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
-(void)_updatePreferredPeakBitRateOnFigPlaybackItem;
-(void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
-(void)_updatePreferredMinimumResolutionOnFigPlaybackItem;
-(void)_updateVideoEnhancementModeOnFigPlaybackItem;
-(void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
-(void)_updateVideoApertureModeOnFigPlaybackItem;
-(void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
-(void)_updateRTCReportingFlagsOnFigPlaybackItem;
-(void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;
-(BOOL)_configurePlaybackItemAndReturnError:(id*)arg1 ;
-(BOOL)willNeverSeekBackwardsHint;
-(void)_updateLimitReadAheadOnFigPlaybackItem;
-(long long)playbackLikelyToKeepUpTrigger;
-(BOOL)alwaysMonitorsPlayability;
-(void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
-(void)_respondToBecomingReadyForBasicInspection;
-(void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
-(void)_addFAListeners;
-(void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
-(BOOL)_isReadyForInspectionOfDuration;
-(void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
-(void)_evaluateMetadataOutputs;
-(void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
-(void)_evaluateVideoOutputs;
-(void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;
-(void)_evaluateLegibleOutputs;
-(void)_markAsReadyForInspectionOfDuration;
-(void)_markAsReadyForInspectionOfTracks;
-(id)_figSelectedMediaArray;
-(void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;
-(BOOL)_isReadyForInspectionOfTracks;
-(long long)variantIndex;
-(void)_informObserversAboutAvailabilityOfCurrentMediaSelection;
-(id)_tracksFromAssetTrackIDs;
-(id)_currentMediaSelectionFromFigSelectedMediaArray:(id)arg1 ;
-(void)_setCurrentMediaSelection:(id)arg1 ;
-(BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;
-(id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)arg1 ;
-(id)_tracksWithFPTrackIDArray:(id)arg1 fromFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 ;
-(OpaqueCMTimebaseRef)_copyFoldedTimebase;
-(void)_respondToBecomingReadyForBasicInspectionWithDuration:(SCD_Struct_AV6)arg1 ;
-(void)_informObserversAboutAvailabilityOfDuration:(SCD_Struct_AV6)arg1 ;
-(void)_markAsReadyForBasicInspection;
-(void)_markAsReadyForInspectionOfPresentationSize;
-(OpaqueCMTimebaseRef)_copyProxyFoldedTimebase;
-(void)_kickAssetObserversIfAppropriate;
-(void)_informObserversAboutAvailabilityOfTracks:(id)arg1 ;
-(void)_addFoldedTBListeners;
-(void)_informObserversAboutAvailabilityOfPresentationSize;
-(BOOL)_isReadyForBasicInspection;
-(id)_playbackProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_invokeReadyForEnqueueingHandlers;
-(BOOL)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;
-(SCD_Struct_AV6)_currentTimeWithOptionalFoldedTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(/*^block*/id)arg1 ;
-(OpaqueCMTimebaseRef)_copyProxyUnfoldedTimebase;
-(void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)arg1 finished:(BOOL)arg2 ;
-(void)setMaximumForwardBufferDuration:(SCD_Struct_AV6)arg1 ;
-(void)_setAudioCurvesAccordingToInputParameters:(id)arg1 forTrackID:(int)arg2 ;
-(BOOL)_canStepBackward;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrackID:(int)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrackID:(int)arg2 ;
-(id)_copyStateDispatchQueue;
-(void)_setAudioEffectParameters:(id)arg1 forTrackID:(int)arg2 ;
-(id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)arg1 ;
-(id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)arg1 ;
-(id)_mediaOptionsSelectedByClient;
-(void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_setMediaOptionsSelectedByClient:(id)arg1 forKey:(id)arg2 ;
-(id)_mediaOptionsSelectedByClientForKey:(id)arg1 ;
-(id)_trackWithTrackID:(int)arg1 ;
-(id)_propertyListForMediaSelection:(id)arg1 forGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 usingFigSelectedMediaArrayObtainedFromGroup:(id)arg2 ;
-(void)_clearCachedMediaSelectionGroup:(id)arg1 ;
-(void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2 ;
-(void)_selectMediaOption:(id)arg1 inGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3 ;
-(void)_allowSelectMediaOptionsAutomaticallyUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(id)_videoOutputs;
-(id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)arg1 ;
-(BOOL)_canPlayReverse;
-(BOOL)_hasSelectionInCachedMediaSelectionGroup:(id)arg1 ;
-(BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptions;
-(BOOL)_suppressionForOutputs:(id)arg1 ;
-(void)_setSuppressesVideoLayers:(BOOL)arg1 ;
-(id)_legibleOutputsForKeys;
-(void)setPreferredPeakBitRate:(double)arg1 ;
-(void)setPreferredMaximumResolution:(CGSize)arg1 ;
-(void)_markAsNeedingNewAssetWithFigPlaybackItem;
-(void)_updateVideoSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(void)_updateLegibleSuppressionOnFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 basedOnOutputs:(id)arg2 ;
-(id)_previousItem;
-(id)_enabledTrackFormatDescriptions;
-(id)_playerConnection;
-(BOOL)_isAFileBasedItemThatsReadyToPlay;
-(SCD_Struct_AV6)_configuredTimeOffsetFromLive;
-(void)setInitialDate:(id)arg1 ;
-(id)currentEstimatedDate;
-(void)setInitialEstimatedDate:(id)arg1 ;
-(OpaqueCMTimebaseRef)unfoldedTimebase;
-(void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
-(void)seekToTime:(SCD_Struct_AV6)arg1 ;
-(void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
-(OpaqueCMTimebaseRef)_copyUnfoldedFigTimebase;
-(void)setRTCReportingFlags:(unsigned)arg1 ;
-(void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;
-(SCD_Struct_AV6)_recommendedTimeOffsetFromLive;
-(void)setLimitReadAhead:(BOOL)arg1 ;
-(BOOL)allowsExtendedReadAhead;
-(void)setAllowsExtendedReadAhead:(BOOL)arg1 ;
-(id)playabilityMetrics;
-(double)preferredForwardBufferDuration;
-(void)setPreferredForwardBufferDuration:(double)arg1 ;
-(void)setMaximumTrailingBufferDuration:(SCD_Struct_AV6)arg1 ;
-(void)setAlwaysMonitorsPlayability:(BOOL)arg1 ;
-(void)setPlaybackLikelyToKeepUpTrigger:(long long)arg1 ;
-(void)setWillNeverSeekBackwardsHint:(BOOL)arg1 ;
-(void)_setVideoCompositionColorPrimaries:(id)arg1 ;
-(void)_setVideoCompositionColorYCbCrMatrix:(id)arg1 ;
-(BOOL)isPlaybackBufferEmpty;
-(void)_setVideoCompositionColorTransferFunction:(id)arg1 ;
-(void)setSeekingWaitsForVideoCompositionRendering:(BOOL)arg1 ;
-(void)setUsesMinimalLatencyForVideoCompositionRendering:(BOOL)arg1 ;
-(float)progressTowardsPlaybackLikelyToKeepUp;
-(void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)arg1 ;
-(void)setLoopTimeRange:(SCD_Struct_AV7)arg1 ;
-(id)configurationGroup;
-(double)liveUpdateInterval;
-(void)setVariantIndex:(long long)arg1 ;
-(void)_removeMediaOptionsSelectedByClient;
-(OpaqueFigCPEProtectorRef)_figCPEProtector;
-(BOOL)playerAppliesAutomaticMediaSelectionToGroup:(id)arg1 ;
-(void)_removeSyncLayer:(id)arg1 ;
-(void)_addSyncLayer:(id)arg1 ;
-(BOOL)_hasEnabledAudio;
-(void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(BOOL)arg1 ;
-(BOOL)_isNonForcedSubtitleDisplayEnabled;
-(id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)arg1 ;
-(void)setNetworkUsuallyExceedsMaxBitRate:(BOOL)arg1 ;
-(void)setMaximumBitRate:(float)arg1 ;
-(void)setAllowProgressiveSwitchUp:(BOOL)arg1 ;
-(void)setAllowProgressiveStartup:(BOOL)arg1 ;
-(void)setAllowProgressiveResume:(BOOL)arg1 ;
-(float)maximumBitRate;
-(void)setIFramePrefetchTargetDimensions:(CGSize)arg1 ;
-(CGSize)preferredPeakPresentationSize;
-(void)setPreferredPeakPresentationSize:(CGSize)arg1 ;
-(void)setPreferredMinimumResolution:(CGSize)arg1 ;
-(void)_renderingSuppressionDidChangeForOutput:(id)arg1 ;
-(void)setVideoApertureMode:(id)arg1 ;
-(void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)arg1 ;
-(NSDate *)_rentalExpirationDate;
-(BOOL)isAuthorizationRequiredForPlayback;
-(BOOL)isApplicationAuthorizedForPlayback;
-(BOOL)_isRentalPlaybackStarted;
-(BOOL)isContentAuthorizedForPlayback;
-(id)_isExternalProtectionRequiredForPlaybackInternal;
-(NSDate *)_rentalStartDate;
-(void)_setExternalProtectionRequiredForPlayback:(BOOL)arg1 ;
-(NSDate *)_rentalPlaybackStartedDate;
-(NSDate *)_rentalPlaybackExpirationDate;
-(long long)_availableFileSize;
-(id)_player;
-(id)_metadataOutputsForKeys;
-(void)_addVideoOutput:(id)arg1 ;
-(void)_addLegibleOutput:(id)arg1 ;
-(void)_addMetadataOutput:(id)arg1 ;
-(void)_removeVideoOutput:(id)arg1 ;
-(void)_removeLegibleOutput:(id)arg1 ;
-(void)_removeMetadataOutput:(id)arg1 ;
-(void)_addMetadataCollector:(id)arg1 ;
-(long long)status;
-(void)_removeMetadataCollector:(id)arg1 ;
-(NSArray *)mediaDataCollectors;
-(void)addMediaDataCollector:(id)arg1 ;
-(void)dealloc;
-(void)removeMediaDataCollector:(id)arg1 ;
-(void)_updateTaggedMetadataArray:(id)arg1 ;
-(BOOL)hasVideo;
-(id)_legibleOutputForKey:(id)arg1 ;
-(id)_metadataOutputForKey:(id)arg1 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didOutputSampleBuffers:(id)arg2 fromTrackWithID:(int)arg3 forMetadataOutputWithDictionaryKey:(id)arg4 ;
-(void)_figPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 didFlushMetadataOutputWithDictionaryKey:(id)arg2 ;
@end

