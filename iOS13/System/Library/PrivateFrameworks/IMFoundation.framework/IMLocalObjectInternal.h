/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_semaphore;
#import <IMFoundation/IMFoundation-Structs.h>
@class IMMessageContext, NSRecursiveLock, NSObject, NSString, NSProtocolChecker, NSArray, NSMutableArray, NSLock;

@interface IMLocalObjectInternal : NSObject {

	IMMessageContext* _currentMessageContext;
	NSRecursiveLock* _lock;
	id _target;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _deathLock;
	NSString* _portName;
	NSString* _processName;
	NSProtocolChecker* _protocolChecker;
	NSArray* _whitelistedClasses;
	NSMutableArray* _componentQueue;
	NSLock* _componentQueueLock;
	NSRecursiveLock* _componentQueueProcessingLock;
	CFRunLoopSourceRef _runloopSource;
	BOOL _pendingComponentQueueProcessing;
	BOOL _busyForwarding;
	BOOL _offMainThread;
	BOOL _wasInterrupted;

}
-(void)dealloc;
@end

