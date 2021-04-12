/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(NSDictionary *)readerModeMetadata;
-(void)setRequirementsResponse:(id)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setReaderModeMetadata:(NSDictionary *)arg1 ;
-(long long)_cardTypeFromSetupProductType:(unsigned long long)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 cardSessionToken:(id)arg2 ;
-(NSString *)cardSessionToken;
-(void)setCardSessionToken:(NSString *)arg1 ;
-(PKPaymentSetupProduct *)product;
@end

