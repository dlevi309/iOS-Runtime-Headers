/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;
@class NSObject, NSMutableArray;

@interface _RWITCPServer : NSObject {

	int _listenSocket;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSObject*<OS_dispatch_source> _serverSource;
	NSMutableArray* _connections;
	id<_RWITCPServerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<_RWITCPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<_RWITCPServerDelegate>)delegate;
-(id)_initWithDelegate:(id)arg1 ;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(void)connectionClosed:(id)arg1 ;
-(BOOL)_listenOnPort:(unsigned short)arg1 ;
-(BOOL)_createListenDispatchSource;
-(id)initWithLaunchdSocketName:(const char*)arg1 delegate:(id)arg2 ;
@end

