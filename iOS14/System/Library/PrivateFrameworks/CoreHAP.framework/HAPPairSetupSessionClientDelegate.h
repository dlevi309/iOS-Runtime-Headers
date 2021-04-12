/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
@optional
-(void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2;
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
-(BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;

@required
-(void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg2;

@end

