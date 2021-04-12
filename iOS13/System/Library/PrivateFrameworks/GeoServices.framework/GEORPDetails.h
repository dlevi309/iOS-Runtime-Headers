/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_displayRegion : 1;
		unsigned wrote_label : 1;
		unsigned wrote_localizedDescription : 1;
		unsigned wrote_localizedTitle : 1;
		unsigned wrote_places : 1;
		unsigned wrote_directionsType : 1;
		unsigned wrote_displayStyle : 1;
		unsigned wrote_mapType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(GEORPUpdatedLabel *)arg1 ;
-(GEORPUpdatedLabel *)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)hasLabel;
-(void)readAll:(BOOL)arg1 ;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasMapType;
-(int)mapType;
-(void)_readDisplayRegion;
-(GEOMapRegion *)displayRegion;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayRegion;
-(unsigned long long)placesCount;
-(NSMutableArray *)places;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(void)addPlace:(id)arg1 ;
-(void)clearPlaces;
-(id)placeAtIndex:(unsigned long long)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(void)_readLocalizedTitle;
-(void)_readLocalizedDescription;
-(void)_readPlaces;
-(void)_addNoFlagsPlace:(id)arg1 ;
-(void)_readLabel;
-(int)displayStyle;
-(void)setDisplayStyle:(int)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasDisplayStyle;
-(id)displayStyleAsString:(int)arg1 ;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(BOOL)hasLocalizedTitle;
-(BOOL)hasLocalizedDescription;
-(int)directionsType;
-(void)setDirectionsType:(int)arg1 ;
-(void)setHasDirectionsType:(BOOL)arg1 ;
-(BOOL)hasDirectionsType;
-(id)directionsTypeAsString:(int)arg1 ;
-(int)StringAsDirectionsType:(id)arg1 ;
@end

