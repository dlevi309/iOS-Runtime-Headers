/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDSSearchResultSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _resolvedItems;
	NSString* _sectionHeaderDisplayName;
	NSString* _sectionSubHeaderDisplayName;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_resolvedItems : 1;
		unsigned wrote_sectionHeaderDisplayName : 1;
		unsigned wrote_sectionSubHeaderDisplayName : 1;
		unsigned wrote_searchResultSectionCellType : 1;
		unsigned wrote_searchResultSectionType : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)resolvedItemType;
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
-(int)searchResultSectionType;
-(void)_readSectionHeaderDisplayName;
-(void)_readSectionSubHeaderDisplayName;
-(NSString *)sectionHeaderDisplayName;
-(NSString *)sectionSubHeaderDisplayName;
-(void)setSectionHeaderDisplayName:(NSString *)arg1 ;
-(void)setSectionSubHeaderDisplayName:(NSString *)arg1 ;
-(BOOL)hasSectionHeaderDisplayName;
-(BOOL)hasSectionSubHeaderDisplayName;
-(void)_readResolvedItems;
-(void)_addNoFlagsResolvedItem:(id)arg1 ;
-(unsigned long long)resolvedItemsCount;
-(void)clearResolvedItems;
-(id)resolvedItemAtIndex:(unsigned long long)arg1 ;
-(void)addResolvedItem:(id)arg1 ;
-(NSMutableArray *)resolvedItems;
-(void)setResolvedItems:(NSMutableArray *)arg1 ;
-(void)setSearchResultSectionType:(int)arg1 ;
-(void)setHasSearchResultSectionType:(BOOL)arg1 ;
-(BOOL)hasSearchResultSectionType;
-(id)searchResultSectionTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultSectionType:(id)arg1 ;
-(int)searchResultSectionCellType;
-(void)setSearchResultSectionCellType:(int)arg1 ;
-(void)setHasSearchResultSectionCellType:(BOOL)arg1 ;
-(BOOL)hasSearchResultSectionCellType;
-(id)searchResultSectionCellTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultSectionCellType:(id)arg1 ;
@end

