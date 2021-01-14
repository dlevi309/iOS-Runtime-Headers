/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol CoreTelephonyClientPNRDelegate <NSObject>
@optional
-(void)pnrRequestSent:(id)arg1 pnrReqData:(id)arg2;
-(void)pnrResponseReceived:(id)arg1 pnrRspData:(id)arg2;
-(void)pnrReadyStateNotification:(id)arg1 regState:(BOOL)arg2;
-(void)context:(id)arg1 pnrSupportChanged:(BOOL)arg2;

@end

