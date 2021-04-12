/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NFSession.h>

@protocol NFSession <NSObject>
@required
-(void)endSession;
-(BOOL)isFirstInQueue;
-(void)endSessionWithCompletion:(/*^block*/id)arg1;
-(void)endSessionAndStartNextSession:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue, NFSessionInterfaceNSXPCProxyCreating;
@class NSObject, NSString;

@interface NFSession : NSObject <NFSession> {

	BOOL _isFirstInQueue;
	BOOL _isCallbackQueueSuspended;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<NFSessionInterface>*<NSXPCProxyCreating> _proxy;
	/*^block*/id _didStartCallback;
	/*^block*/id _didEndCallback;
	unsigned long long _state;

}

@property (readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (readonly) BOOL didEnd; 
@property (readonly) BOOL isActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)resume;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(unsigned long long)state;
-(BOOL)didEnd;
-(id)callbackQueue;
-(void)endSession;
-(void)setProxy:(id)arg1 ;
-(id)proxy;
-(void)setDidEndCallback:(/*^block*/id)arg1 ;
-(BOOL)isFirstInQueue;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)didStartSession:(id)arg1 ;
-(void)didEndUnexpectedly;
-(void)setDidStartCallback:(/*^block*/id)arg1 ;
-(void)setIsFirstInQueue:(BOOL)arg1 ;
-(void)_didStartSession:(id)arg1 ;
-(void)didStartSessionWithoutQueue:(id)arg1 ;
-(void)prioritizeSession;
-(void)_endProxySession;
-(void)_didEndSession;
-(void)endSessionAndStartNextSession:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

