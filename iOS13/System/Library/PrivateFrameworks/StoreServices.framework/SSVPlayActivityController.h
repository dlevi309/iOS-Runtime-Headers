/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableDictionary, NSMutableArray, SSVPlayActivityTable, NSXPCConnection;

@interface SSVPlayActivityController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _debugLogOperationQueue;
	NSMutableDictionary* _endpointIdentifierToEndpointRevisionInformation;
	int _endpointRevisionInformationDidChangeNotifyToken;
	BOOL _hasAttemptedTableCreation;
	BOOL _hasLoadedEndpointRevisionInformation;
	BOOL _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
	BOOL _hasValidEndpointRevisionInformationDidChangeNotifyToken;
	NSMutableArray* _pendingFlushingSessions;
	NSObject*<OS_dispatch_queue> _serialQueue;
	SSVPlayActivityTable* _table;
	NSXPCConnection* _daemonPlayActivityControllerConnection;
	unsigned long long _writingStyle;

}

@property (nonatomic,readonly) unsigned long long writingStyle;              //@synthesize writingStyle=_writingStyle - In the implementation block
+(id)_requiredEndpointIdentifiers;
-(id)init;
-(void)dealloc;
-(id)_table;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_daemonPlayActivityControllerConnection;
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(BOOL)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2 ;
-(id)_sessionInformationForSessionToken:(unsigned long long)arg1 ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1 ;
-(void)getRevisionInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setupNotifyTokenIfNeeded;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)writingStyle;
@end

