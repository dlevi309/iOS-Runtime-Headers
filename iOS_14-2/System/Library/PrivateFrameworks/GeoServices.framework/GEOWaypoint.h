/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOLocation, GEOPlaceSearchRequest;

@interface GEOWaypoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _entryPoints;
	GEOLocation* _location;
	GEOPlaceSearchRequest* _placeSearchRequest;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_entryPoints : 1;
		unsigned read_location : 1;
		unsigned read_placeSearchRequest : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,retain) NSMutableArray * entryPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)entryPointType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)entryPointsCount;
-(NSMutableArray *)entryPoints;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(GEOLocation *)location;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)clearEntryPoints;
-(id)entryPointAtIndex:(unsigned long long)arg1 ;
-(void)setEntryPoints:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addEntryPoint:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

