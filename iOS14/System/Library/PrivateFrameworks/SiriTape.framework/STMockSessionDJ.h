/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, STMockSessionDJDelegate;
@class NSObject, NSArray, NSOrderedSet, NSDictionary, NSMutableOrderedSet, NSMutableArray;

@interface STMockSessionDJ : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _responsesQueue;
	NSObject*<OS_dispatch_queue> _onewayCBqueue;
	NSArray* _recordedCBTimestamps;
	NSArray* _recordedClientBoundAceCommands;
	NSArray* _recordedServerBoundAceCommands;
	NSOrderedSet* _recordedRefIDs;
	NSArray* _recordedStartRequests;
	NSArray* _recordedStartRequestsTimestamps;
	NSDictionary* _SBCommandsAceIDsToTimestamps;
	NSMutableOrderedSet* _newStartRequestIDs;
	NSArray* _getResultObjectsCommands;
	NSArray* _getResultObjectsAceIds;
	NSDictionary* _matchedCommands;
	NSDictionary* _commandsOrderedByType;
	NSDictionary* _indicesOfReplayCommandsByType;
	NSDictionary* _responseTime;
	NSArray* _oneWayClientBoundCommands;
	unsigned long long _replayIndex;
	BOOL _isClientFlow;
	NSObject*<OS_dispatch_semaphore> _finishedSpeech;
	NSObject*<OS_dispatch_semaphore> _requestCompleted;
	NSMutableArray* _completions;
	BOOL _isReplaying;
	id<STMockSessionDJDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<STMockSessionDJDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isReplaying;                                       //@synthesize isReplaying=_isReplaying - In the implementation block
-(id<STMockSessionDJDelegate>)delegate;
-(void)setDelegate:(id<STMockSessionDJDelegate>)arg1 ;
-(BOOL)isReplaying;
-(void)handleAceObject:(id)arg1 ;
-(id)initWithReplayFileURL:(id)arg1 ;
-(void)addFinishRequestCompletion:(/*^block*/id)arg1 ;
-(void)startReplay;
-(void)addStartRequestID:(id)arg1 ;
-(void)_loadReplayAtURL:(id)arg1 ;
-(void)_matchRefIdsWithAceIds;
-(void)_setUpObserverAction;
-(void)_replayFromCommand:(id)arg1 isLastRequest:(BOOL)arg2 ;
-(void)_sendOneWayCBCommandsForStartRequest:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_sendCommandsFrom:(id)arg1 withTimestamps:(id)arg2 atIndex:(unsigned long long)arg3 isLastRequest:(BOOL)arg4 ;
-(id)_getEventContextFromEvent:(id)arg1 ;
@end

