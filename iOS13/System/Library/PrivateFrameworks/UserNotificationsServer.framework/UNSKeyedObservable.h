/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSKeyedObservable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _observersByKey;

}
-(void)addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_observersForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 callOutQueue:(id)arg2 ;
-(void)notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

