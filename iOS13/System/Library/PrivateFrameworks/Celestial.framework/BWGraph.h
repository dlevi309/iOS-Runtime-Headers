/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_group, OS_dispatch_queue, BWGraphStatusDelegate;
@class NSMutableArray, NSMutableDictionary, NSArray, NSObject, BWMemoryPool, NSString;

@interface BWGraph : NSObject {

	NSMutableArray* _nodes;
	NSMutableArray* _sourceNodes;
	NSMutableArray* _sinkNodes;
	NSMutableArray* _connections;
	NSMutableArray* _outputsWithSharedPools;
	NSMutableDictionary* _outputsWithSharedPoolsForAttachedMedia;
	NSMutableArray* _nodesToPrepareConcurrently;
	NSArray* _nodesToPrepareAfterGraphStart;
	NSMutableArray* _deferredPreparePrioritySinks;
	BOOL _deferredNodePrepareCancelled;
	NSMutableArray* _deferredStartSourceNodes;
	BOOL _haveStartedOrCancelledDeferredSourceNodes;
	BOOL _running;
	BOOL _beingConfigured;
	long long _inflightConfigurationID;
	NSObject*<OS_dispatch_group> _sourceNodesStartGroup;
	NSObject*<OS_dispatch_group> _nonDeferredSourceNodesStartGroup;
	NSObject*<OS_dispatch_queue> _sourceStartQueue;
	NSObject*<OS_dispatch_group> _startGroup;
	NSObject*<OS_dispatch_group> _commitGroup;
	BOOL _supportsLiveReconfiguration;
	int _errorStatus;
	id<BWGraphStatusDelegate> _statusDelegate;
	BOOL _classicRetainedBufferCount;
	BWMemoryPool* _memoryPool;
	NSString* _applicationID;
	int _clientPID;
	NSString* _modeDescription;
	NSString* _sourceDescription;
	int _graphStateTransitionTimeoutSeconds;
	unsigned _configurationQueuePriority;

}

@property (assign) int errorStatus;                                                 //@synthesize errorStatus=_errorStatus - In the implementation block
@property (nonatomic,readonly) BOOL deferredNodePrepareEnabled; 
@property (nonatomic,readonly) BOOL supportsLiveReconfiguration; 
@property (assign,nonatomic) id<BWGraphStatusDelegate> statusDelegate;              //@synthesize statusDelegate=_statusDelegate - In the implementation block
@property (nonatomic,retain) BWMemoryPool * memoryPool;                             //@synthesize memoryPool=_memoryPool - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)beginConfiguration;
-(id)dotString;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3 ;
-(int)clientPID;
-(void)setClientPID:(int)arg1 ;
-(BWMemoryPool *)memoryPool;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(id)applicationID;
-(void)cancelDeferredSourceNodeStart;
-(void)cancelDeferredNodePrepare;
-(void)waitForStartOrCommitToComplete;
-(void)startDeferredSourceNodesIfNeeded;
-(BOOL)deferredNodePrepareEnabled;
-(void)startDeferredNodePrepareIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setErrorStatus:(int)arg1 ;
-(void)setStatusDelegate:(id<BWGraphStatusDelegate>)arg1 ;
-(void)enableDeferredStartForSourceNode:(id)arg1 ;
-(BOOL)commitConfigurationWithID:(long long)arg1 error:(id*)arg2 ;
-(void)notifyWhenNonDeferredSourceNodesHaveStarted:(/*^block*/id)arg1 ;
-(id)_sourceNodes;
-(id)_sinkNodes;
-(int)errorStatus;
-(void)enableConcurrentPrepareForNode:(id)arg1 ;
-(void)setApplicationID:(id)arg1 ;
-(BOOL)supportsLiveReconfiguration;
-(id)initWithConfigurationQueuePriority:(unsigned)arg1 ;
-(void)_resumeInputConnectionsForNodes:(id)arg1 eventsOnly:(BOOL)arg2 ;
-(void)_getNodesToPrepareSeriallyBeforeGraphStart:(id*)arg1 concurrentlyBeforeGraphStart:(id*)arg2 afterGraphStart:(id*)arg3 ;
-(void)_suspendInputConnectionsForNodes:(id)arg1 ;
-(id<BWGraphStatusDelegate>)statusDelegate;
-(id)_newDispatchGroupForSinksToTransitionToState:(int)arg1 ;
-(void)_waitForStartOrCommitToComplete;
-(void)_logActiveNodesAfterGraphStopTimeout;
-(void)_logActiveSinkNodesAfterGraphStopTimeout;
-(void)_timedOutWaitingForOperationToCompleteWithDescription:(id)arg1 ;
-(BOOL)_resolveFormats:(id*)arg1 ;
-(BOOL)_resolveRetainedBufferCounts:(id*)arg1 ;
-(BOOL)_prepareNodesWithConfigurationChanges:(id*)arg1 ;
-(void)_makeParentConfigurationChangesLive;
-(id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1 ;
-(void)_waitForSourceNodesToStart;
-(id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3 ;
-(id)_nodesInSubgraphOfSinkNode:(id)arg1 ;
-(id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)arg1 ;
-(id)modeDescription;
-(void)setModeDescription:(id)arg1 ;
-(id)sourceDescription;
-(void)setSourceDescription:(id)arg1 ;
-(id)_breadthFirstEnumerator;
-(id)_reverseBreadthFirstEnumerator;
-(void)_writeDotStringToFile;
@end

