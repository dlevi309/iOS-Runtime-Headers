/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/


@protocol OS_dispatch_semaphore;
@class NSXPCConnection, NSObject, NSError;

@interface DIBaseXPCHandler : NSObject {

	BOOL _isPrivileged;
	id _remoteProxy;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSError* _xpcError;

}

@property (nonatomic,retain) id remoteProxy;                                          //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSError * xpcError;                                      //@synthesize xpcError=_xpcError - In the implementation block
@property (assign,nonatomic) BOOL isPrivileged;                                       //@synthesize isPrivileged=_isPrivileged - In the implementation block
-(void)closeConnection;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)createConnection;
-(id)init;
-(BOOL)connectWithError:(id*)arg1 ;
-(id)remoteObjectInterface;
-(NSXPCConnection *)connection;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)serviceName;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(id)remoteProxy;
-(void)setRemoteProxy:(id)arg1 ;
-(BOOL)isPrivileged;
-(void)setXpcError:(NSError *)arg1 ;
-(NSError *)xpcError;
-(BOOL)dupStderrWithError:(id*)arg1 ;
-(void)setIsPrivileged:(BOOL)arg1 ;
-(void)signalCommandCompletedWithXpcError:(id)arg1 ;
-(BOOL)completeCommandWithError:(id*)arg1 ;
@end

