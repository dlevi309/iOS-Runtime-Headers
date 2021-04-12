/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKInstallmentPlan, PKAccount, PKPaymentPass, NSString;

@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem> {

	PKInstallmentPlan* _installmentPlan;
	PKAccount* _account;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,retain) PKInstallmentPlan * installmentPlan;              //@synthesize installmentPlan=_installmentPlan - In the implementation block
@property (nonatomic,retain) PKAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                      //@synthesize paymentPass=_paymentPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKInstallmentPlan *)installmentPlan;
-(void)setInstallmentPlan:(PKInstallmentPlan *)arg1 ;
@end

