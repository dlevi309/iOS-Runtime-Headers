/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPeerPaymentAccount, PKPeerPaymentPassDetailsResponse, PKCurrencyAmount;

@interface PKPeerPaymentCredential : PKPaymentCredential {

	NSString* _pendingPaymentSenderName;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentPassDetailsResponse* _passDetailsResponse;
	PKCurrencyAmount* _amount;
	unsigned long long _state;
	NSString* _pendingPaymentSenderAddress;

}

@property (nonatomic,readonly) PKPeerPaymentAccount * account;                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPeerPaymentPassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
@property (nonatomic,retain) PKCurrencyAmount * amount;                                           //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * pendingPaymentSenderAddress;                                //@synthesize pendingPaymentSenderAddress=_pendingPaymentSenderAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingPaymentSenderName; 
-(PKPeerPaymentAccount *)account;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(id)initWithPeerPaymentAccount:(id)arg1 ;
-(PKPeerPaymentPassDetailsResponse *)passDetailsResponse;
-(NSString *)pendingPaymentSenderName;
-(NSString *)pendingPaymentSenderAddress;
-(void)setPendingPaymentSenderAddress:(NSString *)arg1 ;
-(id)longDescription;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(PKCurrencyAmount *)amount;
-(void)setPassDetailsResponse:(PKPeerPaymentPassDetailsResponse *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

