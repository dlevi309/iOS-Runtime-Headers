/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSinkNode.h>

@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_os_transaction, OS_dispatch_queue;
@class NSObject, NSMutableArray, CAContext;

@interface BWImageQueueSinkNode : BWSinkNode {

	unsigned _imageQueueCapacity;
	unsigned _imageQueueWidth;
	unsigned _imageQueueHeight;
	unsigned _imageQueueRequiredFreeSlots;
	CAImageQueueRef _imageQueue;
	unsigned _imageQueueSlot;
	unsigned long long _imageQueueCurrentFreeSlots;
	int _syncStrategy;
	BOOL _resetPreviewSynchronizerOnNextFrame;
	OpaqueBWPreviewSynchronizerRef _previewSynchronizer;
	double _lastDisplaySamplingTime;
	double _lastDisplayVSyncInterval;
	double _lastHarmonicFractionalVSyncInterval;
	double _lastFramePTS;
	double _lastDisplayTime;
	double _lateFrameIntervalStartPTS;
	double _previousFrameDuration;
	unsigned long long _framesSinceLastHarmonicCompensation;
	BOOL _CAVSyncIntervalWorkaroundEnabled;
	BOOL _highLatencyJitterHandlingEnabled;
	BOOL _fasterLatencyRecoveryEnabled;
	BOOL _driftCompensationTimestampFilteringEnabled;
	id<BWImageQueueSinkNodePreviewTapDelegate> _previewTapDelegate;
	unsigned long long _numFramesReceived;
	NSObject*<OS_os_transaction> _holdingBuffersForClientAssertion;
	NSMutableArray* _sharedSurfaces;
	unsigned long long* _sharedBufferIDs;
	unsigned long long _sharedSurfaceCount;
	BOOL _useGlobalIOSurfaces;
	OpaqueFigSimpleMutexRef _surfaceRegistrationMutex;
	NSMutableArray* _bufferIDsInQueue;
	EnqueuedBufferContext* _enqueuedBufferContexts;
	unsigned long long _enqueuedBufferContextCount;
	NSMutableArray* _previewPTSHistory;
	OpaqueFigSimpleMutexRef _previewPTSHistoryMutex;
	NSObject*<OS_dispatch_queue> _previewPTSHistoryQueue;
	SCD_Struct_BW8 _firstFramePTS;
	long long _firstFrameHostTime;
	BOOL _didCallFirstFrameAtHostTimeCallback;
	BOOL _didCallFirstFrameCallback;
	BOOL _fenceSupportEnabled;
	BOOL _fencePortGenerationIDWillChange;
	int _framesSinceLastFenceIDWillChange;
	int _framesSinceLastFence;
	long long _lastFencedGenerationID;
	int _savedSyncStrategy;
	CAContext* _imageQueueContext;

}

@property (nonatomic,readonly) CAImageQueueRef imageQueue; 
@property (nonatomic,readonly) unsigned imageQueueSlot; 
@property (assign,nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;              //@synthesize previewTapDelegate=_previewTapDelegate - In the implementation block
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)makeCurrentConfigurationLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(id)initWithHFRSupport:(BOOL)arg1 ispJitterCompensationEnabled:(BOOL)arg2 sinkID:(id)arg3 ;
-(void)setFenceSupportEnabled:(BOOL)arg1 ;
-(unsigned)imageQueueSlot;
-(void)_storePreviewPTS:(SCD_Struct_BW8)arg1 withHostTime:(unsigned long long)arg2 ;
-(BOOL)fenceSupportEnabled;
-(void)_processBufferContext:(EnqueuedBufferContext*)arg1 ;
-(void)_cleanupImageQueueContext;
-(double)_displayTimeSyncedWithFramePTS:(double)arg1 ;
-(void)_removeBufferFromInternalQueues:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 ;
-(void)setPreviewTapDelegate:(id<BWImageQueueSinkNodePreviewTapDelegate>)arg1 ;
-(EnqueuedBufferContext*)_createContextForBuffer:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 framePTS:(SCD_Struct_BW8)arg3 ;
-(void)_updateInputRequirements;
-(void)setSyncStrategy:(int)arg1 ;
-(void)_collectUnconsumedBuffersWithReason:(id)arg1 ;
-(void)_ensureImageQueue;
-(void)_processReleasedContexts;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(void)_cleanupIOSurfaces;
-(SCD_Struct_BW8)previewPTSAtHostTime:(unsigned long long)arg1 ;
-(id<BWImageQueueSinkNodePreviewTapDelegate>)previewTapDelegate;
-(CAImageQueueRef)imageQueue;
-(int)syncStrategy;
-(void)fencePortGenerationIDWillChange;
-(void)inputConnectionWillBeEnabled;
-(SCD_Struct_BW8)previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(BOOL)arg2 ;
-(unsigned long long)_bufferIDForSurface:(IOSurfaceRef)arg1 ;
-(void)dealloc;
@end

