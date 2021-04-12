/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapRegion, GEORPUpdatedLabel, NSString, NSMutableArray;

@interface GEORPDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapRegion* _displayRegion;
	GEORPUpdatedLabel* _label;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	NSMutableArray* _places;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _directionsType;
	int _displayStyle;
	int _mapType;
	struct {
		unsigned has_directionsType : 1;
		unsigned has_displayStyle : 1;
		unsigned has_mapType : 1;
		unsigned read_displayRegion : 1;
		unsigned read_label : 1;
		unsigned read_localizedDescription : 1;
		unsigned read_localizedTitle : 1;
		unsigned read_places : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle; 
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion; 
@property (nonatomic,retain) NSMutableArray * places; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEORPUpdatedLabel * label; 
@property (assign,nonatomic) BOOL hasDirectionsType; 
@property (assign,nonatomic) int directionsType; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
+(Class)placeType;
+(BOOL)isValid:(id)arg1 ;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDisplayRegion;
-(NSString *)localizedTitle;
-(GEOMapRegion *)displayRegion;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasLabel;
-(NSMutableArray *)places;
-(id)jsonRepresentation;
-(int)directionsType;
-(void)setDirectionsType:(int)arg1 ;
-(BOOL)hasLocalizedTitle;
-(BOOL)hasLocalizedDescription;
-(void)setHasDirectionsType:(BOOL)arg1 ;
-(BOOL)hasDirectionsType;
-(id)directionsTypeAsString:(int)arg1 ;
-(int)StringAsDirectionsType:(id)arg1 ;
-(int)mapType;
-(int)StringAsMapType:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(void)setDisplayStyle:(int)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(BOOL)hasMapType;
-(BOOL)hasDisplayStyle;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(unsigned long long)hash;
-(void)addPlace:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(GEORPUpdatedLabel *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)displayStyleAsString:(int)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)placesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearPlaces;
-(id)placeAtIndex:(unsigned long long)arg1 ;
-(GEORPUpdatedLabel *)label;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)displayStyle;
@end

