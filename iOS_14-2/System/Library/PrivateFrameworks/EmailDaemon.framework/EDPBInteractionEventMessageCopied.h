/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBInteractionEventMessageCopied : PBCodable <EDPBDataSetters, NSCopying> {

	long long _accountId;
	long long _conversationId;
	long long _fromMailboxId;
	long long _messageId;
	long long _toMailboxId;
	int _fromMailboxType;
	int _toMailboxType;
	SCD_Struct_ED11 _has;

}

@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                   //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasConversationId; 
@property (assign,nonatomic) long long conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;                   //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasFromMailboxId; 
@property (assign,nonatomic) long long fromMailboxId;               //@synthesize fromMailboxId=_fromMailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasFromMailboxType; 
@property (assign,nonatomic) int fromMailboxType;                   //@synthesize fromMailboxType=_fromMailboxType - In the implementation block
@property (assign,nonatomic) BOOL hasToMailboxId; 
@property (assign,nonatomic) long long toMailboxId;                 //@synthesize toMailboxId=_toMailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasToMailboxType; 
@property (assign,nonatomic) int toMailboxType;                     //@synthesize toMailboxType=_toMailboxType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMessageId:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(void)setAccountId:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(long long)conversationId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)accountId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAccountId;
-(void)setHasAccountId:(BOOL)arg1 ;
-(void)withHasher:(id)arg1 setMessage:(id)arg2 mailbox:(id)arg3 ;
-(void)setConversationId:(long long)arg1 ;
-(void)setFromMailboxId:(long long)arg1 ;
-(void)setFromMailboxType:(int)arg1 ;
-(void)setToMailboxId:(long long)arg1 ;
-(void)setToMailboxType:(int)arg1 ;
-(void)setHasConversationId:(BOOL)arg1 ;
-(BOOL)hasConversationId;
-(void)setHasMessageId:(BOOL)arg1 ;
-(void)setHasFromMailboxId:(BOOL)arg1 ;
-(BOOL)hasFromMailboxId;
-(int)fromMailboxType;
-(void)setHasFromMailboxType:(BOOL)arg1 ;
-(BOOL)hasFromMailboxType;
-(id)fromMailboxTypeAsString:(int)arg1 ;
-(int)StringAsFromMailboxType:(id)arg1 ;
-(void)setHasToMailboxId:(BOOL)arg1 ;
-(BOOL)hasToMailboxId;
-(int)toMailboxType;
-(void)setHasToMailboxType:(BOOL)arg1 ;
-(BOOL)hasToMailboxType;
-(id)toMailboxTypeAsString:(int)arg1 ;
-(int)StringAsToMailboxType:(id)arg1 ;
-(long long)fromMailboxId;
-(long long)toMailboxId;
@end

