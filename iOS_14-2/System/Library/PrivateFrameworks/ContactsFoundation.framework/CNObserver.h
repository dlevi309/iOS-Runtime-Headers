/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNObserver : NSObject
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 untilCanceled:(id)arg4 ;
+(id)blockObserverOfClass:(Class)arg1 withResultBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
+(void)sendResult:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithWeakTarget:(id)arg1 resultSelector:(SEL)arg2 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

