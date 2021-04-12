/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNObserver : NSObject
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(id)observerWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 untilCanceled:(id)arg4 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithWeakTarget:(id)arg1 resultSelector:(SEL)arg2 ;
+(void)sendResult:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
@end

