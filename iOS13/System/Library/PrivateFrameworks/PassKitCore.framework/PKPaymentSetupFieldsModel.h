/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;
	PKPaymentSetupFieldFooter* _footerField;

}
+(id)fakePaymentSetupProvisioningFields;
+(id)defaultPaymentSetupProvisioningFields;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(void)resetAllPaymentSetupFieldValues;
-(void)prefillDefaultValues;
-(id)incompletePaymentSetupFields;
-(id)footerPaymentSetupField;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(id)paymentSetupFields;
-(id)paymentSetupFieldIdentifiers;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(BOOL)hasIncompletePaymentSetupFields;
-(id)submissionValuesForDestination:(id)arg1 ;
-(BOOL)hasFooterPaymentSetupField;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
@end

