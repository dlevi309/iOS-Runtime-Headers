/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <IMFoundation/IMFoundation-Structs.h>
@class NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	Protocol* _protocol;
	NSString* _portName;
	NSString* _processName;
	os_unfair_recursive_lock_s _lock;
	int _pid;
	BOOL _willBeTerminated;
	BOOL _postedDeathNote;

}
@end

