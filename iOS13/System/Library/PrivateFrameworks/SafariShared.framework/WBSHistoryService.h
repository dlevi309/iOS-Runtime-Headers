/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSDate, WBSHistoryDatabaseAccessBroker, WBSHistoryURLCompletionDataStore, NSURL, NSString;

@interface WBSHistoryService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _historyServiceQueue;
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
-(id)init;
-(void)_resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSURL *)databaseURL;
-(void)_shutdown;
-(WBSHistoryDatabaseAccessBroker *)databaseAccessBroker;
-(BOOL)_connectionIsEntitledToUseUserDatabase:(id)arg1 ;
-(WBSHistoryURLCompletionDataStore *)urlCompletionDataStore;
@end

