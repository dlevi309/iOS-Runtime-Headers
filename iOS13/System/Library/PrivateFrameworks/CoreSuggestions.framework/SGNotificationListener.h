/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGNotificationListener : NSObject {

	/*^block*/id _callback;
	CFStringRef _notification;
	opaque_pthread_mutex_t _lock;

}
-(void)dealloc;
-(void)_notify;
-(id)initWithNotification:(CFStringRef)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)unsubscribe;
@end

