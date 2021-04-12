/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderJobDelegate.h>

@class PVEffect, PVRendererBase, NSString, PVVideoCompositingContext;

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate> {

	PVEffect* m_effect;
	SCD_Struct_PV20 m_time;
	CGImageRef m_input;
	HGRef<HGNode>* m_inputHGNode;
	CGSize m_outputSize;
	/*^block*/id m_completionHandler;
	PVRendererBase* m_pvRenderer;
	HGRef<HGCVBitmap>* m_outputCVBitmap;
	PVImageProperties* m_imageCreationProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned)jobTypeTag;
+(void)cleanupCaches;
-(void)dealloc;
-(PVVideoCompositingContext *)videoCompositingContext;
-(int)jobPriority;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned long long)packedFamilyCode;
-(void)_setupInputHGNode:(const HGRenderContext*)arg1 frameStats:(FrameStats*)arg2 ;
-(CGImageRef)_makeResultImage;
-(id)initWEffect:(id)arg1 atTime:(SCD_Struct_PV20)arg2 inputImage:(CGImageRef)arg3 outputSize:(CGSize)arg4 completionHandler:(/*^block*/id)arg5 pvRenderer:(id)arg6 ;
@end

