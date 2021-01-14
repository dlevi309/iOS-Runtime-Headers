/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufPeerPaymentMessage : PBCodable <NSCopying> {

	long long _amount;
	NSString* _currency;
	NSString* _identifier;
	NSString* _memo;
	NSString* _paymentIdentifier;
	NSString* _recipientAddress;
	NSString* _requestDeviceScoreIdentifier;
	NSString* _requestToken;
	NSString* _senderAddress;
	NSString* _transactionIdentifier;
	int _type;
	unsigned _version;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrency; 
@property (nonatomic,retain) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) long long amount;                                     //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasSenderAddress; 
@property (nonatomic,retain) NSString * senderAddress;                             //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipientAddress; 
@property (nonatomic,retain) NSString * recipientAddress;                          //@synthesize recipientAddress=_recipientAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestToken; 
@property (nonatomic,retain) NSString * requestToken;                              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentIdentifier; 
@property (nonatomic,retain) NSString * paymentIdentifier;                         //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionIdentifier; 
@property (nonatomic,retain) NSString * transactionIdentifier;                     //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasMemo; 
@property (nonatomic,retain) NSString * memo;                                      //@synthesize memo=_memo - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestDeviceScoreIdentifier; 
@property (nonatomic,retain) NSString * requestDeviceScoreIdentifier;              //@synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)memo;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(BOOL)hasCurrency;
-(void)setRequestDeviceScoreIdentifier:(NSString *)arg1 ;
-(BOOL)hasSenderAddress;
-(BOOL)hasRecipientAddress;
-(BOOL)hasRequestToken;
-(BOOL)hasPaymentIdentifier;
-(BOOL)hasTransactionIdentifier;
-(BOOL)hasRequestDeviceScoreIdentifier;
-(NSString *)senderAddress;
-(NSString *)recipientAddress;
-(NSString *)paymentIdentifier;
-(NSString *)requestDeviceScoreIdentifier;
-(NSString *)requestToken;
-(void)setRequestToken:(NSString *)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)currency;
-(BOOL)hasMemo;
-(void)setHasAmount:(BOOL)arg1 ;
-(id)description;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setMemo:(NSString *)arg1 ;
-(void)setAmount:(long long)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(long long)amount;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAmount;
-(void)setVersion:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(unsigned)version;
-(void)setCurrency:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

