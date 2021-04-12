/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSDictionary, NSArray, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerChooseCredentialsStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _allowsManualEntry;
	NSDictionary* _flowIdentifierToCredential;
	NSArray* _flowIdentifiers;
	NSArray* _credentials;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) NSDictionary * flowIdentifierToCredential;              //@synthesize flowIdentifierToCredential=_flowIdentifierToCredential - In the implementation block
@property (nonatomic,retain) NSArray * flowIdentifiers;                              //@synthesize flowIdentifiers=_flowIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * credentials;                                    //@synthesize credentials=_credentials - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                 //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * product;                        //@synthesize product=_product - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCredentials:(NSArray *)arg1 ;
-(NSArray *)credentials;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(BOOL)allowsManualEntry;
-(void)setFlowIdentifiers:(NSArray *)arg1 ;
-(void)setFlowIdentifierToCredential:(NSDictionary *)arg1 ;
-(NSArray *)flowIdentifiers;
-(NSDictionary *)flowIdentifierToCredential;
@end

