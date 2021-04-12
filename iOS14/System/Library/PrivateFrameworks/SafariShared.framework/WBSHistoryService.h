/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSMutableDictionary, NSCountedSet, NSDate, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore, NSURL, NSString;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _historyServiceQueue;
	NSMutableDictionary* _openedDatabases;
	NSCountedSet* _openedDatabasesRefCounts;
	NSDate* _initDate;
	WBSHistoryDatabaseAccessBroker* _databaseAccessBroker;
	WBSHistoryURLCompletionDataStore* _urlCompletionDataStore;

}

@property (nonatomic,readonly) WBSHistoryDatabaseAccessBroker * databaseAccessBroker;                  //@synthesize databaseAccessBroker=_databaseAccessBroker - In the implementation block
@property (nonatomic,readonly) WBSHistoryURLCompletionDataStore * urlCompletionDataStore;              //@synthesize urlCompletionDataStore=_urlCompletionDataStore - In the implementation block
@property (nonatomic,readonly) NSURL * databaseURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutdown;
-(id)init;
-(void)disconnectDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_connectionIsEntitledToUseUserDatabase:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(WBSHistoryDatabaseAccessBroker *)databaseAccessBroker;
-(void)connectWithOptions:(id)arg1 connection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)databaseURL;
-(id)_createListener;
-(WBSHistoryURLCompletionDataStore *)urlCompletionDataStore;
-(void)resume;
-(void)dealloc;
-(id)_openOrReuseExistingDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
@end

