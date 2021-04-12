/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/


@protocol NSXPCProxyCreating, OS_dispatch_queue;
@class NSObject;

@interface DASessionInternal : NSObject {

	BOOL _isCallbackQueueSuspended;
	NSObject*<NSXPCProxyCreating> _proxy;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _isFirstInQueue;
	id _delegate;

}

@property (assign) BOOL isFirstInQueue;                    //@synthesize isFirstInQueue=_isFirstInQueue - In the implementation block
@property (setter=setProxy:,retain) id proxy; 
@property (__weak,readonly) id delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)resume;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setProxy:(id)arg1 ;
-(id)proxy;
-(BOOL)isFirstInQueue;
-(void)setIsFirstInQueue:(BOOL)arg1 ;
-(void)dispatchBlockOnCallback:(/*^block*/id)arg1 ;
-(void)closeProxy;
@end

