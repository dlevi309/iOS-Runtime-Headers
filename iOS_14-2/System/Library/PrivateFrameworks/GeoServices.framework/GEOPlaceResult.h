/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPlace, NSString, GEOPlaceSearchRequest, GEOAddress;

@interface GEOPlaceResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _additionalPlaces;
	NSMutableArray* _disambiguationLabels;
	unsigned long long _flyoverTourMuid;
	NSMutableArray* _matchedTokens;
	NSMutableArray* _namedFeatures;
	NSMutableArray* _namedFields;
	GEOPlace* _place;
	NSString* _quad;
	GEOPlaceSearchRequest* _revgeoRequestTemplate;
	NSString* _suggestedQuery;
	GEOAddress* _tokenEntity;
	NSMutableArray* _unmatchedStrings;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _cacheControl;
	unsigned _travelDistance;
	unsigned _travelTime;
	struct {
		unsigned has_flyoverTourMuid : 1;
		unsigned has_cacheControl : 1;
		unsigned has_travelDistance : 1;
		unsigned has_travelTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_additionalPlaces : 1;
		unsigned read_disambiguationLabels : 1;
		unsigned read_matchedTokens : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_namedFields : 1;
		unsigned read_place : 1;
		unsigned read_quad : 1;
		unsigned read_revgeoRequestTemplate : 1;
		unsigned read_suggestedQuery : 1;
		unsigned read_tokenEntity : 1;
		unsigned read_unmatchedStrings : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) GEOPlace * place; 
@property (nonatomic,retain) NSMutableArray * additionalPlaces; 
@property (nonatomic,readonly) BOOL hasSuggestedQuery; 
@property (nonatomic,retain) NSString * suggestedQuery; 
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) unsigned travelTime; 
@property (assign,nonatomic) BOOL hasTravelDistance; 
@property (assign,nonatomic) unsigned travelDistance; 
@property (nonatomic,readonly) BOOL hasTokenEntity; 
@property (nonatomic,retain) GEOAddress * tokenEntity; 
@property (nonatomic,readonly) BOOL hasQuad; 
@property (nonatomic,retain) NSString * quad; 
@property (nonatomic,retain) NSMutableArray * unmatchedStrings; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (nonatomic,readonly) BOOL hasRevgeoRequestTemplate; 
@property (nonatomic,retain) GEOPlaceSearchRequest * revgeoRequestTemplate; 
@property (nonatomic,retain) NSMutableArray * matchedTokens; 
@property (assign,nonatomic) BOOL hasFlyoverTourMuid; 
@property (assign,nonatomic) unsigned long long flyoverTourMuid; 
@property (assign,nonatomic) BOOL hasCacheControl; 
@property (assign,nonatomic) int cacheControl; 
@property (nonatomic,retain) NSMutableArray * disambiguationLabels; 
@property (nonatomic,retain) NSMutableArray * namedFields; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)additionalPlaceType;
+(Class)namedFeatureType;
+(Class)unmatchedStringType;
+(Class)matchedTokenType;
+(Class)namedFieldType;
+(Class)disambiguationLabelType;
+(BOOL)isValid:(id)arg1 ;
-(NSString *)quad;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(unsigned)travelTime;
-(void)setTravelTime:(unsigned)arg1 ;
-(BOOL)hasCacheControl;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPlace *)place;
-(BOOL)hasTravelDistance;
-(unsigned)travelDistance;
-(unsigned long long)additionalPlacesCount;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(id)init;
-(id)jsonRepresentation;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)addAdditionalPlace:(id)arg1 ;
-(void)clearAdditionalPlaces;
-(id)additionalPlaceAtIndex:(unsigned long long)arg1 ;
-(void)setAdditionalPlaces:(NSMutableArray *)arg1 ;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuad;
-(id)initWithData:(id)arg1 ;
-(void)setQuad:(NSString *)arg1 ;
-(GEOAddress *)tokenEntity;
-(NSString *)suggestedQuery;
-(NSMutableArray *)unmatchedStrings;
-(GEOPlaceSearchRequest *)revgeoRequestTemplate;
-(void)setTokenEntity:(GEOAddress *)arg1 ;
-(void)setSuggestedQuery:(NSString *)arg1 ;
-(void)setTravelDistance:(unsigned)arg1 ;
-(void)addUnmatchedString:(id)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(void)addMatchedToken:(id)arg1 ;
-(void)setRevgeoRequestTemplate:(GEOPlaceSearchRequest *)arg1 ;
-(void)addNamedField:(id)arg1 ;
-(BOOL)hasRevgeoRequestTemplate;
-(unsigned long long)unmatchedStringsCount;
-(void)clearUnmatchedStrings;
-(id)unmatchedStringAtIndex:(unsigned long long)arg1 ;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)matchedTokensCount;
-(void)clearMatchedTokens;
-(id)matchedTokenAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)namedFieldsCount;
-(void)clearNamedFields;
-(id)namedFieldAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestedQuery;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasTravelDistance:(BOOL)arg1 ;
-(BOOL)hasTokenEntity;
-(void)setUnmatchedStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)matchedTokens;
-(void)setMatchedTokens:(NSMutableArray *)arg1 ;
-(void)setHasFlyoverTourMuid:(BOOL)arg1 ;
-(NSMutableArray *)namedFields;
-(void)setNamedFields:(NSMutableArray *)arg1 ;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(id)description;
-(void)setCacheControl:(int)arg1 ;
-(NSMutableArray *)additionalPlaces;
-(unsigned long long)hash;
-(BOOL)hasTravelTime;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(void)clearNamedFeatures;
-(void)setPlace:(GEOPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)geoMapItem;
-(unsigned long long)flyoverTourMuid;
-(BOOL)hasFlyoverTourMuid;
-(void)setFlyoverTourMuid:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)cacheControlAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsCacheControl:(id)arg1 ;
-(int)cacheControl;
@end

