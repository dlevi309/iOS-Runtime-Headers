/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface CRKValidXPCConnectionProvider : NSObject {

	NSXPCConnection* _connection;
	/*^block*/id _builder;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id builder;                                      //@synthesize builder=_builder - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
-(void)tearDownConnection;
-(NSXPCConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(id)builder;
-(void)dealloc;
-(id)unprotectedConnection;
-(id)makeConnection;
-(id)invokeBuilder;
-(void)connectionDied:(id)arg1 ;
-(id)captureConnection;
@end

