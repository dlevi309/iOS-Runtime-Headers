/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOStyleAttributes;

@interface GEOPDSSearchResultSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _resolvedItems;
	NSString* _sectionHeaderDisplayName;
	NSString* _sectionSubHeaderDisplayName;
	GEOStyleAttributes* _styleAttributes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _searchResultSectionCellType;
	int _searchResultSectionType;
	struct {
		unsigned has_searchResultSectionCellType : 1;
		unsigned has_searchResultSectionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_resolvedItems : 1;
		unsigned read_sectionHeaderDisplayName : 1;
		unsigned read_sectionSubHeaderDisplayName : 1;
		unsigned read_styleAttributes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSectionHeaderDisplayName; 
@property (nonatomic,retain) NSString * sectionHeaderDisplayName; 
@property (nonatomic,retain) NSMutableArray * resolvedItems; 
@property (assign,nonatomic) BOOL hasSearchResultSectionType; 
@property (assign,nonatomic) int searchResultSectionType; 
@property (nonatomic,readonly) BOOL hasSectionSubHeaderDisplayName; 
@property (nonatomic,retain) NSString * sectionSubHeaderDisplayName; 
@property (assign,nonatomic) BOOL hasSearchResultSectionCellType; 
@property (assign,nonatomic) int searchResultSectionCellType; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)resolvedItemType;
-(BOOL)hasStyleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)sectionHeaderDisplayName;
-(NSString *)sectionSubHeaderDisplayName;
-(void)setSectionHeaderDisplayName:(NSString *)arg1 ;
-(void)setSectionSubHeaderDisplayName:(NSString *)arg1 ;
-(BOOL)hasSectionHeaderDisplayName;
-(BOOL)hasSectionSubHeaderDisplayName;
-(void)addResolvedItem:(id)arg1 ;
-(NSMutableArray *)resolvedItems;
-(unsigned long long)resolvedItemsCount;
-(id)init;
-(void)setSearchResultSectionType:(int)arg1 ;
-(void)clearResolvedItems;
-(void)setSearchResultSectionCellType:(int)arg1 ;
-(id)resolvedItemAtIndex:(unsigned long long)arg1 ;
-(void)setResolvedItems:(NSMutableArray *)arg1 ;
-(void)setHasSearchResultSectionType:(BOOL)arg1 ;
-(BOOL)hasSearchResultSectionType;
-(int)searchResultSectionCellType;
-(id)searchResultSectionTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultSectionType:(id)arg1 ;
-(void)setHasSearchResultSectionCellType:(BOOL)arg1 ;
-(BOOL)hasSearchResultSectionCellType;
-(id)searchResultSectionCellTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultSectionCellType:(id)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)searchResultSectionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

