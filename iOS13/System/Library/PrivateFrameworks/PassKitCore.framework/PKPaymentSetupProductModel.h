/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject {

	NSMutableDictionary* _paymentSetupProducts;

}
-(id)init;
-(id)productsForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)addPaymentSetupProducts:(id)arg1 ;
-(id)setupProductsOfType:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 ;
-(id)allSetupProducts;
@end

