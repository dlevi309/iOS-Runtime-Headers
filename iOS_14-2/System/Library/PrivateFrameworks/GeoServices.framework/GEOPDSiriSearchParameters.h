/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAddress, NSMutableArray, GEOPDIndexQueryNode, GEOPDRecentRouteInfo, NSString, GEOPDViewportInfo;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOAddress* _address;
	NSMutableArray* _businessCategoryFilters;
	GEOPDIndexQueryNode* _indexFilter;
	GEOPDRecentRouteInfo* _recentRouteInfo;
	NSString* _searchString;
	NSMutableArray* _searchSubstringDescriptors;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResultCount;
	int _sortOrder;
	BOOL _isStrictMapRegion;
	BOOL _structuredSearch;
	struct {
		unsigned has_maxResultCount : 1;
		unsigned has_sortOrder : 1;
		unsigned has_isStrictMapRegion : 1;
		unsigned has_structuredSearch : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_businessCategoryFilters : 1;
		unsigned read_indexFilter : 1;
		unsigned read_recentRouteInfo : 1;
		unsigned read_searchString : 1;
		unsigned read_searchSubstringDescriptors : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) BOOL hasMaxResultCount; 
@property (assign,nonatomic) unsigned maxResultCount; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address; 
@property (nonatomic,retain) NSMutableArray * businessCategoryFilters; 
@property (assign,nonatomic) BOOL hasIsStrictMapRegion; 
@property (assign,nonatomic) BOOL isStrictMapRegion; 
@property (assign,nonatomic) BOOL hasStructuredSearch; 
@property (assign,nonatomic) BOOL structuredSearch; 
@property (nonatomic,retain) NSMutableArray * searchSubstringDescriptors; 
@property (nonatomic,readonly) BOOL hasIndexFilter; 
@property (nonatomic,retain) GEOPDIndexQueryNode * indexFilter; 
@property (nonatomic,readonly) BOOL hasRecentRouteInfo; 
@property (nonatomic,retain) GEOPDRecentRouteInfo * recentRouteInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)businessCategoryFilterType;
+(Class)searchSubstringDescriptorType;
-(int)sortOrder;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasAddress;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(id)description;
-(GEOAddress *)address;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(BOOL)hasRecentRouteInfo;
-(unsigned long long)hash;
-(BOOL)hasSortOrder;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(BOOL)hasSearchString;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDIndexQueryNode *)indexFilter;
-(void)setIndexFilter:(GEOPDIndexQueryNode *)arg1 ;
-(BOOL)hasIndexFilter;
-(void)setMaxResultCount:(unsigned)arg1 ;
-(NSMutableArray *)businessCategoryFilters;
-(void)addBusinessCategoryFilter:(id)arg1 ;
-(void)setIsStrictMapRegion:(BOOL)arg1 ;
-(void)setStructuredSearch:(BOOL)arg1 ;
-(void)addSearchSubstringDescriptor:(id)arg1 ;
-(unsigned)maxResultCount;
-(unsigned long long)businessCategoryFiltersCount;
-(void)clearBusinessCategoryFilters;
-(id)businessCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchSubstringDescriptorsCount;
-(BOOL)hasMaxResultCount;
-(void)clearSearchSubstringDescriptors;
-(id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1 ;
-(void)setHasMaxResultCount:(BOOL)arg1 ;
-(void)setBusinessCategoryFilters:(NSMutableArray *)arg1 ;
-(BOOL)isStrictMapRegion;
-(void)setHasIsStrictMapRegion:(BOOL)arg1 ;
-(BOOL)hasIsStrictMapRegion;
-(BOOL)structuredSearch;
-(void)setHasStructuredSearch:(BOOL)arg1 ;
-(BOOL)hasStructuredSearch;
-(NSMutableArray *)searchSubstringDescriptors;
-(void)setSearchSubstringDescriptors:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

