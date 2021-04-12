/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSRecursiveLock, NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSRecursiveLock* _lock;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _deathPostPredicate;
	Protocol* _protocol;
	NSString* _portName;
	NSString* _processName;
	BOOL _willBeTerminated;
	int _pid;

}
@end

