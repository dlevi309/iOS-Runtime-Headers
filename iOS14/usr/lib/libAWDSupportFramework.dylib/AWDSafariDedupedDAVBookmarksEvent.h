/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariDedupedDAVBookmarksEvent : PBCodable <NSCopying> {

	unsigned long long _dedupeCount;
	unsigned long long _foldersWithDupesCount;
	unsigned long long _timestamp;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDedupeCount; 
@property (assign,nonatomic) unsigned long long dedupeCount;                        //@synthesize dedupeCount=_dedupeCount - In the implementation block
@property (assign,nonatomic) BOOL hasFoldersWithDupesCount; 
@property (assign,nonatomic) unsigned long long foldersWithDupesCount;              //@synthesize foldersWithDupesCount=_foldersWithDupesCount - In the implementation block
-(id)dictionaryRepresentation;
-(void)setDedupeCount:(unsigned long long)arg1 ;
-(void)setHasDedupeCount:(BOOL)arg1 ;
-(BOOL)hasDedupeCount;
-(void)setFoldersWithDupesCount:(unsigned long long)arg1 ;
-(unsigned long long)dedupeCount;
-(void)setHasFoldersWithDupesCount:(BOOL)arg1 ;
-(BOOL)hasFoldersWithDupesCount;
-(unsigned long long)foldersWithDupesCount;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

