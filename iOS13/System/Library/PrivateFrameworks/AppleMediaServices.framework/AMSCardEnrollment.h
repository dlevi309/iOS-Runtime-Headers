/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSCardEnrollment : NSObject
+(id)_paymentServicesMerchantURLPromise;
+(id)_shouldAttemptApplePayWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 ;
+(id)_currentIdentifier;
+(id)_cardEligibilityStatusForCountryCode:(id)arg1 ;
+(BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(SecAccessControlRef)arg3 ;
+(id)paymentServicesMerchantURL;
+(void)clearAutoEnrollmentIdentifier;
+(BOOL)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1 ;
+(BOOL)shouldUseAutoEnrollmentWithPercentage:(double)arg1 sessionDuration:(double)arg2 ;
+(void)updateAutoEnrollmentIdentifier;
+(BOOL)isBiometricACLUpgradeRequired;
+(BOOL)shouldAttemptAutoEnrollment;
+(BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 ;
@end

