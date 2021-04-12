/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@interface AMSCardEnrollmentVerificationTask : AMSTask
+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1 ;
+(id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 ;
+(id)performPaymentVerificationForPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 ;
+(void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)verifyPayment:(id)arg1 isDefault:(BOOL)arg2 bag:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

