/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * zeroKeywordEntrys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryType;
+(BOOL)isValid:(id)arg1 ;
+(Class)zeroKeywordEntryType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)addCategory:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)categorysCount;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)clearCategorys;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)categorys;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addZeroKeywordEntry:(id)arg1 ;
-(unsigned long long)zeroKeywordEntrysCount;
-(void)clearZeroKeywordEntrys;
-(id)zeroKeywordEntryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)zeroKeywordEntrys;
-(void)setZeroKeywordEntrys:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

