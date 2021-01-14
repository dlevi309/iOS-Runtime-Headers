/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDispatchQueue:(id)arg1 ;
-(id)dispatchQueue;
-(void)_notifyEventPort:(unsigned)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

