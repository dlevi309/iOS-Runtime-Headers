/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask
+(id)performPaymentSessionEnrollment;
+(id)performPaymentSessionEnrollmentWithBag:(id)arg1 ;
+(id)_paymentServiceURLStringForMerchantURL:(id)arg1 ;
+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1 ;
+(void)paymentSessionWithCompletion:(/*^block*/id)arg1 ;
+(void)paymentSessionWithBag:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

