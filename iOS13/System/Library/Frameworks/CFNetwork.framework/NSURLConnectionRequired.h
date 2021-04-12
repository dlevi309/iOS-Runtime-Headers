/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
-(void)cancel;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setDelegateQueue:(id)arg1;
-(void)_setShouldSkipCancelOnRelease:(BOOL)arg1;

@end

