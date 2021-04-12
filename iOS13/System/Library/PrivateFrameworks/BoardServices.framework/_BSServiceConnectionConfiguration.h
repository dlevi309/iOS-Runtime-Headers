/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionInternalConfiguring.h>
#import <libobjc.A.dylib/BSServiceConnectionConfiguring_DispatchingQueue.h>

@protocol OS_xpc_object, NSCopying, OS_dispatch_queue, BSServiceDispatchingQueue;
@class NSObject, NSString, BSServiceQuality, BSServiceInterface;

@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionInternalConfiguring, BSServiceConnectionConfiguring_DispatchingQueue> {

	os_unfair_lock_s* _lock;
	NSObject*<OS_xpc_object> _clientContext;
	id<NSCopying> _userInfo;
	NSString* _name;
	BSServiceQuality* _serviceQuality;
	BSServiceInterface* _interface;
	id _target;
	/*^block*/id _activationHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSObject*<OS_dispatch_queue> _targetQueue;
	id<BSServiceDispatchingQueue> _targetDispatchingQueue;
	/*^block*/id _messageHandler;
	/*^block*/id _errorHandler;

}
-(void)setName:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(void)setErrorHandler:(/*^block*/id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)interface;
-(void)setInterface:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)setServiceQuality:(id)arg1 ;
-(void)setInterfaceTarget:(id)arg1 ;
-(void)setActivationHandler:(/*^block*/id)arg1 ;
-(void)setMessageHandler:(/*^block*/id)arg1 ;
-(void)setTargetDispatchingQueue:(id)arg1 ;
-(id)initWithLock:(os_unfair_lock_s*)arg1 clientContext:(id)arg2 ;
@end

