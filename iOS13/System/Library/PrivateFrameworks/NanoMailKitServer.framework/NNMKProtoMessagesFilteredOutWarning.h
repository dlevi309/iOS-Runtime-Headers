/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {

	unsigned _fullSyncVersion;
	NSString* _mailboxId;
	NSMutableArray* _removedMessageIds;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                        //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedMessageIds;              //@synthesize removedMessageIds=_removedMessageIds - In the implementation block
@property (nonatomic,readonly) BOOL hasMailboxId; 
@property (nonatomic,retain) NSString * mailboxId;                            //@synthesize mailboxId=_mailboxId - In the implementation block
+(Class)removedMessageIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)mailboxId;
-(void)setMailboxId:(NSString *)arg1 ;
-(BOOL)hasMailboxId;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)addRemovedMessageId:(id)arg1 ;
-(unsigned long long)removedMessageIdsCount;
-(void)clearRemovedMessageIds;
-(id)removedMessageIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)removedMessageIds;
-(void)setRemovedMessageIds:(NSMutableArray *)arg1 ;
@end

