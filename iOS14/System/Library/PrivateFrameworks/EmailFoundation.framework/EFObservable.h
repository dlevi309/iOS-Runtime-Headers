/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@interface EFObservable : NSObject
+(id)merge:(id)arg1 ;
+(id)observableWithResult:(id)arg1 ;
+(id)concatenate:(id)arg1 ;
+(id)observableWithFuture:(id)arg1 ;
+(id)emptyObservable;
+(id)observableAfterDelay:(double)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
+(id)observableOnNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3 ;
+(id)observableAfterDelay:(double)arg1 scheduler:(id)arg2 ;
+(id)observableOnNotifyTokenWithName:(id)arg1 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 scheduler:(id)arg5 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
+(id)observableObserver;
+(id)neverObservable;
+(id)observableWithResults:(id)arg1 ;
+(id)observableWithResults:(id)arg1 scheduler:(id)arg2 ;
+(id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
+(id)combineLatest:(id)arg1 ;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2 ;
+(id)observableWithError:(id)arg1 ;
+(id)observableWithBlock:(/*^block*/id)arg1 ;
-(id)allObjects:(id*)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)first;
-(id)take:(unsigned long long)arg1 ;
-(id)skip:(unsigned long long)arg1 ;
-(id)filter:(/*^block*/id)arg1 ;
-(id)startWith:(id)arg1 ;
-(id)observeOn:(id)arg1 ;
-(id)subscribeOn:(id)arg1 ;
-(id)replay;
-(id)debounceWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
-(id)debounceWithTimeInterval:(double)arg1 ;
-(id)replay:(unsigned long long)arg1 ;
-(id)publish;
-(id)multicast:(id)arg1 ;
-(id)sampleWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
-(id)sampleWithTimeInterval:(double)arg1 ;
-(id)doOnTerminate:(/*^block*/id)arg1 ;
-(id)sampleWithObservable:(id)arg1 ;
-(id)startWith:(id)arg1 scheduler:(id)arg2 ;
-(id)delay:(double)arg1 scheduler:(id)arg2 ;
-(id)distinctUntilChanged;
-(id)doOnSubscribe:(/*^block*/id)arg1 ;
-(id)doOnNext:(/*^block*/id)arg1 ;
-(id)subscribeWithResultBlock:(/*^block*/id)arg1 ;
-(id)doOnError:(/*^block*/id)arg1 ;
-(id)doOnCancel:(/*^block*/id)arg1 ;
-(id)doOnCompletion:(/*^block*/id)arg1 ;
@end

