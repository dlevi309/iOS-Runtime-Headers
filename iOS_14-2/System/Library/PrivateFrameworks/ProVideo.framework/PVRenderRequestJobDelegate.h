/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderJobDelegate.h>

@class PVRenderer, PVRenderRequest, PVVideoCompositingContext, NSString;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {

	PVRenderer* m_pvRenderer;
	PVRenderRequest* m_request;
	HGRef<PVRenderManager>* m_renderManager;
	/*^block*/id m_completionHandler;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* m_destinationBitmaps;

}

@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)jobTypeTag;
-(void)dealloc;
-(PVVideoCompositingContext *)videoCompositingContext;
-(void)finishCancelledJob;
-(int)jobPriority;
-(int)graphBuildThreadPriority;
-(int)renderContextPriority;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned long long)packedFamilyCode;
-(unsigned)outputCVPixelBufferFormat;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 pvRenderer:(id)arg3 ;
@end

