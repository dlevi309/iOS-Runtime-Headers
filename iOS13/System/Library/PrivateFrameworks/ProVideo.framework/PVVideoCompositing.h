/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/AVVideoCompositing.h>

@protocol OS_dispatch_queue;
@class NSDictionary, AVVideoComposition, NSLock, PVEffectScheduler, NSObject, PVTaskTokenPool, PVVideoCompositingContext, NSString;

@interface PVVideoCompositing : NSObject <AVVideoCompositing> {

	AVVideoComposition* _videoComposition;
	NSDictionary* _sourceAttributes;
	NSDictionary* _pixelBufferPoolAttributes;
	SCD_Struct_PV20 _videoCompositionDuration;
	vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > >* _inFlightRenderJobs;
	NSLock* _inFlightRenderJobsLock;
	unsigned _frameCount;
	HGSynchronizable* _trackerLock;
	deque<int, std::__1::allocator<int> >* _dropFrameTracker;
	int _windowedDropTotal;
	BOOL _droppedResolution;
	double _frameDuration;
	PVEffectScheduler* _effectScheduler;
	HGSynchronizable* _inPlaybackLock;
	BOOL _inPlayback;
	HGSynchronizable* _throttleLock;
	unsigned _throttleRequestHandling;
	HGSynchronizable* _notificationStateLock;
	BOOL _hostAppIsShuttingDown;
	BOOL _didEnterBackground;
	HGSynchronizable* _perfStatsLock;
	PVPerfStats* _perfStats;
	BOOL _trackStats;
	HGRef<PVRenderManager>* _renderManager;
	NSObject*<OS_dispatch_queue> _refreshCompletionCallbackQueue;
	PVTaskTokenPool* _tokenPool;
	BOOL _thumbnailCompositing;
	BOOL _cancelsPendingRequests;
	unsigned _minimumRequestCompletionTimeMS;
	PVVideoCompositingContext* videoCompositingContext;
	/*^block*/id _refreshCompletionBlock;

}

@property (retain) PVVideoCompositingContext * videoCompositingContext; 
@property (assign,nonatomic) BOOL thumbnailCompositing;                                                   //@synthesize thumbnailCompositing=_thumbnailCompositing - In the implementation block
@property (assign,nonatomic) BOOL cancelsPendingRequests;                                                 //@synthesize cancelsPendingRequests=_cancelsPendingRequests - In the implementation block
@property (nonatomic,copy) id refreshCompletionBlock;                                                     //@synthesize refreshCompletionBlock=_refreshCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned minimumRequestCompletionTimeMS;                                     //@synthesize minimumRequestCompletionTimeMS=_minimumRequestCompletionTimeMS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
+(BOOL)flushOnFinalRelease;
+(void)setFlushOnFinalRelease:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)setFrameDuration:(double)arg1 ;
-(void)renderContextChanged:(id)arg1 ;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;
-(double)numFrames;
-(void)signalScheduling:(SCD_Struct_PV20)arg1 playerRate:(float)arg2 ;
-(void)signalSchedulingResetSearch;
-(void)setCancelsPendingRequests:(BOOL)arg1 ;
-(id)refreshCompletionBlock;
-(void)setRefreshCompletionBlock:(id)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(void)setMinimumRequestCompletionTimeMS:(unsigned)arg1 ;
-(PVVideoCompositingContext *)videoCompositingContext;
-(void)printAndClearStats;
-(void)setThumbnailCompositing:(BOOL)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)addRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)addFrameStats:(FrameStats*)arg1 ;
-(BOOL)thumbnailCompositing;
-(BOOL)shouldDoLowPowerExport;
-(void)renderRequestFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned)minimumRequestCompletionTimeMS;
-(void)setupTextureFactories;
-(void)setupEffectScheduler;
-(void)setVideoCompositingContext:(PVVideoCompositingContext *)arg1 ;
-(void)setInPlayback:(BOOL)arg1 ;
-(void)videoCompositionChanged:(id)arg1 ;
-(void)setColorSpacesFromDestinationBuffer:(id)arg1 ;
-(BOOL)inPlayback;
-(void)checkAndReportDropFrames:(FrameStats*)arg1 job:(HGRef<PVRenderJob>*)arg2 ;
-(void)removeRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)callRefreshCompletionBlock:(BOOL)arg1 ;
-(double)getTimeSinceLast:(FrameStats*)arg1 ;
-(id)getPreviousInstruction:(HGRef<PVRenderJob>*)arg1 ;
-(double)windowedFPS;
-(double)averageStat:(int)arg1 ;
-(double)getLastStat:(int)arg1 ;
-(unsigned long long)taskResidentSize;
-(BOOL)cancelsPendingRequests;
@end

