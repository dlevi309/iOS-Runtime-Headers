/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSMutableArray, NSString, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	NSMutableArray* _namedFeatures;
	NSString* _nearbySectionHeader;
	NSMutableArray* _placeResults;
	NSMutableArray* _suggestionEntryLists;
	NSData* _suggestionMetadata;
	double _turnaroundTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCodeInfo;
	int _status;
	BOOL _isChainResultSet;
	struct {
		unsigned has_turnaroundTime : 1;
		unsigned has_statusCodeInfo : 1;
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapRegion : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_nearbySectionHeader : 1;
		unsigned read_placeResults : 1;
		unsigned read_suggestionEntryLists : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * placeResults; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryLists; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (assign,nonatomic) BOOL hasStatusCodeInfo; 
@property (assign,nonatomic) int statusCodeInfo; 
@property (assign,nonatomic) BOOL hasTurnaroundTime; 
@property (assign,nonatomic) double turnaroundTime; 
@property (nonatomic,readonly) BOOL hasNearbySectionHeader; 
@property (nonatomic,retain) NSString * nearbySectionHeader; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)placeResultType;
+(Class)namedFeaturesType;
+(Class)suggestionEntryListsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)isChainResultSet;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)placeResultsCount;
-(void)clearPlaceResults;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(id)init;
-(id)jsonRepresentation;
-(int)statusCodeInfo;
-(BOOL)hasTurnaroundTime;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)setHasTurnaroundTime:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(BOOL)hasSuggestionMetadata;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(NSString *)nearbySectionHeader;
-(BOOL)hasNearbySectionHeader;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIsChainResultSet;
-(void)clearSuggestionEntryLists;
-(BOOL)hasMapRegion;
-(int)StringAsStatus:(id)arg1 ;
-(NSData *)suggestionMetadata;
-(NSMutableArray *)namedFeatures;
-(NSMutableArray *)placeResults;
-(id)description;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(void)setNearbySectionHeader:(NSString *)arg1 ;
-(int)StringAsStatusCodeInfo:(id)arg1 ;
-(id)namedFeaturesAtIndex:(unsigned long long)arg1 ;
-(void)addSuggestionEntryLists:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setTurnaroundTime:(double)arg1 ;
-(void)setHasStatusCodeInfo:(BOOL)arg1 ;
-(NSMutableArray *)suggestionEntryLists;
-(double)turnaroundTime;
-(BOOL)hasStatusCodeInfo;
-(unsigned long long)hash;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(id)suggestionEntryListsAtIndex:(unsigned long long)arg1 ;
-(void)clearNamedFeatures;
-(void)addNamedFeatures:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(unsigned long long)suggestionEntryListsCount;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatusCodeInfo:(int)arg1 ;
-(id)statusCodeInfoAsString:(int)arg1 ;
-(void)setSuggestionEntryLists:(NSMutableArray *)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

