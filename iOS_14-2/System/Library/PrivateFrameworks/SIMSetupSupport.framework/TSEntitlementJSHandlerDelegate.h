/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@protocol TSEntitlementJSHandlerDelegate <NSObject>
@required
-(void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5;
-(void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 srcIccid:(id)arg5 alternateSDMP:(id)arg6 state:(id)arg7;
-(void)accountCancelled;
-(void)accountPendingRelease;

@end

