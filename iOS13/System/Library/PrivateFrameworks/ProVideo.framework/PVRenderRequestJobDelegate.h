/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVRenderJobDelegate.h>

@class PVRenderer, PVRenderRequest, NSString, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {

	PVRenderer* m_pvRenderer;
	PVRenderRequest* m_request;
	HGRef<PVRenderManager>* m_renderManager;
	/*^block*/id m_completionHandler;
	vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >* m_destinationBitmaps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
+(unsigned)jobTypeTag;
-(void)dealloc;
-(PVVideoCompositingContext *)videoCompositingContext;
-(int)jobPriority;
-(int)graphBuildThreadPriority;
-(int)renderContextPriority;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(int)renderThreadPriority;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3 ;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(unsigned long long)packedFamilyCode;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 pvRenderer:(id)arg3 ;
@end

