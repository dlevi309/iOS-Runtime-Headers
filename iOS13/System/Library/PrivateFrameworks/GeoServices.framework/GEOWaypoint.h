/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_entryPoints : 1;
		unsigned wrote_location : 1;
		unsigned wrote_placeSearchRequest : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (nonatomic,retain) NSMutableArray * entryPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entryPointType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPlaceSearchRequest;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(BOOL)hasLocation;
-(void)clearSensitiveFields;
-(void)_readLocation;
-(void)_readEntryPoints;
-(void)_addNoFlagsEntryPoint:(id)arg1 ;
-(unsigned long long)entryPointsCount;
-(void)clearEntryPoints;
-(id)entryPointAtIndex:(unsigned long long)arg1 ;
-(void)addEntryPoint:(id)arg1 ;
-(NSMutableArray *)entryPoints;
-(void)setEntryPoints:(NSMutableArray *)arg1 ;
@end

