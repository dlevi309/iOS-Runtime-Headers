/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@interface PKPaymentNotificationAppURLHelper : NSObject
+(id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 pathSuffix:(id)arg5 usingDeviceAccountNumber:(BOOL)arg6 ;
+(BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1 ;
+(id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3 ;
+(id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3 ;
+(id)appURLForTransactionNotification:(id)arg1 excludeTransactionIdentifier:(BOOL)arg2 pass:(id)arg3 pathSuffix:(id)arg4 appLaunchToken:(id)arg5 ;
@end

