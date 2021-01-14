/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
-(void)start;
-(void)_resumeLoading;
-(void)_suspendLoading;
-(void)_setDelegateQueue:(id)arg1;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1;
-(void)cancel;

@end

