/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUReportingControllerDataSource <NSObject>
@required
-(void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(/*^block*/id)arg3;
-(void)didCleanUpForStream:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(/*^block*/id)arg3;

@end

