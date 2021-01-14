/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProxy:(id)arg1 ;
-(id)proxy;
-(id)delegate;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)resume;
-(BOOL)isFirstInQueue;
-(void)dealloc;
-(void)setIsFirstInQueue:(BOOL)arg1 ;
-(void)dispatchBlockOnCallback:(/*^block*/id)arg1 ;
-(void)closeProxy;
@end

