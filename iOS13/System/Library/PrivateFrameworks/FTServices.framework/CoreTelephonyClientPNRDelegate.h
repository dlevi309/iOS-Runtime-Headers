/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@protocol CoreTelephonyClientPNRDelegate <NSObject>
@optional
-(void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2;
-(void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2;
-(void)context:(id)arg1 pnrSupportChanged:(BOOL)arg2;

@end

