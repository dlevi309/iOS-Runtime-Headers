/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSEngagementServiceProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AMSEngagementConnection : NSObject {

	id<AMSEngagementServiceProtocol> _proxy;
	/*^block*/id _errorHandler;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<AMSEngagementServiceProtocol> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,copy) id errorHandler;                                       //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)setProxy:(id<AMSEngagementServiceProtocol>)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)_newRemoteConnection;
-(void)_removeRemoteConnection;
-(id<AMSEngagementServiceProtocol>)proxy;
-(id)init;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

