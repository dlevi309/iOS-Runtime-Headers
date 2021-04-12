/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _categorys;
	NSMutableArray* _zeroKeywordEntrys;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_zeroKeywordEntrys : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_categorys : 1;
		unsigned wrote_zeroKeywordEntrys : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * zeroKeywordEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryType;
+(BOOL)isValid:(id)arg1 ;
+(Class)zeroKeywordEntryType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(id)arg1 ;
-(NSMutableArray *)categorys;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(id)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)_readZeroKeywordEntrys;
-(void)_addNoFlagsZeroKeywordEntry:(id)arg1 ;
-(unsigned long long)zeroKeywordEntrysCount;
-(void)clearZeroKeywordEntrys;
-(id)zeroKeywordEntryAtIndex:(unsigned long long)arg1 ;
-(void)addZeroKeywordEntry:(id)arg1 ;
-(NSMutableArray *)zeroKeywordEntrys;
-(void)setZeroKeywordEntrys:(NSMutableArray *)arg1 ;
@end

