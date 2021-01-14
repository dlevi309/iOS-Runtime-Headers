/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class WBSHistoryService, NSObject, WBSHistoryServiceDatabase, WBSCloudHistory, WBSCloudHistoryConfiguration;

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _internalQueue;
	WBSHistoryServiceDatabase* _database;
	WBSCloudHistory* _cloudHistory;
	WBSCloudHistoryConfiguration* _cloudHistoryConfiguration;

}
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)releaseCloudHistory:(/*^block*/id)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(id)initWithHistoryService:(id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1 ;
-(void)getServiceInfo:(/*^block*/id)arg1 ;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

