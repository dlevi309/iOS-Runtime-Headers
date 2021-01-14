/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)start;
-(BOOL)registerForNotification:(int)arg1 argument:(const char*)arg2 question:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
@end

