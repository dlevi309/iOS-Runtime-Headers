/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSProxyConnectionDelegate, OS_tcp_connection;
@class NSObject;

@interface NSProxyConnection : NSObject {

	BOOL _doCleanupWhenWritesCompleted;
	id<NSProxyConnectionDelegate> _delegate;
	long long _pendingWrites;
	NSObject*<OS_tcp_connection> _connection;

}

@property (retain) NSObject*<OS_tcp_connection> connection;              //@synthesize connection=_connection - In the implementation block
@property (__weak) id<NSProxyConnectionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long pendingWrites;                              //@synthesize pendingWrites=_pendingWrites - In the implementation block
@property (assign) BOOL doCleanupWhenWritesCompleted;                    //@synthesize doCleanupWhenWritesCompleted=_doCleanupWhenWritesCompleted - In the implementation block
-(void)dealloc;
-(id<NSProxyConnectionDelegate>)delegate;
-(void)setDelegate:(id<NSProxyConnectionDelegate>)arg1 ;
-(void)cancel;
-(NSObject*<OS_tcp_connection>)connection;
-(void)setConnection:(NSObject*<OS_tcp_connection>)arg1 ;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(long long)pendingWrites;
-(BOOL)doCleanupWhenWritesCompleted;
-(void)setDoCleanupWhenWritesCompleted:(BOOL)arg1 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(id)initWithTCPConnection:(id)arg1 ;
-(void)setPendingWrites:(long long)arg1 ;
@end

