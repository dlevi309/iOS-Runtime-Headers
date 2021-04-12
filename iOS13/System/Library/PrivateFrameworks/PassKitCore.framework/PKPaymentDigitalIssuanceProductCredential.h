/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKServiceProviderPurchase, PKCurrencyAmount, PKPaymentSetupProduct, NSArray;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential {

	NSString* _productIdentifier;
	PKServiceProviderPurchase* _purchase;
	PKCurrencyAmount* _balance;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                   //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                        //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;              //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * balance;                          //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
-(NSArray *)metadata;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(PKCurrencyAmount *)balance;
-(void)setBalance:(PKCurrencyAmount *)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(void)setRequirementsResponse:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3 ;
@end

