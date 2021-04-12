/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSMutableArray, NSString;

@interface SYBatchSyncChunk : PBCodable <NSCopying> {

	unsigned _chunkIndex;
	SYMessageHeader* _header;
	NSMutableArray* _objects;
	NSString* _syncID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                     //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) unsigned chunkIndex;                   //@synthesize chunkIndex=_chunkIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
+(Class)objectsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)objects;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(NSString *)syncID;
-(void)setSyncID:(NSString *)arg1 ;
-(unsigned long long)objectsCount;
-(void)clearObjects;
-(void)setChunkIndex:(unsigned)arg1 ;
-(unsigned)chunkIndex;
-(void)addObjects:(id)arg1 ;
-(id)objectsAtIndex:(unsigned long long)arg1 ;
@end

