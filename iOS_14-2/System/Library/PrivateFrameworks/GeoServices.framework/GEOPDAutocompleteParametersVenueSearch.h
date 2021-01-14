/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
-(id)dictionaryRepresentation;
-(NSString *)query;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)venueId;
-(void)addCategory:(id)arg1 ;
-(unsigned long long)levelId;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasVenueId;
-(void)setVenueId:(unsigned long long)arg1 ;
-(void)setHasVenueId:(BOOL)arg1 ;
-(id)init;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(void)setLevelId:(unsigned long long)arg1 ;
-(void)setHasLevelId:(BOOL)arg1 ;
-(void)setBuildingId:(unsigned long long)arg1 ;
-(BOOL)hasMaxResults;
-(void)setHasBuildingId:(BOOL)arg1 ;
-(unsigned long long)categorysCount;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(void)setMaxResults:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)maxResults;
-(void)clearCategorys;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(unsigned long long)sectionId;
-(id)description;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(BOOL)highlightDiff;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(BOOL)hasBuildingId;
-(BOOL)hasSectionId;
-(void)setSectionId:(unsigned long long)arg1 ;
-(void)setHasSectionId:(BOOL)arg1 ;
-(NSMutableArray *)categorys;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)buildingId;
-(void)setQuery:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLevelId;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

