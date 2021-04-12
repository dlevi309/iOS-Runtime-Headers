/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUEmergencyCoreTelephonyClient <TUCoreTelephonyClient>
@required
-(BOOL)inEmergencyMode;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id*)arg2;

@end

