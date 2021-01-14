/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSKeyedObservable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _observersByKey;

}
-(void)removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)addObserver:(id)arg1 forKey:(id)arg2 ;
-(id)_observersForKey:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 callOutQueue:(id)arg2 ;
-(void)notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_queue_addObserver:(id)arg1 forKey:(id)arg2 ;
@end

