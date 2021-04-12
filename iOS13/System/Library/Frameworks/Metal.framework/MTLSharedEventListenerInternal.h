/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSharedEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTLSharedEventListenerInternal : MTLSharedEventListener {

	IONotificationPortRef _notificationPort;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(id)init;
-(void)dealloc;
-(id)dispatchQueue;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_notifyEventPort:(unsigned)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
@end

