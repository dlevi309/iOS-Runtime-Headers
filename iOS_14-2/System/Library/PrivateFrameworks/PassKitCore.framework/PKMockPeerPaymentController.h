/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentController.h>

@class PKCurrencyAmount;

@interface PKMockPeerPaymentController : PKPeerPaymentController {

	id _performCompletion;
	BOOL _shouldGenerateMockTransactions;
	PKCurrencyAmount* _mockBalance;

}

@property (nonatomic,retain) PKCurrencyAmount * mockBalance;                   //@synthesize mockBalance=_mockBalance - In the implementation block
@property (assign,nonatomic) BOOL shouldGenerateMockTransactions;              //@synthesize shouldGenerateMockTransactions=_shouldGenerateMockTransactions - In the implementation block
-(id)initWithPeerPaymentWebService:(id)arg1 ;
-(void)setMockBalance:(PKCurrencyAmount *)arg1 ;
-(id)_quoteItemDictionaryWithType:(unsigned long long)arg1 amount:(id)arg2 alternateFundingSource:(id)arg3 featureDescriptor:(id)arg4 ;
-(void)_adjustBalanceForAuthorizedTransferQuote:(id)arg1 ;
-(void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)arg1 ;
-(PKCurrencyAmount *)mockBalance;
-(void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)formalRequestTokenForAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)arg1 ;
-(void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldGenerateMockTransactions;
-(void)setShouldGenerateMockTransactions:(BOOL)arg1 ;
-(void)paymentAuthorizationCoordinator:(id*)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id*)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

