/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(long long)interestedEvents;
-(void)setInterestedEvents:(long long)arg1 ;
-(id)initForEvents:(long long)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dispatchUpdateProgressHandlerForEvent:(long long)arg1 metrics:(id)arg2 parameters:(id)arg3 error:(id)arg4 onQueue:(id)arg5 ;
-(void)dispatchTrainingBeginProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchEpochEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchMiniBatchEndProgressHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchTrainingCompletionHandlerWithMetrics:(id)arg1 parameters:(id)arg2 onQueue:(id)arg3 ;
-(void)dispatchTrainingCompletionHandlerWithError:(id)arg1 onQueue:(id)arg2 ;
-(id)completionHandler;
-(id)description;
-(void)setProgressHandler:(id)arg1 ;
-(id)progressHandler;
@end

