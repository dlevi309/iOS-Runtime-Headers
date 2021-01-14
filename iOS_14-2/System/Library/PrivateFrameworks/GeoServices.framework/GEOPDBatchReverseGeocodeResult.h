/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDPlace;

@interface GEOPDBatchReverseGeocodeResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _additionalPlaces;
	GEOPDPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_additionalPlaces : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,retain) NSMutableArray * additionalPlaces; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)additionalPlaceType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(unsigned long long)additionalPlacesCount;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addAdditionalPlace:(id)arg1 ;
-(void)clearAdditionalPlaces;
-(id)additionalPlaceAtIndex:(unsigned long long)arg1 ;
-(void)setAdditionalPlaces:(NSMutableArray *)arg1 ;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPlace;
-(NSMutableArray *)additionalPlaces;
-(unsigned long long)hash;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

