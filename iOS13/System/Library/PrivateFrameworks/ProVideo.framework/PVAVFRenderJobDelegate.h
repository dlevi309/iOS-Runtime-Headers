/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderJobDelegate.h>

@class PVVideoCompositingContext, PVVideoCompositing, AVAsynchronousVideoCompositionRequest, PVVideoCompositionInstruction, PVTaskToken, NSString;

@interface PVAVFRenderJobDelegate : NSObject <PVRenderJobDelegate> {

	PVVideoCompositing* m_compositor;
	AVAsynchronousVideoCompositionRequest* m_request;
	PVVideoCompositionInstruction* m_instruction;
	SCD_Struct_PV20 m_compositionTime;
	BOOL m_thumbnailCompositing;
	CVBufferRef m_destinationPixelBuffer;
	unsigned m_minimumRequestCompletionTimeMS;
	PerfTimer m_timer;
	unsigned m_childCode;
	HGCVGLTextureFactory* m_hgCVGLTextureFactory;
	HGRef<PVRenderManager>* m_renderManager;
	HGRef<PVInstructionGraphContext>* m_instructionGraphContext;
	PVTaskToken* _token;

}

@property (readonly) SCD_Struct_PV20 compositionTime; 
@property (readonly) PVVideoCompositionInstruction * compositionInstruction; 
@property (readonly) AVAsynchronousVideoCompositionRequest * compositionRequest; 
@property (assign) unsigned minimumRequestCompletionTimeMS; 
@property (assign) unsigned childCode; 
@property (retain) PVTaskToken * token;                                                       //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned)jobTypeTag;
-(PVTaskToken *)token;
-(void)setToken:(PVTaskToken *)arg1 ;
-(SCD_Struct_PV20)compositionTime;
-(unsigned)childCode;
-(void)setChildCode:(unsigned)arg1 ;
-(void)setMinimumRequestCompletionTimeMS:(unsigned)arg1 ;
-(PVVideoCompositingContext *)videoCompositingContext;
-(int)jobPriority;
-(int)renderContextPriority;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned long long)packedFamilyCode;
-(void)_setupGLTextureFactory:(const HGRenderContext*)arg1 ;
-(void)_setupInputs:(PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)_buildGraph:(PVInputHGNodeMap<PVInstructionGraphSourceNode *>*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 outputNodes:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg4 ;
-(id)initWithCompositor:(id)arg1 request:(id)arg2 compositionTime:(SCD_Struct_PV20)arg3 thumbnailCompositing:(BOOL)arg4 ;
-(PVVideoCompositionInstruction *)compositionInstruction;
-(AVAsynchronousVideoCompositionRequest *)compositionRequest;
-(unsigned)minimumRequestCompletionTimeMS;
@end

