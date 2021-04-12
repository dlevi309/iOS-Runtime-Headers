/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSXPCConnection;

@interface CRCarKitServiceClient : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)serviceQueue;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_setupConnection;
-(void)_serviceQueuePerformBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performSynchronousServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

