/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)deviceUnlockedSinceBoot;
-(BOOL)isProtectedDataAvailable;
-(id)classDStrategy;
-(id)classCStrategy;
-(void)addContentProtectionObserver:(id)arg1 ;
-(long long)_queue_keyBagLockState;
-(void)_queue_adjustContentProtectionStateWithBlock:(/*^block*/id)arg1 ;
-(long long)_queue_observedState;
-(long long)observedState;
-(id)contentProtectionStrategyForMinimumProtection:(id)arg1 ;
-(void)removeContentProtectionObserver:(id)arg1 ;
@end

