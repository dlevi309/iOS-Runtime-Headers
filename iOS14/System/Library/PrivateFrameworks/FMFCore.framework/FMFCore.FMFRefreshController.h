/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
*/


@interface FMFCore.FMFRefreshController : _UKNOWN_SUPERCLASS_ {

	 delegate;
	 refreshReason;
	 interactionController;
	 apsConnectionHandler;
	 tapContexts;
	 refreshQueue;
	 callbackInterval;
	 minCallbackInterval;
	 maxCallbackInterval;
	 refreshTimer;
	 initializedOnce;
	 firstRefreshCompleted;
	 isRefreshing;

}
-(void)refreshTimerFired;
@end

