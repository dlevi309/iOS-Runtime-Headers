/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
	BOOL _resumesConnectionsAsNodesArePrepared;
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

@property (assign) int errorStatus;                                                  //@synthesize errorStatus=_errorStatus - In the implementation block
@property (nonatomic,readonly) BOOL deferredNodePrepareEnabled; 
@property (assign,nonatomic) BOOL resumesConnectionsAsNodesArePrepared;              //@synthesize resumesConnectionsAsNodesArePrepared=_resumesConnectionsAsNodesArePrepared - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveReconfiguration; 
@property (assign,nonatomic) id<BWGraphStatusDelegate> statusDelegate;               //@synthesize statusDelegate=_statusDelegate - In the implementation block
@property (nonatomic,retain) BWMemoryPool * memoryPool;                              //@synthesize memoryPool=_memoryPool - In the implementation block
+(void)initialize;
-(id)applicationID;
-(BWMemoryPool *)memoryPool;
-(void)setMemoryPool:(BWMemoryPool *)arg1 ;
-(BOOL)start:(id*)arg1 ;
-(void)_suspendInputConnectionsForNodes:(id)arg1 ;
-(id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1 ;
-(BOOL)commitConfigurationWithID:(long long)arg1 error:(id*)arg2 ;
-(void)setClientPID:(int)arg1 ;
-(id)initWithConfigurationQueuePriority:(unsigned)arg1 ;
-(void)setApplicationID:(id)arg1 ;
-(void)cancelDeferredSourceNodeStart;
-(BOOL)_resolveRetainedBufferCounts:(id*)arg1 ;
-(id)init;
-(void)enableDeferredStartForSourceNode:(id)arg1 ;
-(id)_reverseBreadthFirstEnumerator;
-(int)clientPID;
-(void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3 ;
-(id)_newDispatchGroupForSinksToTransitionToState:(int)arg1 ;
-(void)_timedOutWaitingForOperationToCompleteWithDescription:(id)arg1 ;
-(void)_resumeInputConnectionsForNodes:(id)arg1 eventsOnly:(BOOL)arg2 ;
-(void)_waitForSourceNodesToStart;
-(void)waitForStartOrCommitToComplete;
-(void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)arg1 ;
-(void)_waitForStartOrCommitToComplete;
-(void)startDeferredSourceNodesIfNeeded;
-(BOOL)_prepareNodesWithConfigurationChanges:(id*)arg1 ;
-(id)_sinkNodes;
-(void)waitForNonDeferredSourceNodesToStart;
-(void)setModeDescription:(id)arg1 ;
-(BOOL)_resolveFormats:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(void)startDeferredNodePrepareIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableConcurrentPrepareForNode:(id)arg1 ;
-(BOOL)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3 ;
-(id)sourceDescription;
-(void)setStatusDelegate:(id<BWGraphStatusDelegate>)arg1 ;
-(BOOL)supportsLiveReconfiguration;
-(void)notifyWhenNonDeferredSourceNodesHaveStarted:(/*^block*/id)arg1 ;
-(id)_breadthFirstEnumerator;
-(id<BWGraphStatusDelegate>)statusDelegate;
-(void)setResumesConnectionsAsNodesArePrepared:(BOOL)arg1 ;
-(void)_logActiveNodesAfterGraphStopTimeout;
-(void)_logActiveSinkNodesAfterGraphStopTimeout;
-(void)_getNodesToPrepareSeriallyBeforeGraphStart:(id*)arg1 concurrentlyBeforeGraphStart:(id*)arg2 afterGraphStart:(id*)arg3 ;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
-(id)dotString;
-(void)cancelDeferredNodePrepare;
-(void)_writeDotStringToFile;
-(id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1 ;
-(BOOL)resumesConnectionsAsNodesArePrepared;
-(int)errorStatus;
-(id)_nodesInSubgraphOfSinkNode:(id)arg1 ;
-(id)_sourceNodes;
-(void)beginConfiguration;
-(void)_makeParentConfigurationChangesLive;
-(id)modeDescription;
-(void)setSourceDescription:(id)arg1 ;
-(BOOL)deferredNodePrepareEnabled;
-(void)dealloc;
-(void)setErrorStatus:(int)arg1 ;
@end

