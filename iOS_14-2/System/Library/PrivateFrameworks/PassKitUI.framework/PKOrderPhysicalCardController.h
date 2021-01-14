/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSetupFlowControllerProtocol.h>

@protocol PKSetupFlowControllerProtocol;
@class PKAccountService, PKPaymentWebService, PKAccount, PKPhysicalCard, NSArray, PKAccountWebServiceRequestPhysicalCardRequest, PKAccountWebServicePhysicalCardActionRequest, PKPaymentPass, NSString, PKPhysicalCardArtworkOption, CNPostalAddress;

@interface PKOrderPhysicalCardController : NSObject <PKSetupFlowControllerProtocol> {

	PKAccountService* _accountService;
	PKPaymentWebService* _paymentWebService;
	PKAccount* _account;
	unsigned long long _orderReason;
	PKPhysicalCard* _physicalCardToReplace;
	NSArray* _priceOptions;
	PKAccountWebServiceRequestPhysicalCardRequest* _physicalCardRequest;
	PKAccountWebServicePhysicalCardActionRequest* _replacePhysicalCardRequest;
	unsigned long long _featureIdentifier;
	long long _paymentSetupContext;
	PKPaymentPass* _paymentPass;
	NSString* _nameOnCard;
	NSArray* _artworkOptions;
	PKPhysicalCardArtworkOption* _selectedArtworkOption;
	CNPostalAddress* _shippingAddress;
	id<PKSetupFlowControllerProtocol> _parentFlowController;

}

@property (nonatomic,readonly) unsigned long long featureIdentifier;                              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,readonly) long long paymentSetupContext;                                     //@synthesize paymentSetupContext=_paymentSetupContext - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass;                                       //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                                                 //@synthesize nameOnCard=_nameOnCard - In the implementation block
@property (nonatomic,copy) NSArray * artworkOptions;                                              //@synthesize artworkOptions=_artworkOptions - In the implementation block
@property (nonatomic,retain) PKPhysicalCardArtworkOption * selectedArtworkOption;                 //@synthesize selectedArtworkOption=_selectedArtworkOption - In the implementation block
@property (nonatomic,retain) CNPostalAddress * shippingAddress;                                   //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) id<PKSetupFlowControllerProtocol> parentFlowController;              //@synthesize parentFlowController=_parentFlowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(id)_priceForRequestingPhysicalCard;
-(id)initWithAccountService:(id)arg1 paymentWebService:(id)arg2 paymentPass:(id)arg3 account:(id)arg4 orderReason:(unsigned long long)arg5 context:(long long)arg6 currentPhysicalCard:(id)arg7 ;
-(void)updateCustomizationOptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setArtworkOptions:(NSArray *)arg1 ;
-(void)setSelectedArtworkOption:(PKPhysicalCardArtworkOption *)arg1 ;
-(id)_paymentRequest;
-(NSArray *)artworkOptions;
-(unsigned long long)featureIdentifier;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(CNPostalAddress *)shippingAddress;
-(void)setShippingAddress:(CNPostalAddress *)arg1 ;
-(void)setNameOnCard:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)nameOnCard;
-(long long)paymentSetupContext;
-(PKPhysicalCardArtworkOption *)selectedArtworkOption;
-(void)startOrderPhysicalCardWithCompletion:(/*^block*/id)arg1 ;
-(void)completeOrderPhysicalCardWithApplePayTrustSignature:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

