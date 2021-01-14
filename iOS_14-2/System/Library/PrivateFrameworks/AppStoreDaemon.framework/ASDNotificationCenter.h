/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDNotificationServiceProtocol.h>

@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _notificationObservers;
	os_unfair_lock_s _observerLock;
	NSHashTable* _progressObservers;
	id<ASDNotificationCenterDialogObserver> _dialogObserver;

}

@property (__weak) id<ASDNotificationCenterDialogObserver> dialogObserver;              //@synthesize dialogObserver=_dialogObserver - In the implementation block
+(id)defaultCenter;
+(id)interface;
-(void)removeProgressObserver:(id)arg1 ;
-(id<ASDNotificationCenterDialogObserver>)dialogObserver;
-(id)init;
-(void)deliverEngagementRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)addNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)setDialogObserver:(id<ASDNotificationCenterDialogObserver>)arg1 ;
-(void)addProgressObserver:(id)arg1 ;
-(void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverDialogRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverProgress:(id)arg1 ;
-(void)removeNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)deliverNotifications:(id)arg1 ;
@end

