/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MGNotificationRegistration : NSObject {

	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	BOOL _deliverNotifications;
	NSMutableDictionary* _requestedRegistrations;

}
-(void)dealloc;
-(void)cancel;
-(BOOL)start;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)registerForNotification:(int)arg1 argument:(const char*)arg2 question:(id)arg3 ;
@end

