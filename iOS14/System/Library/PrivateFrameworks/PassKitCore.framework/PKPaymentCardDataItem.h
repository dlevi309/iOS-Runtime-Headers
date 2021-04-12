/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKCurrencyAmount, PKPaymentPass, PKPaymentApplication, CNContact;

@interface PKPaymentCardDataItem : PKPaymentDataItem {

	BOOL _showPeerPaymentBalance;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (assign,nonatomic) BOOL showPeerPaymentBalance;                              //@synthesize showPeerPaymentBalance=_showPeerPaymentBalance - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;                    //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
@property (nonatomic,readonly) BOOL shouldShowCardArt; 
+(long long)dataType;
-(PKCurrencyAmount *)peerPaymentBalance;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(PKPaymentPass *)pass;
-(id)errors;
-(PKPaymentApplication *)paymentApplication;
-(CNContact *)billingAddress;
-(void)setShowPeerPaymentBalance:(BOOL)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)paymentContactFormatErrors;
-(BOOL)shouldShowCardArt;
-(BOOL)requiresBillingAddress;
-(BOOL)showPeerPaymentBalance;
-(long long)status;
@end

