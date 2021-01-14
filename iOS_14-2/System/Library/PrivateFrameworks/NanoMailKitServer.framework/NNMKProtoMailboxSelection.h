/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoMailboxSelection : PBCodable <NSCopying> {

	unsigned _fullSyncVersion;
	NSMutableArray* _mailboxes;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * mailboxes;              //@synthesize mailboxes=_mailboxes - In the implementation block
+(Class)mailboxesType;
+(id)protoMailboxSelectionFromMailboxSelection:(id)arg1 fullSyncVersion:(unsigned long long)arg2 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)mailboxes;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(id)mailboxSelection;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMailboxes:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)addMailboxes:(id)arg1 ;
-(unsigned long long)mailboxesCount;
-(void)clearMailboxes;
-(id)mailboxesAtIndex:(unsigned long long)arg1 ;
@end

