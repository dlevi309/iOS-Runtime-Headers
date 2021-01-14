/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>
#import <libobjc.A.dylib/AVVideoCompositing.h>

@protocol OS_dispatch_queue;
@class NSDictionary, AVVideoComposition, PVEffectScheduler, NSObject, PVTaskTokenPool, PVVideoCompositingContext, NSString;

@interface PVVideoCompositing : PVRendererBase <AVVideoCompositing> {

	AVVideoComposition* _videoComposition;
	NSDictionary* _sourceAttributes;
	NSDictionary* _destinationBufferPoolAttributes;
	SCD_Struct_PV22 _videoCompositionDuration;
	HGSynchronizable* _trackerLock;
	deque<int, std::__1::allocator<int> >* _dropFrameTracker;
	int _windowedDropTotal;
	BOOL _droppedResolution;
	PVEffectScheduler* _effectScheduler;
	SCD_Struct_PV22 _schedulingTime;
	HGSynchronizable* _playerRateLock;
	float _playerRate;
	HGSynchronizable* _throttleLock;
	unsigned _throttleRequestHandling;
	HGSynchronizable* _notificationStateLock;
	BOOL _hostAppIsShuttingDown;
	BOOL _didEnterBackground;
	HGRef<PVRenderManager>* _renderManager;
	NSObject*<OS_dispatch_queue> _refreshCompletionCallbackQueue;
	PVTaskTokenPool* _tokenPool;
	BOOL _thumbnailCompositing;
	BOOL _cancelsPendingRequests;
	unsigned _parentCode;
	unsigned _minimumRequestCompletionTimeMS;
	/*^block*/id _refreshCompletionBlock;

}

@property (retain) PVVideoCompositingContext * videoCompositingContext; 
@property (assign,nonatomic) BOOL thumbnailCompositing;                                                   //@synthesize thumbnailCompositing=_thumbnailCompositing - In the implementation block
@property (assign,nonatomic) BOOL cancelsPendingRequests;                                                 //@synthesize cancelsPendingRequests=_cancelsPendingRequests - In the implementation block
@property (nonatomic,copy) id refreshCompletionBlock;                                                     //@synthesize refreshCompletionBlock=_refreshCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned minimumRequestCompletionTimeMS;                                     //@synthesize minimumRequestCompletionTimeMS=_minimumRequestCompletionTimeMS - In the implementation block
@property (assign) unsigned parentCode;                                                                   //@synthesize parentCode=_parentCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
@property (nonatomic,readonly) BOOL supportsWideColorSourceFrames; 
@property (nonatomic,readonly) BOOL supportsHDRSourceFrames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)flushOnFinalRelease;
+(void)setFlushOnFinalRelease:(BOOL)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(id)init;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(void)renderContextChanged:(id)arg1 ;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)cancelAllPendingVideoCompositionRequests;
-(BOOL)supportsWideColorSourceFrames;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)dealloc;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(PVVideoCompositingContext *)videoCompositingContext;
-(void)signalScheduling:(SCD_Struct_PV22)arg1 playerRate:(float)arg2 ;
-(void)signalSchedulingResetSearch;
-(void)setCancelsPendingRequests:(BOOL)arg1 ;
-(id)refreshCompletionBlock;
-(void)setRefreshCompletionBlock:(id)arg1 ;
-(void)setPlayerRate:(float)arg1 ;
-(float)playerRate;
-(void)setThumbnailCompositing:(BOOL)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)updateDestinationFormatForOutputColorSpace;
-(BOOL)thumbnailCompositing;
-(BOOL)shouldDoLowPowerExport;
-(void)renderRequestFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned)minimumRequestCompletionTimeMS;
-(void)setMinimumRequestCompletionTimeMS:(unsigned)arg1 ;
-(void)setupTextureFactories;
-(void)setupEffectScheduler;
-(void)setSchedulingTime:(SCD_Struct_PV22)arg1 ;
-(SCD_Struct_PV22)schedulingTime;
-(void)videoCompositionChanged:(id)arg1 ;
-(void)setColorSpacesFromDestinationBuffer:(id)arg1 ;
-(void)_validateDestinationBufferColorSpace:(id)arg1 ;
-(BOOL)inPlayback;
-(void)callRefreshCompletionBlock:(BOOL)arg1 ;
-(void)setVideoCompositingContext:(PVVideoCompositingContext *)arg1 ;
-(BOOL)cancelsPendingRequests;
@end

