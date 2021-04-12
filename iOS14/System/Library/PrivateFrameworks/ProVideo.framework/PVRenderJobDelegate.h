/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finishCancelledJob;
-(unsigned)jobTypeTag;
-(void)buildGraph:(vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3;
-(void)setupDestinationBuffers:(vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > >*)arg1 renderContext:(const HGRenderContext*)arg2 frameStats:(FrameStats*)arg3;
-(void)finishCompletedJob;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1;

@end

