/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithType:(unsigned long long)arg1 ;
-(NSString *)memo;
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(NSString *)recipientAddress;
-(NSString *)paymentIdentifier;
-(id)_requestDeviceScoreIdentifier;
-(PKPeerPaymentRequestToken *)requestToken;
-(void)setRequestToken:(PKPeerPaymentRequestToken *)arg1 ;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)currency;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setMemo:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(unsigned long long)type;
-(NSDecimalNumber *)amount;
-(NSUUID *)identifier;
-(NSString *)transactionIdentifier;
-(void)setCurrency:(NSString *)arg1 ;
-(void)_updateDataURL;
-(id)initWithType:(unsigned long long)arg1 session:(id)arg2 ;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateLayoutContents;
-(void)_updateSummaryText;
-(MSMessage *)underlyingMessage;
-(BOOL)hasBeenSent;
-(void)updateWithPeerPaymentPerformResponse:(id)arg1 ;
@end

