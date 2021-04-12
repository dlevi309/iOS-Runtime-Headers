/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue, OS_dispatch_group, NUDevice;
#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSObject, NUObservatory, NURenderJobStatistics, NSError, NSString, NURenderRequest, NSArray, NURenderNode, NUImageGeometry, NUComposition, NURenderPipeline, NUGeometrySpaceMap, CIImage, AVComposition, AVVideoComposition, AVAudioMix, NUPriority;

@interface NURenderJob : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NUObservatory* _observatory;
	NURenderJobStatistics* _stats;
	NSError* _error;
	BOOL _isAborted;
	BOOL _failed;
	BOOL _replySynchronous;
	BOOL _didRespond;
	NSString* _memoizationCacheKey;
	BOOL _isExecuting;
	BOOL _isCanceled;
	BOOL _isFinished;
	int _rendererType;
	long long _currentStage;
	NURenderRequest* _request;
	unsigned long long _number;
	NSArray* _dependentJobs;
	NURenderNode* _prepareNode;
	NURenderNode* _renderNode;
	NUImageGeometry* _outputGeometry;
	NSObject*<OS_dispatch_group> _replyGroup;
	id<NUDevice> _device;
	NUComposition* _composition;
	NURenderPipeline* _renderPipeline;
	NUGeometrySpaceMap* _resolvedSpaceMap;
	NUImageGeometry* _fullSizeGeometry;
	CIImage* _outputImage;
	AVComposition* _outputVideo;
	AVVideoComposition* _outputVideoComposition;
	AVAudioMix* _outputAudioMix;
	SCD_Struct_NU7 _renderScale;

}

