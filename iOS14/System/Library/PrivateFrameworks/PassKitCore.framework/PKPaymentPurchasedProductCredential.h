/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKPaymentSetupProduct, NSString, PKServiceProviderPurchase, NSArray;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential {

	PKPaymentSetupProduct* _product;
	NSString* _productIdentifier;
	PKServiceProviderPurchase* _purchase;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                           //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) PKServiceProviderPurchase * purchase;                    //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
@property (nonatomic,copy,readonly) NSString * statusDescription; 
@property (nonatomic,copy,readonly) NSString * summaryMetadataDescription; 
-(PKServiceProviderPurchase *)purchase;
-(void)setRequirementsResponse:(id)arg1 ;
-(NSString *)summaryMetadataDescription;
-(id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(NSString *)statusDescription;
-(NSArray *)metadata;
@end

