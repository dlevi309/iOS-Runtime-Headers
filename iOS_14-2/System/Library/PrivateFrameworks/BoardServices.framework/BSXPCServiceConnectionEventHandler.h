/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/


@protocol OS_dispatch_queue, BSServiceDispatchingQueue;
#import <BoardServices/BoardServices-Structs.h>
@class BSXPCServiceConnectionProxy, NSString, NSObject, BSServiceQuality, BSServiceInterface, BSXPCCoder;

@interface BSXPCServiceConnectionEventHandler : NSObject {

	os_unfair_lock_s _lock;
	BOOL _nonLaunchingAware;
	BSXPCServiceConnectionProxy* _lock_remoteTarget;
	id _interfaceTarget;
	/*^block*/id _connectionHandler;
	/*^block*/id _noMoreChildrenHandler;
	/*^block*/id _messageHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _activationHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	id _context;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _targetQueue;
	id<BSServiceDispatchingQueue> _targetDispatchingQueue;
	BSServiceQuality* _serviceQuality;
	BSServiceInterface* _interface;
	BSXPCCoder* _initiatingContext;

}
-(id)init;
@end

