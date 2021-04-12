/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _extendedLocations;
	NSMutableArray* _locations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeTypeLimit;
	BOOL _preserveOriginalLocation;
	struct {
		unsigned has_placeTypeLimit : 1;
		unsigned has_preserveOriginalLocation : 1;
		unsigned read_unknownFields : 1;
		unsigned read_extendedLocations : 1;
		unsigned read_locations : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (assign,nonatomic) BOOL hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit; 
@property (assign,nonatomic) BOOL hasPreserveOriginalLocation; 
@property (assign,nonatomic) BOOL preserveOriginalLocation; 
@property (nonatomic,retain) NSMutableArray * extendedLocations; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)extendedLocationType;
+(Class)locationType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(PBUnknownFields *)unknownFields;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasPreserveOriginalLocation:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(unsigned long long)locationsCount;
-(void)addExtendedLocation:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(id)description;
-(void)setExtendedLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)extendedLocations;
-(void)setHasPlaceTypeLimit:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeLimit;
-(BOOL)preserveOriginalLocation;
-(int)StringAsPlaceTypeLimit:(id)arg1 ;
-(int)placeTypeLimit;
-(unsigned long long)hash;
-(id)extendedLocationAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)clearExtendedLocations;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)placeTypeLimitAsString:(int)arg1 ;
-(void)setPreserveOriginalLocation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(unsigned long long)extendedLocationsCount;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPreserveOriginalLocation;
@end

