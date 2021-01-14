/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class NSXPCConnection;

@interface CRCarKitServiceClient : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)serviceQueue;
-(void)_setupConnection;
-(id)init;
-(void)_serviceQueuePerformBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performSynchronousServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

