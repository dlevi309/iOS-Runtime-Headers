/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject {

	NSMutableDictionary* _paymentSetupProducts;

}
-(id)init;
-(id)allSetupProducts;
-(void)setPaymentSetupProducts:(id)arg1 ;
-(id)productsForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)addPaymentSetupProducts:(id)arg1 ;
-(id)productForProductIdentifier:(id)arg1 ;
-(id)setupProductsOfType:(unsigned long long)arg1 ;
@end