@property (nonatomic,copy,readonly) NSString * additionalDebugInfo; 
@property (nonatomic,readonly) id<NUDevice> device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) int rendererType;                                       //@synthesize rendererType=_rendererType - In the implementation block
@property (nonatomic,retain) NUComposition * composition;                              //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NURenderPipeline * renderPipeline;                        //@synthesize renderPipeline=_renderPipeline - In the implementation block
@property (nonatomic,retain) NURenderNode * prepareNode;                               //@synthesize prepareNode=_prepareNode - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 renderScale;                               //@synthesize renderScale=_renderScale - In the implementation block
@property (nonatomic,retain) NURenderNode * renderNode;                                //@synthesize renderNode=_renderNode - In the implementation block
@property (nonatomic,retain) NUGeometrySpaceMap * resolvedSpaceMap;                    //@synthesize resolvedSpaceMap=_resolvedSpaceMap - In the implementation block
@property (nonatomic,retain) NUImageGeometry * outputGeometry;                         //@synthesize outputGeometry=_outputGeometry - In the implementation block
@property (nonatomic,retain) NUImageGeometry * fullSizeGeometry;                       //@synthesize fullSizeGeometry=_fullSizeGeometry - In the implementation block
@property (nonatomic,retain) CIImage * outputImage;                                    //@synthesize outputImage=_outputImage - In the implementation block
@property (nonatomic,retain) AVComposition * outputVideo;                              //@synthesize outputVideo=_outputVideo - In the implementation block
@property (nonatomic,retain) AVVideoComposition * outputVideoComposition;              //@synthesize outputVideoComposition=_outputVideoComposition - In the implementation block
@property (nonatomic,retain) AVAudioMix * outputAudioMix;                              //@synthesize outputAudioMix=_outputAudioMix - In the implementation block
@property (nonatomic,readonly) id<NURenderStatistics> statistics;                      //@synthesize stats=_stats - In the implementation block
@property (retain) NSArray * dependentJobs;                                            //@synthesize dependentJobs=_dependentJobs - In the implementation block
@property (nonatomic,readonly) BOOL wantsOutputGeometry; 
@property (nonatomic,readonly) BOOL wantsOutputImage; 
@property (nonatomic,readonly) BOOL wantsOutputVideoFrame; 
@property (nonatomic,readonly) BOOL wantsOutputVideo; 
@property (nonatomic,readonly) BOOL wantsRenderStage; 
@property (nonatomic,readonly) BOOL wantsCompleteStage; 
@property (nonatomic,readonly) BOOL wantsPrepareNodeCached; 
@property (nonatomic,readonly) BOOL wantsRenderNodeCached; 
@property (nonatomic,readonly) BOOL wantsRenderScaleClampedToNativeScale; 
@property (readonly) NURenderRequest * request;                                        //@synthesize request=_request - In the implementation block
@property (readonly) NUPriority * priority; 
@property (readonly) unsigned long long number;                                        //@synthesize number=_number - In the implementation block
@property (readonly) long long currentStage;                                           //@synthesize currentStage=_currentStage - In the implementation block
@property (readonly) BOOL isExecuting;                                                 //@synthesize isExecuting=_isExecuting - In the implementation block
@property (readonly) BOOL isCanceled;                                                  //@synthesize isCanceled=_isCanceled - In the implementation block
@property (readonly) BOOL isAborted;                                                   //@synthesize isAborted=_isAborted - In the implementation block
@property (readonly) BOOL isFinished;                                                  //@synthesize isFinished=_isFinished - In the implementation block
@property (readonly) BOOL succeeded; 
@property (readonly) SCD_Struct_NU7 imageSize; 
@property (readonly) id<NUScalePolicy> scalePolicy; 
@property (readonly) id<NUExtentPolicy> extentPolicy; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> replyGroup;                  //@synthesize replyGroup=_replyGroup - In the implementation block
@property (readonly) NSError * error; 
@property (readonly) BOOL failed; 
+(void)initialize;
+(void)flushCache;
-(id)init;
-(id)description;
-(void)_resume;
-(NSError *)error;
-(void)cancel;
-(void)pause;
-(void)resume;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)result;
-(NUPriority *)priority;
-(void)finish;
-(id)cacheKey;
-(id<NUDevice>)device;
-(CIImage *)outputImage;
-(BOOL)render:(out id*)arg1 ;
-(NURenderRequest *)request;
-(id<NURenderStatistics>)statistics;
-(unsigned long long)number;
-(BOOL)failed;
-(BOOL)isAborted;
-(void)_run:(long long)arg1 ;
-(SCD_Struct_NU7)imageSize;
-(id)initWithRequest:(id)arg1 ;
-(void)_cancel;
-(void)cleanUp;
-(void)_finish;
-(BOOL)isCanceled;
-(void)_pause;
-(BOOL)succeeded;
-(void)run:(long long)arg1 ;
-(SCD_Struct_NU7)renderScale;
-(NUComposition *)composition;
-(void)setRenderScale:(SCD_Struct_NU7)arg1 ;
-(void)finalize:(BOOL)arg1 ;
-(void)_didPrepare;
-(BOOL)complete:(out id*)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(void)reply:(id)arg1 ;
-(void)fail:(id)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(AVVideoComposition *)outputVideoComposition;
-(long long)currentStage;
-(void)didRun;
-(id)renderer:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
-(BOOL)requiresVideoComposition;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsPrepareNodeCached;
-(BOOL)wantsRenderNodeCached;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id<NUScalePolicy>)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(BOOL)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_NU6)arg3 colorSpace:(id)arg4 error:(out id*)arg5 ;
-(BOOL)wantsOutputVideoFrame;
-(id<NUExtentPolicy>)extentPolicy;
-(id)_memoizationCacheKey;
-(void)runSynchronous;
-(void)runToPrepareSynchronous;
-(long long)resolvedSampleMode:(long long)arg1 ;
-(void)_emitSignpostEventType:(unsigned char)arg1 forStage:(long long)arg2 duration:(double)arg3 ;
-(long long)willRun;
-(BOOL)runStage:(long long)arg1 error:(out id*)arg2 ;
-(long long)_nextStageForStage:(long long)arg1 ;
-(BOOL)_shouldWaitForDependentJobs;
-(BOOL)_shouldCancelCoalescedJob;
-(BOOL)cancelCoalescedJob;
-(BOOL)_cancelCoalescedJob;
-(SCD_Struct_NU36)_atomicCancel;
-(void)abortStage:(long long)arg1 ;
-(void)abortPrepare;
-(void)abortRender;
-(void)abortComplete;
-(void)respond;
-(void)_setCurrentStage:(long long)arg1 ;
-(void)_reply:(id)arg1 ;
-(BOOL)_checkForMemoizedResult;
-(void)_memoizeResult:(id)arg1 ;
-(id)validateComposition:(out id*)arg1 ;
-(id)pipelineForComposition:(id)arg1 error:(out id*)arg2 ;
-(id)prepareNodeWithPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)evaluateComposition:(id)arg1 pipeline:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)evaluateOutputGeometry:(out id*)arg1 ;
-(id)renderNodeWithPipelineState:(id)arg1 error:(out id*)arg2 ;
-(void)addStageObserver:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addCancelObserver:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_notifyStageTransition:(long long)arg1 ;
-(void)_notifyCanceled:(long long)arg1 ;
-(NSArray *)dependentJobs;
-(void)setDependentJobs:(NSArray *)arg1 ;
-(NURenderNode *)prepareNode;
-(void)setPrepareNode:(NURenderNode *)arg1 ;
-(NURenderNode *)renderNode;
-(void)setRenderNode:(NURenderNode *)arg1 ;
-(NUImageGeometry *)outputGeometry;
-(void)setOutputGeometry:(NUImageGeometry *)arg1 ;
-(NSObject*<OS_dispatch_group>)replyGroup;
-(void)setReplyGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(int)rendererType;
-(NURenderPipeline *)renderPipeline;
-(void)setRenderPipeline:(NURenderPipeline *)arg1 ;
-(NUGeometrySpaceMap *)resolvedSpaceMap;
-(void)setResolvedSpaceMap:(NUGeometrySpaceMap *)arg1 ;
-(NUImageGeometry *)fullSizeGeometry;
-(void)setFullSizeGeometry:(NUImageGeometry *)arg1 ;
-(void)setOutputImage:(CIImage *)arg1 ;
-(AVComposition *)outputVideo;
-(void)setOutputVideo:(AVComposition *)arg1 ;
-(void)setOutputVideoComposition:(AVVideoComposition *)arg1 ;
-(AVAudioMix *)outputAudioMix;
-(void)setOutputAudioMix:(AVAudioMix *)arg1 ;
-(id)renderImage:(id)arg1 into:(id)arg2 colorSpace:(id)arg3 roi:(id)arg4 imageSize:(SCD_Struct_NU7)arg5 error:(out id*)arg6 ;
-(NSString *)additionalDebugInfo;
@end

