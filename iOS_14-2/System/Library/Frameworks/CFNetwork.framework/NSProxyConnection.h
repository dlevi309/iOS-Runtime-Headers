/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_tcp_connection, NSProxyConnectionDelegate;
@class NSObject;

@interface NSProxyConnection : NSObject {

	BOOL _doCleanupWhenWritesCompleted;
	NSObject*<OS_tcp_connection> _connection;
	id<NSProxyConnectionDelegate> _delegate;
	long long _pendingWrites;

}
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

