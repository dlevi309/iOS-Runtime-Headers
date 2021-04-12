/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
*/


@interface FMIPCore.FMIPBeaconRefreshingController : _UKNOWN_SUPERCLASS_ {

	 delegate;
	 beacons;
	 unknownBeacons;
	 ownerSession;
	 refreshQueue;
	 callbackInterval;
	 defaultCallbackInterval;
	 initialCallbackInterval;
	??? lastRefreshTime;
	 refreshTimer;
	 isRefreshing;

}
-(void)handleBeaconsChanged;
@end

