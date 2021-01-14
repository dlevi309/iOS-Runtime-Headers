/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol RBSClientProtocol
@required
-(oneway void)async_didChangeInheritances:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_assertionWillInvalidate:(id)arg1;
-(oneway void)async_willExpireAssertionsSoon;
-(oneway void)async_observedProcessExitEvents:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_observedPreventLaunchPredicatesUpdate:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2;
-(oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2;

@end

