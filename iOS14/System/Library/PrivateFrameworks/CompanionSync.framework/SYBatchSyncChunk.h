/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)objects;
-(id)dictionaryRepresentation;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)syncID;
-(void)addObjects:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setChunkIndex:(unsigned)arg1 ;
-(unsigned)chunkIndex;
-(unsigned long long)objectsCount;
-(void)clearObjects;
-(id)objectsAtIndex:(unsigned long long)arg1 ;
@end

