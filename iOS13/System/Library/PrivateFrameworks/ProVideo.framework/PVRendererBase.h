/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSLock, PVVideoCompositingContext, NSString;

@interface PVRendererBase : NSObject {

	atomic<unsigned int> _frameCount;
	vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > >* _inFlightRenderJobs;
	NSLock* _inFlightRenderJobsLock;
	HGSynchronizable* _perfStatsLock;
	PVPerfStats* _perfStats;
	BOOL _trackStats;
	PVVideoCompositingContext* _compositingContext;
	NSString* _name;

}

@property (nonatomic,retain) PVVideoCompositingContext * compositingContext;              //@synthesize compositingContext=_compositingContext - In the implementation block
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
+(id)getEAGLShareGroup;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)initWithOptions:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(void)printAndClearStats:(BOOL)arg1 ;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)cancelAllPendingRequests;
-(void)addRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)addFrameStats:(FrameStats*)arg1 ;
-(void)cleanupMemoryCaches;
-(HGRef<PVRenderJob>*)startJobForDelegate:(id)arg1 frameStats:(FrameStats*)arg2 ;
-(FrameStats*)newFrameStats;
-(PVVideoCompositingContext *)compositingContext;
-(void)setCompositingContext:(PVVideoCompositingContext *)arg1 ;
@end

