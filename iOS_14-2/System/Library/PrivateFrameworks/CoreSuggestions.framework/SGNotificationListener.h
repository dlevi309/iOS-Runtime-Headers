/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGNotificationListener : NSObject {

	/*^block*/id _callback;
	CFStringRef _notification;
	opaque_pthread_mutex_t _lock;

}
-(BOOL)unsubscribe;
-(void)_notify;
-(id)initWithNotification:(CFStringRef)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

