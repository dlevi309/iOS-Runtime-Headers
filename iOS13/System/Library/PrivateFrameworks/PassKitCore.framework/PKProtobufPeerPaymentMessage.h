/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)amount;
-(void)setAmount:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(void)setHasAmount:(BOOL)arg1 ;
-(BOOL)hasAmount;
-(NSString *)transactionIdentifier;
-(NSString *)requestToken;
-(void)setRequestToken:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)recipientAddress;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(void)setMemo:(NSString *)arg1 ;
-(void)setRequestDeviceScoreIdentifier:(NSString *)arg1 ;
-(BOOL)hasCurrency;
-(BOOL)hasSenderAddress;
-(BOOL)hasRecipientAddress;
-(BOOL)hasRequestToken;
-(BOOL)hasPaymentIdentifier;
-(BOOL)hasTransactionIdentifier;
-(BOOL)hasMemo;
-(BOOL)hasRequestDeviceScoreIdentifier;
-(NSString *)paymentIdentifier;
-(NSString *)memo;
-(NSString *)requestDeviceScoreIdentifier;
@end

