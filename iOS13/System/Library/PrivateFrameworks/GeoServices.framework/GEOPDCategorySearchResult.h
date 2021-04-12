/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDSCategorySearchResultSection, GEOPDRelatedSearchSuggestion, GEOMapRegion, GEOPDSearchClientBehavior;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _browseCategorys;
	GEOPDSCategorySearchResultSection* _categorySearchResultSection;
	GEOPDRelatedSearchSuggestion* _defaultRelatedSearchSuggestion;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _relatedSearchSuggestions;
	NSMutableArray* _resultDetourInfos;
	GEOPDSearchClientBehavior* _searchClientBehavior;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _enablePartialClientization;
	BOOL _isChainResultSet;
	struct {
		unsigned has_enablePartialClientization : 1;
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_browseCategorys : 1;
		unsigned read_categorySearchResultSection : 1;
		unsigned read_defaultRelatedSearchSuggestion : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_relatedSearchSuggestions : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned read_searchClientBehavior : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_browseCategorys : 1;
		unsigned wrote_categorySearchResultSection : 1;
		unsigned wrote_defaultRelatedSearchSuggestion : 1;
		unsigned wrote_displayMapRegion : 1;
		unsigned wrote_relatedSearchSuggestions : 1;
		unsigned wrote_resultDetourInfos : 1;
		unsigned wrote_searchClientBehavior : 1;
		unsigned wrote_enablePartialClientization : 1;
		unsigned wrote_isChainResultSet : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,retain) NSMutableArray * relatedSearchSuggestions; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (nonatomic,readonly) BOOL hasDefaultRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * defaultRelatedSearchSuggestion; 
@property (nonatomic,readonly) BOOL hasSearchClientBehavior; 
@property (nonatomic,retain) GEOPDSearchClientBehavior * searchClientBehavior; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,retain) NSMutableArray * browseCategorys; 
@property (nonatomic,readonly) BOOL hasCategorySearchResultSection; 
@property (nonatomic,retain) GEOPDSCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)relatedSearchSuggestionType;
+(Class)resultDetourInfoType;
+(Class)browseCategoryType;
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
-(void)_readDisplayMapRegion;
-(void)_readRelatedSearchSuggestions;
-(void)_addNoFlagsRelatedSearchSuggestion:(id)arg1 ;
-(void)_readDefaultRelatedSearchSuggestion;
-(void)_readSearchClientBehavior;
-(void)_readResultDetourInfos;
-(void)_addNoFlagsResultDetourInfo:(id)arg1 ;
-(GEOMapRegion *)displayMapRegion;
-(GEOPDRelatedSearchSuggestion *)defaultRelatedSearchSuggestion;
-(GEOPDSearchClientBehavior *)searchClientBehavior;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)relatedSearchSuggestionsCount;
-(void)clearRelatedSearchSuggestions;
-(id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1 ;
-(void)addRelatedSearchSuggestion:(id)arg1 ;
-(void)setDefaultRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(void)setSearchClientBehavior:(GEOPDSearchClientBehavior *)arg1 ;
-(unsigned long long)resultDetourInfosCount;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(NSMutableArray *)relatedSearchSuggestions;
-(NSMutableArray *)resultDetourInfos;
-(BOOL)hasDisplayMapRegion;
-(BOOL)isChainResultSet;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(void)setRelatedSearchSuggestions:(NSMutableArray *)arg1 ;
-(BOOL)hasDefaultRelatedSearchSuggestion;
-(BOOL)hasSearchClientBehavior;
-(void)setResultDetourInfos:(NSMutableArray *)arg1 ;
-(BOOL)enablePartialClientization;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(GEOPDSCategorySearchResultSection *)categorySearchResultSection;
-(unsigned long long)browseCategorysCount;
-(NSMutableArray *)browseCategorys;
-(void)_readBrowseCategorys;
-(void)_addNoFlagsBrowseCategory:(id)arg1 ;
-(void)_readCategorySearchResultSection;
-(void)clearBrowseCategorys;
-(id)browseCategoryAtIndex:(unsigned long long)arg1 ;
-(void)addBrowseCategory:(id)arg1 ;
-(void)setCategorySearchResultSection:(GEOPDSCategorySearchResultSection *)arg1 ;
-(void)setBrowseCategorys:(NSMutableArray *)arg1 ;
-(BOOL)hasCategorySearchResultSection;
@end

