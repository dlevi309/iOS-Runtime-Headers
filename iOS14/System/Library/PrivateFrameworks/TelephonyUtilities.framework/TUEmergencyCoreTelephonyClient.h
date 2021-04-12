/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUEmergencyCoreTelephonyClient <TUCoreTelephonyClient>
@required
-(BOOL)inEmergencyMode;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id*)arg2;

@end

