/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)status;
-(id)errors;
-(PKPaymentPass *)pass;
-(PKPaymentApplication *)paymentApplication;
-(PKCurrencyAmount *)peerPaymentBalance;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(CNContact *)billingAddress;
-(void)setShowPeerPaymentBalance:(BOOL)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)requiresBillingAddress;
-(BOOL)shouldShowCardArt;
-(BOOL)showPeerPaymentBalance;
@end

