/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)merge:(id)arg1 ;
+(id)os_log;
+(id)observableWithError:(id)arg1 ;
+(id)observableWithBlock:(/*^block*/id)arg1 ;
+(id)emptyObservable;
+(id)observableWithResult:(id)arg1 ;
+(id)merge:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)os_log_protocol;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 scheduler:(id)arg5 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 ;
+(id)observableWithScannerResultsOfType:(unsigned long long)arg1 inString:(id)arg2 ;
+(id)observableWithFuture:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithFutures:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithRange:(NSRange)arg1 scheduler:(id)arg2 ;
+(id)observableWithResults:(id)arg1 scheduler:(id)arg2 ;
+(id)timerWithDelay:(double)arg1 scheduler:(id)arg2 ;
+(id)combineLatest:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)combineLatest:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
+(id)observableWithResults:(id)arg1 ;
+(id)amb:(id)arg1 ;
+(id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
+(id)concatenate:(id)arg1 ;
+(id)observableWithFuture:(id)arg1 ;
+(id)observableWithFutures:(id)arg1 ;
+(id)observableWithRange:(NSRange)arg1 ;
+(id)observableWithRange:(NSRange)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
+(id)observableWithResults:(id)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
+(id)neverObservable;
+(id)timerWithDelay:(double)arg1 ;
+(id)combineLatest:(id)arg1 ;
+(id)forkJoin:(id)arg1 scheduler:(id)arg2 ;
+(id)progressiveForkJoin:(id)arg1 scheduler:(id)arg2 ;
+(id)observableWithRelativeTimestamps:(id)arg1 schedulerProvider:(id)arg2 ;
+(void)sendNextTimestampFromQueue:(id)arg1 toObserver:(id)arg2 untilCanceled:(id)arg3 scheduler:(id)arg4 ;
+(id)observableWithAbsoluteTimestamps:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)observableWithScannerResultsInString:(id)arg1 ;
+(id)binderTypeForResultType:(unsigned long long)arg1 ;
+(id)scannerResultsInString:(id)arg1 ;
+(id)asyncScannerResultsInString:(id)arg1 ;
+(id)observableWithEmailAddressesInString:(id)arg1 ;
+(id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3 ;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2 ;
+(id)observableOnDarwinNotificationCenterWithName:(id)arg1 ;
+(id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 ;
-(id)timeInterval;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)publish;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)doOnError:(/*^block*/id)arg1 ;
-(id)doOnCompletion:(/*^block*/id)arg1 ;
-(id)doOnCancel:(/*^block*/id)arg1 ;
-(id)allObjects:(id*)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)doOnTerminate:(/*^block*/id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)pipelineDescription:(/*^block*/id)arg1 ;
-(id)observeOn:(id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)pipelineDescriptionWithOperation:(/*^block*/id)arg1 onObservable:(id)arg2 ;
-(id)filter:(/*^block*/id)arg1 ;
-(id)take:(unsigned long long)arg1 ;
-(id)onEmpty:(id)arg1 ;
-(id)buffer:(unsigned long long)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
-(id)bufferWithInterval:(double)arg1 scheduler:(id)arg2 ;
-(id)concatMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)subscribeOn:(id)arg1 ;
-(NSString *)debugPipelineDescription;
-(id)onErrorHandler:(/*^block*/id)arg1 ;
-(id)sample:(double)arg1 scheduler:(id)arg2 ;
-(id)sampleWithObservable:(id)arg1 ;
-(id)scan:(/*^block*/id)arg1 seed:(id)arg2 ;
-(id)startWith:(id)arg1 scheduler:(id)arg2 ;
-(id)switchWithSchedulerProvider:(id)arg1 ;
-(id)switchMap:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id)throttle:(double)arg1 options:(unsigned long long)arg2 schedulerProvider:(id)arg3 ;
-(id)timeIntervalWithScheduler:(id)arg1 ;
-(id)ambWith:(id)arg1 ;
-(id)any:(/*^block*/id)arg1 ;
-(id)buffer:(unsigned long long)arg1 ;
-(id)buffer:(unsigned long long)arg1 interval:(double)arg2 ;
-(id)bufferWithInterval:(double)arg1 ;
-(id)concatMap:(/*^block*/id)arg1 ;
-(id)delay:(double)arg1 scheduler:(id)arg2 ;
-(id)delaySubscription:(double)arg1 scheduler:(id)arg2 ;
-(id)dematerialize;
-(id)distinct;
-(id)distinctUntilChanged;
-(id)doOnNext:(/*^block*/id)arg1 ;
-(id)doOnSubscribe:(/*^block*/id)arg1 ;
-(id)ignoreElements;
-(id)materialize;
-(id)onError:(id)arg1 ;
-(id)sample:(double)arg1 ;
-(id)scan:(/*^block*/id)arg1 ;
-(id)skip:(unsigned long long)arg1 ;
-(id)skipLast:(unsigned long long)arg1 ;
-(id)skipUntil:(id)arg1 ;
-(id)startWith:(id)arg1 ;
-(id)switch;
-(id)switchMap:(/*^block*/id)arg1 ;
-(id)takeLast:(unsigned long long)arg1 ;
-(id)takeUntil:(id)arg1 ;
-(id)throttle:(double)arg1 schedulerProvider:(id)arg2 ;
-(id)throttleFirst:(double)arg1 scheduler:(id)arg2 ;
-(id)throttleFirstAndLast:(double)arg1 schedulerProvider:(id)arg2 ;
-(id)timeoutAfterDelay:(double)arg1 alternateObservable:(id)arg2 schedule:(id)arg3 ;
-(id)timestampWithScheduler:(id)arg1 ;
-(id)toArray;
-(id)using:(/*^block*/id)arg1 ;
@end

