/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryConnectionProxy.h>

@protocol WBSHistoryConnectionProxy <WBSHistoryConnectionProtocol>
@property (assign,nonatomic,__weak) id<WBSHistoryConnectionProxyDelegate> delegate; 
@required
-(id<WBSHistoryConnectionProxyDelegate>)delegate;
-(id)queryMemoryFootprintWithError:(id*)arg1;
-(void)setDelegate:(id)arg1;

@end


@protocol WBSHistoryConnectionProxyDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryConnectionProxy> {

	NSXPCConnection* _connection;
	id<WBSHistoryConnectionProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _connectionProxyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionProxyQueue;                //@synthesize connectionProxyQueue=_connectionProxyQueue - In the implementation block
@property (assign,nonatomic,__weak) id<WBSHistoryConnectionProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setupConnection;
-(void)finishClearingHistoryIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id<WBSHistoryConnectionProxyDelegate>)delegate;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)initializeCloudHistoryWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)queryMemoryFootprintWithError:(id*)arg1 ;
-(void)setDelegate:(id<WBSHistoryConnectionProxyDelegate>)arg1 ;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)releaseCloudHistory:(/*^block*/id)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginHistoryAccessSession:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionProxyQueue;
-(void)getServiceInfo:(/*^block*/id)arg1 ;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)connectWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_createConnection;
-(void)dealloc;
-(void)killService;
@end

