/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
*/

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/ITIdleTimerServerInterface.h>

@protocol OS_dispatch_queue, ITIdleTimerStateServerDelegate;
@class NSObject, BSServiceConnectionListener, NSMutableSet, NSMutableDictionary, NSString;

@interface ITIdleTimerStateServer : NSObject <BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface> {

	os_unfair_lock_s _accessLock;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BSServiceConnectionListener* _connectionListener;
	NSMutableSet* _connections;
	NSMutableDictionary* _clientTargetsByConfigIdentifier;
	id<ITIdleTimerStateServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ITIdleTimerStateServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ITIdleTimerStateServerDelegate>)delegate;
-(void)setDelegate:(id<ITIdleTimerStateServerDelegate>)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(BOOL)isIdleTimerServiceAvailableWithError:(id*)arg1 ;
-(void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2 ;
-(BOOL)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2 ;
@end

