/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSObject, UNSKeyedObservable;

@interface UNSContentProtectionManager : NSObject {

	long long _contentProtectionState;
	BOOL _unlockedSinceBoot;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	UNSKeyedObservable* _observable;

}
-(void)_queue_adjustContentProtectionStateWithBlock:(/*^block*/id)arg1 ;
-(id)contentProtectionStrategyForMinimumProtection:(id)arg1 ;
-(id)init;
-(id)classCStrategy;
-(id)classDStrategy;
-(void)removeContentProtectionObserver:(id)arg1 ;
-(long long)observedState;
-(long long)_queue_keyBagLockState;
-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)isProtectedDataAvailable;
-(void)addContentProtectionObserver:(id)arg1 ;
-(long long)_queue_observedState;
-(void)dealloc;
@end

