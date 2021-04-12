/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue, AVBlockScheduler, AVLoggingIdentifier;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPixelBufferAttributeMediator, NSObject, AVAudioSessionMediaPlayerOnly, NSError, AVPlayerItem, NSMutableSet, NSArray, NSMutableDictionary, AVAudioSession, NSDictionary, AVOutputContext, NSMutableArray, NSString, NSHashTable;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> layerInteractionQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> currentItemPropertyUpdateQueue;
	NSObject*<OS_dispatch_queue> layersQ;
	OpaqueCMTimebaseRef proxyTimebase;
	BOOL logPerformanceData;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	void* IAPDCallbackToken;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	id layerVisibilityChangeToken;
	id<AVBlockScheduler> KVOChangeSerializer;
	long long status;
	NSError* error;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	NSMutableSet* items;
	NSArray* queueModifications;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVAudioSession* audioSession;
	NSDictionary* vibrationPattern;
	AVOutputContext* outputContext;
	BOOL IOwnTheFigPlayer;
	BOOL pausesAudioVisualPlaybackInBackground;
	NSMutableArray* handlersToCallWhenReadyToPlay;
	BOOL shouldReduceResourceUsage;
	long long resourceConservationLevelWhilePaused;
	NSString* playerRole;
	BOOL usesDedicatedNotificationQueueForMediaServices;
	CGSize dimensionsOfReservedVideoMemory;
	NSString* externalPlaybackVideoGravity;
	long long actionAtItemEnd;
	float volume;
	float userVolume;
	float minRateForAudioPlayback;
	float maxRateForAudioPlayback;
	BOOL autoSwitchStreamVariants;
	BOOL preparesItemsForPlaybackAsynchronously;
	BOOL allowsOutOfBandTextTrackRendering;
	BOOL muted;
	BOOL closedCaptionDisplayEnabled;
	BOOL appliesMediaSelectionCriteriaAutomatically;
	BOOL dynamicallyChoosesInitialVariant;
	BOOL limitsBandwidthForCellularAccess;
	BOOL usesAudioOnlyModeForExternalPlayback;
	BOOL allowsPixelBufferPoolSharing;
	BOOL disallowsAMRAudio;
	BOOL disallowsHardwareAcceleratedVideoDecoder;
	BOOL layerDestinationIsTVOut;
	BOOL preventsDisplaySleepDuringVideoPlayback;
	BOOL disallowsVideoLayerDisplayCompositing;
	BOOL allowsExternalPlayback;
	BOOL usesExternalPlaybackWhileExternalScreenIsActive;
	NSString* captionPipelineStrategy;
	NSString* audioOutputDeviceUniqueID;
	NSString* clientName;
	NSString* multichannelAudioStrategy;
	long long clientPriority;
	BOOL PIPModePossible;
	BOOL isDisplayingClosedCaptions;
	BOOL externalPlaybackActive;
	BOOL airPlayVideoActive;
	BOOL isConnectedToPhysicalSecondScreen;
	BOOL outputObscuredDueToInsufficientExternalProtection;
	long long externalProtectionStatus;
	NSString* ancillaryPerformanceInformationForDisplay;
	float rate;
	BOOL automaticallyWaitsToMinimizeStalling;
	BOOL usesLegacyAutomaticWaitingBehavior;
	long long timeControlStatus;
	NSString* reasonForWaitingToPlay;
	CGSize currentItemPresentationSize;
	BOOL currentItemNonForcedSubtitlesEnabled;
	unsigned long long preferredVideoDecoderGPURegistryID;
	BOOL disallowsAutoPauseOnRouteRemovalIfNoAudio;
	BOOL hostApplicationInForeground;
	BOOL preservesAudioSessionSampleRate;
	NSMutableArray* videoLayers;
	NSMutableArray* subtitleLayers;
	NSMutableArray* closedCaptionLayers;
	NSHashTable* avPlayerLayers;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	id currentItemSuppressesVideoLayersNotificationToken;
	id currentItemPreferredPixelBufferAttributesNotificationToken;
	OpaqueFigPlayerRef figPlayer;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	BOOL needsToCreateFigPlayer;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	NSArray* itemsInFigPlayQueue;
	NSArray* expectedAssetTypes;
	BOOL reevaluateBackgroundPlayback;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	BOOL suspensionExpected;
	OpaqueCMClockRef figMasterClock;
	NSString* captionRenderingStrategy;
	NSArray* displaysUsedForPlayback;
	id<AVLoggingIdentifier> loggingIdentifier;

}
@end

