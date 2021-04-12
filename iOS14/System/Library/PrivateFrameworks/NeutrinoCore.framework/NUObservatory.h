/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface NUObservatory : NSObject {

	NSObject*<OS_dispatch_queue> _serializer;
	NSMutableArray* _observations;

}
-(void)_removeObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)addObserverForKey:(long long)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_addObservation:(id)arg1 ;
-(void)_removeObserver:(id)arg1 forKey:(long long)arg2 ;
-(void)notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_notifyAllObserversForKey:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

