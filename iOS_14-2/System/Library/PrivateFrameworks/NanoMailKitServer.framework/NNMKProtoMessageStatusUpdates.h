/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying> {

	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	unsigned _mailboxSyncVersion;
	NSMutableArray* _messageStatusUpdates;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                           //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * messageStatusUpdates;              //@synthesize messageStatusUpdates=_messageStatusUpdates - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                               //@synthesize mailboxId=_mailboxId - In the implementation block
@property (assign,nonatomic) BOOL hasMailboxSyncVersion; 
@property (assign,nonatomic) unsigned mailboxSyncVersion;                        //@synthesize mailboxSyncVersion=_mailboxSyncVersion - In the implementation block
+(Class)messageStatusUpdateType;
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
-(void)setMailboxSyncVersion:(unsigned)arg1 ;
-(void)setHasMailboxSyncVersion:(BOOL)arg1 ;
-(BOOL)hasMailboxSyncVersion;
-(unsigned)mailboxSyncVersion;
-(void)addMessageStatusUpdate:(id)arg1 ;
-(unsigned long long)messageStatusUpdatesCount;
-(void)clearMessageStatusUpdates;
-(id)messageStatusUpdateAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)messageStatusUpdates;
-(void)setMessageStatusUpdates:(NSMutableArray *)arg1 ;
@end

