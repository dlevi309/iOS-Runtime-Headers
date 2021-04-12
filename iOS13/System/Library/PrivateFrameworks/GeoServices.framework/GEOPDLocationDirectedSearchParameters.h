/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDNearestTransitParameters, GEOLatLng, NSString, GEOPDViewportInfo;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDNearestTransitParameters* _nearestTransitParameters;
	GEOLatLng* _searchLocation;
	NSString* _searchString;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResults;
	int _searchType;
	int _sortOrder;
	struct {
		unsigned has_maxResults : 1;
		unsigned has_searchType : 1;
		unsigned has_sortOrder : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nearestTransitParameters : 1;
		unsigned read_searchLocation : 1;
		unsigned read_searchString : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_nearestTransitParameters : 1;
		unsigned wrote_searchLocation : 1;
		unsigned wrote_searchString : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_maxResults : 1;
		unsigned wrote_searchType : 1;
		unsigned wrote_sortOrder : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation; 
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (nonatomic,readonly) BOOL hasNearestTransitParameters; 
@property (nonatomic,retain) GEOPDNearestTransitParameters * nearestTransitParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(void)_readSearchString;
-(void)_readSearchLocation;
-(void)_readNearestTransitParameters;
-(GEOLatLng *)searchLocation;
-(GEOPDNearestTransitParameters *)nearestTransitParameters;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(void)setNearestTransitParameters:(GEOPDNearestTransitParameters *)arg1 ;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(BOOL)hasSearchString;
-(BOOL)hasSearchLocation;
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(BOOL)hasNearestTransitParameters;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE32)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
@end

