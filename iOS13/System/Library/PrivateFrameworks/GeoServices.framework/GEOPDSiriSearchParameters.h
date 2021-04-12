/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_address : 1;
		unsigned wrote_businessCategoryFilters : 1;
		unsigned wrote_indexFilter : 1;
		unsigned wrote_recentRouteInfo : 1;
		unsigned wrote_searchString : 1;
		unsigned wrote_searchSubstringDescriptors : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_maxResultCount : 1;
		unsigned wrote_sortOrder : 1;
		unsigned wrote_isStrictMapRegion : 1;
		unsigned wrote_structuredSearch : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOAddress *)address;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setAddress:(GEOAddress *)arg1 ;
-(BOOL)hasAddress;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAddress;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(void)_readSearchString;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(BOOL)hasSearchString;
-(void)_readIndexFilter;
-(GEOPDIndexQueryNode *)indexFilter;
-(void)setIndexFilter:(GEOPDIndexQueryNode *)arg1 ;
-(BOOL)isStrictMapRegion;
-(void)setIsStrictMapRegion:(BOOL)arg1 ;
-(void)setHasIsStrictMapRegion:(BOOL)arg1 ;
-(BOOL)hasIsStrictMapRegion;
-(BOOL)structuredSearch;
-(void)setStructuredSearch:(BOOL)arg1 ;
-(void)setHasStructuredSearch:(BOOL)arg1 ;
-(BOOL)hasStructuredSearch;
-(BOOL)hasIndexFilter;
-(void)_readRecentRouteInfo;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(BOOL)hasRecentRouteInfo;
-(unsigned)maxResultCount;
-(void)_readBusinessCategoryFilters;
-(void)_addNoFlagsBusinessCategoryFilter:(id)arg1 ;
-(void)_readSearchSubstringDescriptors;
-(void)_addNoFlagsSearchSubstringDescriptor:(id)arg1 ;
-(NSMutableArray *)businessCategoryFilters;
-(unsigned long long)businessCategoryFiltersCount;
-(void)clearBusinessCategoryFilters;
-(id)businessCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(void)addBusinessCategoryFilter:(id)arg1 ;
-(unsigned long long)searchSubstringDescriptorsCount;
-(void)clearSearchSubstringDescriptors;
-(id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1 ;
-(void)addSearchSubstringDescriptor:(id)arg1 ;
-(NSMutableArray *)searchSubstringDescriptors;
-(void)setMaxResultCount:(unsigned)arg1 ;
-(void)setHasMaxResultCount:(BOOL)arg1 ;
-(BOOL)hasMaxResultCount;
-(void)setBusinessCategoryFilters:(NSMutableArray *)arg1 ;
-(void)setSearchSubstringDescriptors:(NSMutableArray *)arg1 ;
@end

