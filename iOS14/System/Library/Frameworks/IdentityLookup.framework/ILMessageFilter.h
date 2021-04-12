/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ILMessageFilter : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)performQueryRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performReportRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performClassificationReportRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

