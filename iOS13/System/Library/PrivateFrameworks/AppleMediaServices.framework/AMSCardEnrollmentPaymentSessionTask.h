/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_bagKeySet;
+(id)performPaymentSessionEnrollment;
+(id)performPaymentSessionEnrollmentWithBag:(id)arg1 ;
+(id)_paymentServiceURLStringForMerchantURL:(id)arg1 ;
+(id)_performSilentEnrollmentPaymentSessionWithContext:(id)arg1 ;
+(void)paymentSessionWithCompletion:(/*^block*/id)arg1 ;
+(void)paymentSessionWithBag:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

