/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObservingPreference:(CFStringRef)arg1 andBroadcastDarwinNotification:(CFStringRef)arg2 ;
-(void)startObservingPreference:(CFStringRef)arg1 andPerformBlock:(/*^block*/id)arg2 ;
@end

