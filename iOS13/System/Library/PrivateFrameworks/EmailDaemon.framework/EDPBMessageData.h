/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPETMessageFrameTypeIntrospectable.h>
#import <libobjc.A.dylib/EDPBDataSetters.h>
#import <libobjc.A.dylib/EDPBBaseMessageFields.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDPBMessageHeaders;

@interface EDPBMessageData : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {

	long long _accountId;
	long long _conversationId;
	long long _mailboxId;
	long long _messageId;
	EDPBMessageHeaders* _headers;
	int _mailboxType;
	SCD_Struct_ED7 _has;

}

@property (assign,nonatomic) long long accountId; 
@property (assign,nonatomic) long long mailboxId; 
@property (assign,nonatomic) int mailboxType; 
@property (assign,nonatomic) long long conversationId; 
@property (assign,nonatomic) long long messageId; 
@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                       //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxId; 
@property (assign,nonatomic) long long mailboxId;                       //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                           //@synthesize mailboxType=_mailboxType - In the implementation block
@property (assign,nonatomic) BOOL hasConversationId; 
@property (assign,nonatomic) long long conversationId;                  //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL hasMessageId; 
@property (assign,nonatomic) long long messageId;                       //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) BOOL hasHeaders; 
@property (nonatomic,retain) EDPBMessageHeaders * headers;              //@synthesize headers=_headers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)messageId;
-(void)setMessageId:(long long)arg1 ;
-(BOOL)hasMessageId;
-(void)setHeaders:(EDPBMessageHeaders *)arg1 ;
-(EDPBMessageHeaders *)headers;
-(long long)accountId;
-(void)setAccountId:(long long)arg1 ;
-(int)mailboxType;
-(void)setMailboxType:(int)arg1 ;
-(long long)conversationId;
-(BOOL)hasAccountId;
-(void)setHasAccountId:(BOOL)arg1 ;
-(int)messageFrameType;
-(void)withHasher:(id)arg1 setDataFromMessage:(id)arg2 account:(id)arg3 ;
-(void)withHasher:(id)arg1 setDataFromMessage:(id)arg2 ;
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
-(BOOL)hasHeaders;
@end

