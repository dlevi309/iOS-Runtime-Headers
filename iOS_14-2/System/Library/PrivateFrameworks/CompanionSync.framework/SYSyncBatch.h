/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, SYMessageHeader, NSString;

@interface SYSyncBatch : PBCodable <NSCopying> {

	unsigned long long _index;
	NSMutableArray* _changes;
	SYMessageHeader* _header;
	NSString* _sessionID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
+(Class)changesType;
-(NSMutableArray *)changes;
-(id)dictionaryRepresentation;
-(unsigned long long)index;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(SYMessageHeader *)header;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)addChanges:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)changesCount;
-(void)clearChanges;
-(id)changesAtIndex:(unsigned long long)arg1 ;
@end

