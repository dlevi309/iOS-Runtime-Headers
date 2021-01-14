/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderJobDelegate.h>

@class PVEffect, PVRendererBase, PVVideoCompositingContext, NSString;

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate> {

	PVEffect* m_effect;
	SCD_Struct_PV22 m_time;
	CGImageRef m_input;
	HGRef<HGNode>* m_inputHGNode;
	CGSize m_outputSize;
	/*^block*/id m_completionHandler;
	PVRendererBase* m_pvRenderer;
	HGRef<HGCVBitmap>* m_outputCVBitmap;
	PVImageProperties* m_imageCreationProperties;

}

@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)jobTypeTag;
+(void)cleanupCaches;
-(void)dealloc;
-(PVVideoCompositingContext *)videoCompositingContext;
-(void)finishCancelledJob;
-(int)jobPriority;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned long long)packedFamilyCode;
-(void)_setupInputHGNode:(const HGRenderContext*)arg1 frameStats:(FrameStats*)arg2 ;
-(CGImageRef)_makeResultImage;
-(id)initWEffect:(id)arg1 atTime:(SCD_Struct_PV22)arg2 inputImage:(CGImageRef)arg3 outputSize:(CGSize)arg4 completionHandler:(/*^block*/id)arg5 pvRenderer:(id)arg6 ;
@end

