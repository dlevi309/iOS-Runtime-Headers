/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class PKPaymentSetupFieldsModel;

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent {

	PKPaymentSetupFieldsModel* _fieldModel;

}

@property (nonatomic,retain) PKPaymentSetupFieldsModel * fieldModel;              //@synthesize fieldModel=_fieldModel - In the implementation block
-(id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 featureApplication:(id)arg3 ;
-(PKPaymentSetupFieldsModel *)fieldModel;
-(void)setFieldModel:(PKPaymentSetupFieldsModel *)arg1 ;
@end

