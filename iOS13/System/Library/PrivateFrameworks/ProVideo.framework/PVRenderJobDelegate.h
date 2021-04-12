/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

@class PVVideoCompositingContext;


@protocol PVRenderJobDelegate <NSObject>
@property (readonly) unsigned jobTypeTag; 
@property (readonly) PVVideoCompositingContext * videoCompositingContext; 
@optional
-(int)jobPriority;
-(int)graphBuildThreadPriority;
-(int)renderContextPriority;
-(int)renderThreadPriority;
-(unsigned long long)packedFamilyCode;

@required
+(unsigned)jobTypeTag;
-(PVVideoCompositingContext *)videoCompositingContext;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3;
-(void)finishCompletedJob;
-(void)finishCancelledJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1;

@end

