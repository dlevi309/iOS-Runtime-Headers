/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUReportingControllerXPCServer <NSObject>
@required
-(oneway void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(/*^block*/id)arg3;
-(oneway void)didCleanUpForStream:(long long)arg1 reply:(/*^block*/id)arg2;
-(oneway void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(/*^block*/id)arg3;

@end

