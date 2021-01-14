/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(void)getRevisionInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1 ;
-(void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)writingStyle;
-(id)_sessionInformationForSessionToken:(unsigned long long)arg1 ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(BOOL)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_daemonPlayActivityControllerConnection;
-(void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setupNotifyTokenIfNeeded;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_table;
-(void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

