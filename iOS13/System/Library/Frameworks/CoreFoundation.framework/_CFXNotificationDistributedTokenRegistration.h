/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _CFXNotificationDistributedTokenRegistration : _CFXNotificationTokenRegistration {

	NSObject*<OS_xpc_object> _connection;
	opaque_pthread_mutex_t _connectionLock;

}
-(id)initWithToken:(unsigned long long)arg1 connection:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)invalidate;
@end

