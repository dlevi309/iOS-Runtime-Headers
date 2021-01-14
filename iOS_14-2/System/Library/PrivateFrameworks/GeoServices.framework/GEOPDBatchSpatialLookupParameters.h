/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _spatialEventLookups;
	NSMutableArray* _spatialPlaceLookups;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_spatialEventLookups : 1;
		unsigned read_spatialPlaceLookups : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * spatialPlaceLookups; 
@property (nonatomic,retain) NSMutableArray * spatialEventLookups; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spatialPlaceLookupType;
+(Class)spatialEventLookupType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)spatialPlaceLookups;
-(void)addSpatialPlaceLookup:(id)arg1 ;
-(void)addSpatialEventLookup:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupsCount;
-(void)clearSpatialPlaceLookups;
-(id)spatialPlaceLookupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spatialEventLookupsCount;
-(void)clearSpatialEventLookups;
-(id)spatialEventLookupAtIndex:(unsigned long long)arg1 ;
-(void)setSpatialPlaceLookups:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spatialEventLookups;
-(void)setSpatialEventLookups:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

