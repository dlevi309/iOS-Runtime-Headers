/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, BRCClientRanksPersistedState, NSHashTable, NSObject, BRNotificationQueue, NSMutableDictionary, BRCXPCClient, NSMutableSet, NSMapTable, NSString;

@interface BRCNotificationManager : NSObject <BRCModule> {

	BRCAccountSession* _session;
	BRCClientRanksPersistedState* _state;
	NSHashTable* _pipes;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BRNotificationQueue* _notifs;
	NSMutableDictionary* _transferCache;
	BRCXPCClient* _client;
	AQ _activeAliasQueries;
	NSMutableSet* _additionalUpdatesItemRowID;
	unsigned long long _previousMaxRank;
	NSMutableDictionary* _watchersByFileObjectID;
	NSMapTable* _fileObjectIDByWatcher;
	BOOL _isCancelled;

}

@property (readonly) BOOL hasActiveAliasWatchers; 
@property (nonatomic,readonly) BRCAccountSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                         //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)suspend;
-(void)close;
-(BRCAccountSession *)session;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(void)queueUpdateForItemAtRowID:(unsigned long long)arg1 ;
-(void)flushUpdatesWithRank:(unsigned long long)arg1 ;
-(void)unregisterPipeAsWatcher:(id)arg1 ;
-(void)_queueAdditionalUpdates;
-(void)_dispatchUpdatesToPipesWithRank:(unsigned long long)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(BOOL)hasActiveAliasWatchers;
-(void)registerAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2 ;
-(void)unregisterAppLibraries:(id)arg1 forFlags:(unsigned long long)arg2 ;
-(BOOL)hasWatcherForDocumentID:(id)arg1 ;
-(void)registerPipe:(id)arg1 asWatcherForFileObjectID:(id)arg2 ;
-(void)getPipeWithXPCReceiver:(id)arg1 client:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)pipeWithReceiver:(id)arg1 ;
-(void)queueProgressUpdates:(id)arg1 ;
-(void)queueUpdate:(id)arg1 ;
-(void)fetchLastFlushedRankWithReply:(/*^block*/id)arg1 ;
-(void)invalidatePipesWatchingAppLibraryIDs:(id)arg1 ;
-(void)pipeDelegateInvalidated:(id)arg1 ;
-(void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

