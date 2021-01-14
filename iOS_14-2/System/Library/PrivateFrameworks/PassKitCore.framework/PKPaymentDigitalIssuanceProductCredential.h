/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKCurrencyAmount *)balance;
-(PKServiceProviderPurchase *)purchase;
-(void)setRequirementsResponse:(id)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3 ;
-(void)setBalance:(PKCurrencyAmount *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(NSArray *)metadata;
@end

