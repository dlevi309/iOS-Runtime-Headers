/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAccessibility.dylib
*/


@protocol OS_dispatch_queue;
#import <libAccessibility.dylib/libAccessibility.dylib-Structs.h>
@class NSUserDefaults, NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface AXSupportDefaultsObserver : NSObject {

	NSUserDefaults* _axDomain;
	NSMutableSet* _observedPrefs;
	NSMutableArray* _actions;
	NSMutableDictionary* _actionLastNotifications;
	NSObject*<OS_dispatch_queue> _lastNotificationsQueue;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)startObservingPreference:(CFStringRef)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(void)startObservingPreference:(CFStringRef)arg1 andBroadcastDarwinNotification:(CFStringRef)arg2 ;
-(void)dealloc;
@end

