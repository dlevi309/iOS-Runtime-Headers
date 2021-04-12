/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

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
	double _lastFramePTS;
	double _lastDisplayTime;
	double _lateFrameIntervalStartPTS;
	double _previousFrameDuration;
	unsigned long long _framesSinceLastHarmonicCompensation;
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
	SCD_Struct_BW2 _firstFramePTS;
	long long _firstFrameHostTime;
	BOOL _didCallFirstFrameAtHostTimeCallback;
	BOOL _didCallFirstFrameCallback;
	BOOL _packed10BitPixelFormatSupported;
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
-(void)dealloc;
-(unsigned)imageQueueSlot;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)registerSurfacesFromSourcePool:(id)arg1 ;
-(SCD_Struct_BW2)previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(BOOL)arg2 ;
-(void)inputConnectionWillBeEnabled;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)setPacked10BitPixelFormatSupported:(BOOL)arg1 ;
-(BOOL)packed10BitPixelFormatSupported;
-(id)_inputFormatRequirements;
-(void)_cleanupIOSurfaces;
-(void)_cleanupImageQueueContext;
-(void)_ensureImageQueue;
-(unsigned long long)_bufferIDForSurface:(IOSurfaceRef)arg1 ;
-(void)_collectUnconsumedBuffersWithReason:(id)arg1 ;
-(void)_processReleasedContexts;
-(double)_displayTimeSyncedWithFramePTS:(double)arg1 ;
-(EnqueuedBufferContext*)_createContextForBuffer:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 framePTS:(SCD_Struct_BW2)arg3 ;
-(void)_processBufferContext:(EnqueuedBufferContext*)arg1 ;
-(void)_storePreviewPTS:(SCD_Struct_BW2)arg1 withHostTime:(unsigned long long)arg2 ;
-(void)_removeBufferFromInternalQueues:(opaqueCMSampleBufferRef)arg1 bufferId:(unsigned long long)arg2 ;
-(id)initWithHFRSupport:(BOOL)arg1 ispJitterCompensationEnabled:(BOOL)arg2 sinkID:(id)arg3 ;
-(CAImageQueueRef)imageQueue;
-(void)setSyncStrategy:(int)arg1 ;
-(int)syncStrategy;
-(void)setFenceSupportEnabled:(BOOL)arg1 ;
-(BOOL)fenceSupportEnabled;
-(SCD_Struct_BW2)previewPTSAtHostTime:(unsigned long long)arg1 ;
-(void)fencePortGenerationIDWillChange;
-(id<BWImageQueueSinkNodePreviewTapDelegate>)previewTapDelegate;
-(void)setPreviewTapDelegate:(id<BWImageQueueSinkNodePreviewTapDelegate>)arg1 ;
@end

