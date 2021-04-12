/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
*/


@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>
@optional
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithError:(id)arg3;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;
-(void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

