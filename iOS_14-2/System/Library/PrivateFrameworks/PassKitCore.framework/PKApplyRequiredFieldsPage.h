/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class PKPaymentSetupFieldsModel;

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent {

	PKPaymentSetupFieldsModel* _fieldModel;

}

@property (nonatomic,retain) PKPaymentSetupFieldsModel * fieldModel;              //@synthesize fieldModel=_fieldModel - In the implementation block
-(PKPaymentSetupFieldsModel *)fieldModel;
-(void)setFieldModel:(PKPaymentSetupFieldsModel *)arg1 ;
-(id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 featureApplication:(id)arg3 ;
@end

