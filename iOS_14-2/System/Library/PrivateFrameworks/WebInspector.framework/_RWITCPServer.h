/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<_RWITCPServerDelegate>)delegate;
-(id)_initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(void)connectionClosed:(id)arg1 ;
-(BOOL)_listenOnPort:(unsigned short)arg1 ;
-(BOOL)_createListenDispatchSource;
-(id)initWithLaunchdSocketName:(const char*)arg1 delegate:(id)arg2 ;
@end

