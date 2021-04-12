/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/EDPBBaseMessageFields.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPBInteractionEventLinkClicked : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {

	long long _accountId;
	long long _conversationId;
	long long _mailboxId;
	long long _messageId;
	int _mailboxType;
	SCD_Struct_ED9 _has;

}

@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                   //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxId; 
@property (assign,nonatomic) long long mailboxId;                   //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                       //@synthesize mailboxType=_mailboxType - In the implementation block
@property (assign,nonatomic) BOOL hasConversationId; 
@property (assign,nonatomic) long long conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;                   //@synthesize messageId=_messageId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setMessageId:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(void)setAccountId:(long long)arg1 ;
-(id)description;
-(int)mailboxType;
-(unsigned long long)hash;
-(long long)conversationId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)accountId;
-(void)setMailboxType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)messageId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAccountId;
-(void)setHasAccountId:(BOOL)arg1 ;
-(void)withHasher:(id)arg1 setMessage:(id)arg2 data:(id)arg3 ;
-(long long)mailboxId;
-(void)setMailboxId:(long long)arg1 ;
-(void)setConversationId:(long long)arg1 ;
-(void)setHasMailboxId:(BOOL)arg1 ;
-(BOOL)hasMailboxId;
-(void)setHasMailboxType:(BOOL)arg1 ;
-(BOOL)hasMailboxType;
-(id)mailboxTypeAsString:(int)arg1 ;
-(int)StringAsMailboxType:(id)arg1 ;
-(void)setHasConversationId:(BOOL)arg1 ;
-(BOOL)hasConversationId;
-(void)setHasMessageId:(BOOL)arg1 ;
@end

