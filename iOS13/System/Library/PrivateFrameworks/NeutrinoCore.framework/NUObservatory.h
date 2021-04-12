/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUObservatory : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableArray* _observations;

}
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(id)addObserverForKey:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_addObservation:(id)arg1 ;
-(void)_removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

