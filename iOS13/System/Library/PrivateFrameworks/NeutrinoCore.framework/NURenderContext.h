/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSMutableArray, NSObject, NURenderNode, NSArray;

@interface NURenderContext : NSObject {

	NSPointerArray* _jobs;
	NSMutableArray* _rateLimitedJobs;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _shouldCoalesceUpdates;
	double _minimumRenderInterval;
	long long _purpose;
	NURenderNode* _lastPrepareNode;
	NURenderNode* _lastRenderNode;
	unsigned long long _nextRenderTime;

}

@property (readonly) NSArray * jobs; 
@property (readonly) long long jobCount; 
@property (retain) NURenderNode * lastPrepareNode;                    //@synthesize lastPrepareNode=_lastPrepareNode - In the implementation block
@property (retain) NURenderNode * lastRenderNode;                     //@synthesize lastRenderNode=_lastRenderNode - In the implementation block
@property (assign) unsigned long long nextRenderTime;                 //@synthesize nextRenderTime=_nextRenderTime - In the implementation block
@property (assign) double minimumRenderInterval;                      //@synthesize minimumRenderInterval=_minimumRenderInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldCoalesceUpdates;              //@synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates - In the implementation block
@property (nonatomic,readonly) long long purpose;                     //@synthesize purpose=_purpose - In the implementation block
-(id)init;
-(id)debugDescription;
-(long long)purpose;
-(void)cancelAllRequests;
-(id)initWithPurpose:(long long)arg1 ;
-(NSArray *)jobs;
-(void)addJob:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)_removeJob:(id)arg1 ;
-(void)setShouldCoalesceUpdates:(BOOL)arg1 ;
-(BOOL)shouldCoalesceUpdates;
-(long long)jobCount;
-(void)_jobFinished:(id)arg1 ;
-(void)_cancelAllJobs;
-(void)cancelAllJobs;
-(void)enqueueRateLimitedJob:(id)arg1 ;
-(void)_enqueueRateLimitedJob:(id)arg1 ;
-(id)dequeueRateLimitedJob;
-(id)_dequeueRateLimitedJob;
-(void)updateNextRenderTimeFromTime:(unsigned long long)arg1 ;
-(double)minimumRenderInterval;
-(void)setMinimumRenderInterval:(double)arg1 ;
-(NURenderNode *)lastPrepareNode;
-(void)setLastPrepareNode:(NURenderNode *)arg1 ;
-(NURenderNode *)lastRenderNode;
-(void)setLastRenderNode:(NURenderNode *)arg1 ;
-(unsigned long long)nextRenderTime;
-(void)setNextRenderTime:(unsigned long long)arg1 ;
@end

