/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKProtobufPeerPaymentMessage, MSMessage, NSUUID, NSString, NSDecimalNumber, PKCurrencyAmount, PKPeerPaymentRequestToken;

@interface PKPeerPaymentMessage : NSObject {

	PKProtobufPeerPaymentMessage* _protoMessage;
	MSMessage* _underlyingMessage;

}

@property (nonatomic,readonly) MSMessage * underlyingMessage;                     //@synthesize underlyingMessage=_underlyingMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenSent; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,copy) NSString * currency; 
@property (nonatomic,copy) NSDecimalNumber * amount; 
@property (nonatomic,copy) PKCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * senderAddress; 
@property (nonatomic,copy) NSString * recipientAddress; 
@property (nonatomic,copy) PKPeerPaymentRequestToken * requestToken; 
@property (nonatomic,copy) NSString * paymentIdentifier; 
@property (nonatomic,copy) NSString * transactionIdentifier; 
@property (nonatomic,copy) NSString * memo; 
-(id)init;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(id)initWithType:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)transactionIdentifier;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(PKPeerPaymentRequestToken *)requestToken;
-(void)setRequestToken:(PKPeerPaymentRequestToken *)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)recipientAddress;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(void)setMemo:(NSString *)arg1 ;
-(NSString *)paymentIdentifier;
-(NSString *)memo;
-(id)_requestDeviceScoreIdentifier;
-(id)initWithType:(unsigned long long)arg1 session:(id)arg2 ;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;
-(void)_updateSummaryText;
-(MSMessage *)underlyingMessage;
-(BOOL)hasBeenSent;
-(void)updateWithPeerPaymentPerformResponse:(id)arg1 ;
@end

