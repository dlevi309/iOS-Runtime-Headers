/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_spatialEventLookups : 1;
		unsigned wrote_spatialPlaceLookups : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * spatialPlaceLookups; 
@property (nonatomic,retain) NSMutableArray * spatialEventLookups; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spatialPlaceLookupType;
+(Class)spatialEventLookupType;
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setSpatialPlaceLookups:(NSMutableArray *)arg1 ;
-(void)setSpatialEventLookups:(NSMutableArray *)arg1 ;
-(void)_readSpatialPlaceLookups;
-(void)_addNoFlagsSpatialPlaceLookup:(id)arg1 ;
-(void)_readSpatialEventLookups;
-(void)_addNoFlagsSpatialEventLookup:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupsCount;
-(void)clearSpatialPlaceLookups;
-(id)spatialPlaceLookupAtIndex:(unsigned long long)arg1 ;
-(void)addSpatialPlaceLookup:(id)arg1 ;
-(unsigned long long)spatialEventLookupsCount;
-(void)clearSpatialEventLookups;
-(id)spatialEventLookupAtIndex:(unsigned long long)arg1 ;
-(void)addSpatialEventLookup:(id)arg1 ;
-(NSMutableArray *)spatialPlaceLookups;
-(NSMutableArray *)spatialEventLookups;
@end

