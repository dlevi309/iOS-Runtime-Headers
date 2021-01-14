/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface NNMKProtoMoreMessagesForConversation : PBCodable <NSCopying> {

	NSMutableArray* _addedMessages;
	NSString* _conversationId;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	unsigned _mailboxSyncVersion;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                    //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                         //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationId; 
@property (nonatomic,retain) NSString * conversationId;                   //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSMutableArray * addedMessages;              //@synthesize addedMessages=_addedMessages - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                        //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxSyncVersion; 
@property (assign,nonatomic) unsigned mailboxSyncVersion;                 //@synthesize mailboxSyncVersion=_mailboxSyncVersion - In the implementation block
+(Class)addedMessageType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)conversationId;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(BOOL)hasConversationId;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)setMailboxSyncVersion:(unsigned)arg1 ;
-(void)setHasMailboxSyncVersion:(BOOL)arg1 ;
-(BOOL)hasMailboxSyncVersion;
-(unsigned)mailboxSyncVersion;
-(void)addAddedMessage:(id)arg1 ;
-(unsigned long long)addedMessagesCount;
-(void)clearAddedMessages;
-(id)addedMessageAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)addedMessages;
-(void)setAddedMessages:(NSMutableArray *)arg1 ;
@end

