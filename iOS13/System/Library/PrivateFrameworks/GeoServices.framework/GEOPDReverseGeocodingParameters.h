/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_extendedLocations : 1;
		unsigned wrote_locations : 1;
		unsigned wrote_placeTypeLimit : 1;
		unsigned wrote_preserveOriginalLocation : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (assign,nonatomic) BOOL hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit; 
@property (assign,nonatomic) BOOL hasPreserveOriginalLocation; 
@property (assign,nonatomic) BOOL preserveOriginalLocation; 
@property (nonatomic,retain) NSMutableArray * extendedLocations; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationType;
+(Class)extendedLocationType;
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
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(int)placeTypeLimit;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(void)setHasPlaceTypeLimit:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeLimit;
-(id)placeTypeLimitAsString:(int)arg1 ;
-(int)StringAsPlaceTypeLimit:(id)arg1 ;
-(NSMutableArray *)extendedLocations;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)_readLocations;
-(void)_addNoFlagsLocation:(id)arg1 ;
-(void)_readExtendedLocations;
-(void)_addNoFlagsExtendedLocation:(id)arg1 ;
-(unsigned long long)extendedLocationsCount;
-(void)clearExtendedLocations;
-(id)extendedLocationAtIndex:(unsigned long long)arg1 ;
-(void)addExtendedLocation:(id)arg1 ;
-(BOOL)preserveOriginalLocation;
-(void)setPreserveOriginalLocation:(BOOL)arg1 ;
-(void)setHasPreserveOriginalLocation:(BOOL)arg1 ;
-(BOOL)hasPreserveOriginalLocation;
-(void)setExtendedLocations:(NSMutableArray *)arg1 ;
@end

