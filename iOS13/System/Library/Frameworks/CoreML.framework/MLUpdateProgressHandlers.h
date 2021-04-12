/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLUpdateProgressHandlers : NSObject {

	long long _interestedEvents;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (assign) long long interestedEvents;              //@synthesize interestedEvents=_interestedEvents - In the implementation block
@property (copy) id progressHandler;                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(id)initForEvents:(long long)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dispatchUpdateProgressHandlerForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 onQueue:(id)arg5 ;
-(void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchTrainingCompletionHandlerWithError:(id)arg1 onQueue:(id)arg2 ;
-(long long)interestedEvents;
-(void)setInterestedEvents:(long long)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

