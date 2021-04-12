/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface NNMKProtoBatchedFetchResult : PBCodable <NSCopying> {

	NSData* _dateForRequestingMoreMessages;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	unsigned _mailboxSyncVersion;
	NSMutableArray* _messageAdditions;
	NSMutableArray* _messageDeletions;
	NSMutableArray* _messageUpdates;
	BOOL _shouldTrimDatabase;
	SCD_Struct_NN4 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                             //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                  //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageAdditions;                    //@synthesize messageAdditions=_messageAdditions - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageUpdates;                      //@synthesize messageUpdates=_messageUpdates - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageDeletions;                    //@synthesize messageDeletions=_messageDeletions - In the implementation block
@property (nonatomic,readonly) BOOL hasDateForRequestingMoreMessages; 
@property (nonatomic,retain) NSData * dateForRequestingMoreMessages;               //@synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages - In the implementation block
@property (assign,nonatomic) BOOL hasShouldTrimDatabase; 
@property (assign,nonatomic) BOOL shouldTrimDatabase;                              //@synthesize shouldTrimDatabase=_shouldTrimDatabase - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                                 //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxSyncVersion; 
@property (assign,nonatomic) unsigned mailboxSyncVersion;                          //@synthesize mailboxSyncVersion=_mailboxSyncVersion - In the implementation block
+(Class)messageDeletionType;
+(Class)messageAdditionType;
+(Class)messageUpdateType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)setShouldTrimDatabase:(BOOL)arg1 ;
-(void)setDateForRequestingMoreMessages:(NSData *)arg1 ;
-(void)setMailboxSyncVersion:(unsigned)arg1 ;
-(void)addMessageAddition:(id)arg1 ;
-(void)addMessageUpdate:(id)arg1 ;
-(void)addMessageDeletion:(id)arg1 ;
-(NSMutableArray *)messageAdditions;
-(BOOL)hasDateForRequestingMoreMessages;
-(void)setHasMailboxSyncVersion:(BOOL)arg1 ;
-(BOOL)hasMailboxSyncVersion;
-(NSData *)dateForRequestingMoreMessages;
-(unsigned)mailboxSyncVersion;
-(unsigned long long)messageAdditionsCount;
-(unsigned long long)messageDeletionsCount;
-(void)clearMessageDeletions;
-(id)messageDeletionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)messageDeletions;
-(void)setMessageDeletions:(NSMutableArray *)arg1 ;
-(void)clearMessageAdditions;
-(id)messageAdditionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)messageUpdatesCount;
-(void)clearMessageUpdates;
-(id)messageUpdateAtIndex:(unsigned long long)arg1 ;
-(void)setHasShouldTrimDatabase:(BOOL)arg1 ;
-(BOOL)hasShouldTrimDatabase;
-(void)setMessageAdditions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)messageUpdates;
-(void)setMessageUpdates:(NSMutableArray *)arg1 ;
-(BOOL)shouldTrimDatabase;
@end

