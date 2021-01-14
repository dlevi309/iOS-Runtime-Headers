/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSKeychainCredentialNotificationMonitor.h>

@protocol WBSKeychainCredentialNotificationMonitor <NSObject>
@required
-(void)removeObserverForToken:(id)arg1;
-(id)addObserverWithBlock:(/*^block*/id)arg1;
-(void)triggerExternalNotification;

@end


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSDate, NSString;

@interface WBSKeychainCredentialNotificationMonitor : NSObject <WBSKeychainCredentialNotificationMonitor> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableDictionary* _observers;
	int _keychainChangedNotificationToken;
	double _coalescingInterval;
	NSDate* _lastNotificationTime;
	NSObject*<OS_dispatch_source> _coalescingTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeObserverForToken:(id)arg1 ;
-(void)_notifyObservers;
-(id)init;
-(void)notifyModernKeychainUpdated;
-(id)initWithCoalescingInterval:(double)arg1 ;
-(void)_cancelCoalescingTimer;
-(void)_notifyKeychainUpdated;
-(id)addObserverWithBlock:(/*^block*/id)arg1 ;
-(void)triggerExternalNotification;
-(void)dealloc;
@end

