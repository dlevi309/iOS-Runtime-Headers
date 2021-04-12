/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
@optional
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
-(BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;

@required
-(void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg2;

@end

