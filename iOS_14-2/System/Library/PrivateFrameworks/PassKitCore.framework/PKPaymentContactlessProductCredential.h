/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSDictionary, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential {

	NSString* _productIdentifier;
	NSDictionary* _readerModeMetadata;
	NSString* _cardSessionToken;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                   //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * readerModeMetadata;              //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,copy) NSString * cardSessionToken;                    //@synthesize cardSessionToken=_cardSessionToken - In the implementation block
-(id)init;
-(void)setRequirementsResponse:(id)arg1 ;
-(NSString *)cardSessionToken;
-(id)initWithPaymentSetupProduct:(id)arg1 ;
-(void)setReaderModeMetadata:(NSDictionary *)arg1 ;
-(long long)_cardTypeFromSetupProductType:(unsigned long long)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2 ;
-(void)setCardSessionToken:(NSString *)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(NSDictionary *)readerModeMetadata;
@end

