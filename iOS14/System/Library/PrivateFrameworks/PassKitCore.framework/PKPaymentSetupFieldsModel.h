/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;
	PKPaymentSetupFieldFooter* _footerField;

}
+(id)fakePaymentSetupProvisioningFields;
+(id)defaultPaymentSetupProvisioningFields;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(void)prefillDefaultValues;
-(void)resetAllPaymentSetupFieldValues;
-(id)incompletePaymentSetupFields;
-(id)footerPaymentSetupField;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
-(id)paymentSetupFields;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(id)paymentSetupFieldIdentifiers;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(BOOL)hasIncompletePaymentSetupFields;
-(id)submissionValuesForDestination:(id)arg1 ;
-(BOOL)hasFooterPaymentSetupField;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
@end

