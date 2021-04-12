/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSArray, NSMutableArray;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _portName;
	NSString* _processName;
	NSProtocolChecker* _protocolChecker;
	NSArray* _whitelistedClasses;
	CFRunLoopSourceRef _runloopSource;
	NSRecursiveLock* _componentQueueProcessingLock;
	NSMutableArray* _componentQueue;
	os_unfair_lock_s _componentQueueLock;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;
	BOOL _offMainThread;
	BOOL _wasInterrupted;

}
-(void)dealloc;
@end

