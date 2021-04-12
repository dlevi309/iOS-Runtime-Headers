/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryConnectionProxy.h>

@protocol WBSHistoryConnectionProxy <WBSHistoryConnectionProtocol>
@required
-(id)queryMemoryFootprintWithError:(id*)arg1;

@end


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionProxyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionProxyQueue;              //@synthesize connectionProxyQueue=_connectionProxyQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_setupConnection;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(id)queryMemoryFootprintWithError:(id*)arg1 ;
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1 ;
-(void)getServiceInfo:(/*^block*/id)arg1 ;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(void)killService;
-(NSObject*<OS_dispatch_queue>)connectionProxyQueue;
@end

