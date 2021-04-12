/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariDedupedDAVBookmarksEvent : PBCodable <NSCopying> {

	unsigned long long _dedupeCount;
	unsigned long long _foldersWithDupesCount;
	unsigned long long _timestamp;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDedupeCount; 
@property (assign,nonatomic) unsigned long long dedupeCount;                        //@synthesize dedupeCount=_dedupeCount - In the implementation block
@property (assign,nonatomic) BOOL hasFoldersWithDupesCount; 
@property (assign,nonatomic) unsigned long long foldersWithDupesCount;              //@synthesize foldersWithDupesCount=_foldersWithDupesCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDedupeCount:(unsigned long long)arg1 ;
-(void)setHasDedupeCount:(BOOL)arg1 ;
-(BOOL)hasDedupeCount;
-(void)setFoldersWithDupesCount:(unsigned long long)arg1 ;
-(void)setHasFoldersWithDupesCount:(BOOL)arg1 ;
-(BOOL)hasFoldersWithDupesCount;
-(unsigned long long)dedupeCount;
-(unsigned long long)foldersWithDupesCount;
@end

