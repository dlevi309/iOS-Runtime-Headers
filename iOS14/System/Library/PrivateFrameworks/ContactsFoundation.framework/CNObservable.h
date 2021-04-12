/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNObservable.h>

@protocol CNObservable <NSObject>
@required
-(id)subscribe:(id)arg1;

@end


@class NSString;

@interface CNObservable : NSObject <CNObservable> {

	NSString* _pipelineDescription;

}

@property (nonatomic,readonly) NSString * debugPipelineDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)amb:(id)arg1 ;
+(id)merge:(id)arg1 ;
+(id)merge:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithResult:(id)arg1 ;
+(id)concatenate:(id)arg1 ;
+(id)observableWithFuture:(id)arg1 ;
+(id)emptyObservable;
+(id)os_log_protocol;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 scheduler:(id)arg5 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 ;
+(id)observableWithScannerResultsOfType:(unsigned long long)arg1 inString:(id)arg2 ;
+(id)neverObservable;
+(id)timerWithDelay:(double)arg1 scheduler:(id)arg2 ;
+(id)observableWithRange:(NSRange)arg1 scheduler:(id)arg2 ;
+(id)observableWithFuture:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithFutures:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithResults:(id)arg1 ;
+(id)observableWithResults:(id)arg1 scheduler:(id)arg2 ;
+(id)combineLatest:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)combineLatest:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
+(id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
+(id)timerWithDelay:(double)arg1 ;
+(id)observableWithFutures:(id)arg1 ;
+(id)observableWithRange:(NSRange)arg1 ;
+(id)observableWithRange:(NSRange)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
+(id)combineLatest:(id)arg1 ;
+(id)observableWithResults:(id)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
+(id)forkJoin:(id)arg1 scheduler:(id)arg2 ;
+(id)progressiveForkJoin:(id)arg1 scheduler:(id)arg2 ;
+(id)observableWithScannerResultsInString:(id)arg1 ;
+(id)observableWithRelativeTimestamps:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithAbsoluteTimestamps:(id)arg1 schedulerProvider:(id)arg2 ;
+(void)sendNextTimestampFromQueue:(id)arg1 toObserver:(id)arg2 untilCanceled:(id)arg3 scheduler:(id)arg4 ;
+(id)binderTypeForResultType:(unsigned long long)arg1 ;
+(id)scannerResultsInString:(id)arg1 ;
+(id)asyncScannerResultsInString:(id)arg1 ;
+(id)observableWithEmailAddressesInString:(id)arg1 ;
+(id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3 ;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2 ;
+(id)observableWithError:(id)arg1 ;
+(id)observableOnDarwinNotificationCenterWithName:(id)arg1 ;
+(id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 ;
+(id)os_log;
+(id)observableWithBlock:(/*^block*/id)arg1 ;
-(id)localObservableWithScheduler:(id)arg1 doOnTimeout:(/*^block*/id)arg2 ;
-(id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(/*^block*/id)arg2 scheduler:(id)arg3 ;
-(id)activityIndicatingObservableWithActivityDidStartHandler:(/*^block*/id)arg1 activityDidStopHandler:(/*^block*/id)arg2 ;
-(id)localObservableWithScheduler:(id)arg1 ;
-(id)networkObservableWithActivityDidStartHandler:(/*^block*/id)arg1 activityDidStopHandler:(/*^block*/id)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5 ;
-(id)allObjects:(id*)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)any:(/*^block*/id)arg1 ;
-(id)take:(unsigned long long)arg1 ;
-(id)scan:(/*^block*/id)arg1 seed:(id)arg2 ;
-(id)switch;
-(id)using:(/*^block*/id)arg1 ;
-(id)throttle:(double)arg1 schedulerProvider:(id)arg2 ;
-(id)scan:(/*^block*/id)arg1 ;
-(id)skip:(unsigned long long)arg1 ;
-(NSString *)debugPipelineDescription;
-(id)filter:(/*^block*/id)arg1 ;
-(id)buffer:(unsigned long long)arg1 ;
-(id)sample:(double)arg1 ;
-(id)startWith:(id)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)timeInterval;
-(id)observeOn:(id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)subscribeOn:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)onEmpty:(id)arg1 ;
-(id)ambWith:(id)arg1 ;
-(id)toArray;
-(id)pipelineDescription:(/*^block*/id)arg1 ;
-(id)onError:(id)arg1 ;
-(id)onErrorHandler:(/*^block*/id)arg1 ;
-(id)publish;
-(id)doOnTerminate:(/*^block*/id)arg1 ;
-(id)materialize;
-(id)switchMap:(/*^block*/id)arg1 ;
-(id)concatMap:(/*^block*/id)arg1 ;
-(id)takeUntil:(id)arg1 ;
-(id)sample:(double)arg1 scheduler:(id)arg2 ;
-(id)pipelineDescriptionWithOperation:(/*^block*/id)arg1 onObservable:(id)arg2 ;
-(id)sampleWithObservable:(id)arg1 ;
-(id)buffer:(unsigned long long)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
-(id)bufferWithInterval:(double)arg1 scheduler:(id)arg2 ;
-(id)concatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)startWith:(id)arg1 scheduler:(id)arg2 ;
-(id)switchWithSchedulerProvider:(id)arg1 ;
-(id)switchMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)throttle:(double)arg1 options:(unsigned long long)arg2 schedulerProvider:(id)arg3 ;
-(id)timeIntervalWithScheduler:(id)arg1 ;
-(id)skipUntil:(id)arg1 ;
-(id)buffer:(unsigned long long)arg1 interval:(double)arg2 ;
-(id)bufferWithInterval:(double)arg1 ;
-(id)delay:(double)arg1 scheduler:(id)arg2 ;
-(id)delaySubscription:(double)arg1 scheduler:(id)arg2 ;
-(id)dematerialize;
-(id)distinctUntilChanged;
-(id)doOnSubscribe:(/*^block*/id)arg1 ;
-(id)ignoreElements;
-(id)throttleFirst:(double)arg1 scheduler:(id)arg2 ;
-(id)throttleFirstAndLast:(double)arg1 schedulerProvider:(id)arg2 ;
-(id)timeoutAfterDelay:(double)arg1 alternateObservable:(id)arg2 schedule:(id)arg3 ;
-(id)timestampWithScheduler:(id)arg1 ;
-(id)doOnNext:(/*^block*/id)arg1 ;
-(id)distinct;
-(id)skipLast:(unsigned long long)arg1 ;
-(id)takeLast:(unsigned long long)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)doOnError:(/*^block*/id)arg1 ;
-(id)doOnCancel:(/*^block*/id)arg1 ;
-(id)doOnCompletion:(/*^block*/id)arg1 ;
@end

