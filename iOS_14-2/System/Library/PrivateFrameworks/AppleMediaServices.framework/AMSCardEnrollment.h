/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSCardEnrollment : NSObject
+(void)updateAutoEnrollmentIdentifier;
+(id)_cardEligibilityStatusForCountryCode:(id)arg1 ;
+(void)clearAutoEnrollmentIdentifier;
+(void)finishCardEnrollmentAttemptWithBag:(id)arg1 buyParams:(id)arg2 purchaseResult:(id)arg3 ;
+(BOOL)shouldUseAutoEnrollmentWithPercentage:(double)arg1 sessionDuration:(double)arg2 ;
+(id)_paymentServicesMerchantURLPromise;
+(BOOL)shouldAttemptAutoEnrollment;
+(BOOL)shouldAttemptAutoEnrollmentWithCountryCode:(id)arg1 ;
+(id)paymentServicesMerchantURL;
+(BOOL)shouldAttemptAutoEnrollmentWithBag:(id)arg1 accessControlRef:(SecAccessControlRef)arg2 ;
+(BOOL)beginCardEnrollmentAttemptWithBag:(id)arg1 account:(id)arg2 ;
+(BOOL)shouldUseAutoEnrollmentWithBag:(id)arg1 ;
+(BOOL)shouldAttemptApplePayClassicWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 accessControlRef:(SecAccessControlRef)arg3 ;
+(id)_currentIdentifier;
+(BOOL)shouldAttemptApplePayClassicWithBag:(id)arg1 accessControlRef:(SecAccessControlRef)arg2 ;
+(id)_shouldAttemptApplePayWithCountryCode:(id)arg1 paymentNetworks:(id)arg2 ;
+(BOOL)shouldUseApplePayClassicWithBag:(id)arg1 ;
@end

