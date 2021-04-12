/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDRecentRouteInfo, NSData, GEOPDViewportInfo;

@interface GEOPDCategorySearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDRecentRouteInfo* _recentRouteInfo;
	NSData* _suggestionEntryMetadata;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _blurredHourOfDay;
	unsigned _dayOfWeek;
	unsigned _maxResults;
	int _searchType;
	BOOL _supportCategorySearchResultSection;
	struct {
		unsigned has_blurredHourOfDay : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_maxResults : 1;
		unsigned has_searchType : 1;
		unsigned has_supportCategorySearchResultSection : 1;
		unsigned read_unknownFields : 1;
		unsigned read_recentRouteInfo : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_recentRouteInfo : 1;
		unsigned wrote_suggestionEntryMetadata : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_blurredHourOfDay : 1;
		unsigned wrote_dayOfWeek : 1;
		unsigned wrote_maxResults : 1;
		unsigned wrote_searchType : 1;
		unsigned wrote_supportCategorySearchResultSection : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (assign,nonatomic) BOOL hasBlurredHourOfDay; 
@property (assign,nonatomic) unsigned blurredHourOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (nonatomic,readonly) BOOL hasRecentRouteInfo; 
@property (nonatomic,retain) GEOPDRecentRouteInfo * recentRouteInfo; 
@property (assign,nonatomic) BOOL hasSupportCategorySearchResultSection; 
@property (assign,nonatomic) BOOL supportCategorySearchResultSection; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)dayOfWeek;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(void)_readSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(void)_readRecentRouteInfo;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(unsigned)blurredHourOfDay;
-(void)setBlurredHourOfDay:(unsigned)arg1 ;
-(void)setHasBlurredHourOfDay:(BOOL)arg1 ;
-(BOOL)hasBlurredHourOfDay;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(BOOL)hasRecentRouteInfo;
-(BOOL)supportCategorySearchResultSection;
-(void)setSupportCategorySearchResultSection:(BOOL)arg1 ;
-(void)setHasSupportCategorySearchResultSection:(BOOL)arg1 ;
-(BOOL)hasSupportCategorySearchResultSection;
@end

