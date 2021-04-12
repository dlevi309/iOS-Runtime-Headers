/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	unsigned long long _buildingId;
	NSMutableArray* _categorys;
	unsigned long long _levelId;
	NSString* _query;
	unsigned long long _sectionId;
	unsigned long long _venueId;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxResults;
	BOOL _highlightDiff;
	struct {
		unsigned has_buildingId : 1;
		unsigned has_levelId : 1;
		unsigned has_sectionId : 1;
		unsigned has_venueId : 1;
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_query : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_buildingId : 1;
		unsigned wrote_categorys : 1;
		unsigned wrote_levelId : 1;
		unsigned wrote_query : 1;
		unsigned wrote_sectionId : 1;
		unsigned wrote_venueId : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_maxResults : 1;
		unsigned wrote_highlightDiff : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff; 
@property (assign,nonatomic) BOOL hasVenueId; 
@property (assign,nonatomic) unsigned long long venueId; 
@property (assign,nonatomic) BOOL hasLevelId; 
@property (assign,nonatomic) unsigned long long levelId; 
@property (assign,nonatomic) BOOL hasSectionId; 
@property (assign,nonatomic) unsigned long long sectionId; 
@property (assign,nonatomic) BOOL hasBuildingId; 
@property (assign,nonatomic) unsigned long long buildingId; 
@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)categoryType;
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readQuery;
-(BOOL)hasQuery;
-(unsigned long long)venueId;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(unsigned long long)buildingId;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(BOOL)hasBuildingId;
-(unsigned long long)levelId;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(BOOL)hasLevelId;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(id)arg1 ;
-(NSMutableArray *)categorys;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(id)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)highlightDiff;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(unsigned long long)sectionId;
-(void)setSectionId:(unsigned long long)arg1 ;
-(void)setHasSectionId:(BOOL)arg1 ;
-(BOOL)hasSectionId;
@end

