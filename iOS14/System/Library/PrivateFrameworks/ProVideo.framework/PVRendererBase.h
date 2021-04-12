/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _hasRendered;
	BOOL _immediatelyCancelPendingRequests;
	PVVideoCompositingContext* _compositingContext;
	NSString* _name;

}

@property (nonatomic,retain) PVVideoCompositingContext * compositingContext;              //@synthesize compositingContext=_compositingContext - In the implementation block
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL immediatelyCancelPendingRequests;                       //@synthesize immediatelyCancelPendingRequests=_immediatelyCancelPendingRequests - In the implementation block
+(id)getEAGLShareGroup;
-(unsigned)frameCount;
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(double)numFrames;
-(void)setImmediatelyCancelPendingRequests:(BOOL)arg1 ;
-(void)setOutputColorSpace:(id)arg1 ;
-(void)printAndClearStats;
-(void)trackStats:(BOOL)arg1 ;
-(void)printAndClearStats:(BOOL)arg1 ;
-(void)cleanupMemoryCaches;
-(void)renderJobFinished:(HGRef<PVRenderJob>*)arg1 ;
-(void)didRecieveMemoryWarning:(id)arg1 ;
-(void)_initOutputColorSpace:(id)arg1 ;
-(void)updateDestinationFormatForOutputColorSpace;
-(void)cancelAllPendingRequests;
-(BOOL)immediatelyCancelPendingRequests;
-(void)addRenderJobInFlight:(HGRef<PVRenderJob>*)arg1 ;
-(void)addFrameStats:(FrameStats*)arg1 ;
-(PVVideoCompositingContext *)compositingContext;
-(HGRef<PVRenderJob>*)startJobForDelegate:(id)arg1 frameStats:(FrameStats*)arg2 ;
-(FrameStats*)newFrameStatsForTime:(SCD_Struct_PV22)arg1 inPlayback:(BOOL)arg2 ;
-(double)getTimeSinceLast:(FrameStats*)arg1 ;
-(double)windowedFPS;
-(double)averageStat:(int)arg1 ;
-(double)getLastStat:(int)arg1 ;
-(unsigned long long)taskResidentSize;
-(void)setCompositingContext:(PVVideoCompositingContext *)arg1 ;
@end

