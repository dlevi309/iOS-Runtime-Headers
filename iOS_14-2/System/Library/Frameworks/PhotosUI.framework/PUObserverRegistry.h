/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject;

@interface PUObserverRegistry : NSObject {

	NSPointerArray* __observers;
	NSObject*<OS_dispatch_queue> __observerQueue;

}

@property (nonatomic,readonly) NSPointerArray * _observers;                              //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _observerQueue;              //@synthesize _observerQueue=__observerQueue - In the implementation block
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(NSPointerArray *)_observers;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_observerQueue;
@end

