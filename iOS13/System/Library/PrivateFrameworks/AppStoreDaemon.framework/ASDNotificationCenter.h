/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)addProgressObserver:(id)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)removeNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)addNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverDialogRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverNotifications:(id)arg1 ;
-(void)deliverProgress:(id)arg1 ;
-(id<ASDNotificationCenterDialogObserver>)dialogObserver;
-(void)setDialogObserver:(id<ASDNotificationCenterDialogObserver>)arg1 ;
@end

