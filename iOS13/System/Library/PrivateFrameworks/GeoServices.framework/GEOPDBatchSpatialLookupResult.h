/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _spatialEventLookupResults;
	NSMutableArray* _spatialPlaceLookupResults;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCode;
	struct {
		unsigned has_statusCode : 1;
		unsigned read_unknownFields : 1;
		unsigned read_spatialEventLookupResults : 1;
		unsigned read_spatialPlaceLookupResults : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_spatialEventLookupResults : 1;
		unsigned wrote_spatialPlaceLookupResults : 1;
		unsigned wrote_statusCode : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * spatialPlaceLookupResults; 
@property (nonatomic,retain) NSMutableArray * spatialEventLookupResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spatialPlaceLookupResultType;
+(Class)spatialEventLookupResultType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(NSMutableArray *)spatialPlaceLookupResults;
-(NSMutableArray *)spatialEventLookupResults;
-(void)_readSpatialPlaceLookupResults;
-(void)_addNoFlagsSpatialPlaceLookupResult:(id)arg1 ;
-(void)_readSpatialEventLookupResults;
-(void)_addNoFlagsSpatialEventLookupResult:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupResultsCount;
-(void)clearSpatialPlaceLookupResults;
-(id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1 ;
-(void)addSpatialPlaceLookupResult:(id)arg1 ;
-(unsigned long long)spatialEventLookupResultsCount;
-(void)clearSpatialEventLookupResults;
-(id)spatialEventLookupResultAtIndex:(unsigned long long)arg1 ;
-(void)addSpatialEventLookupResult:(id)arg1 ;
-(void)setSpatialPlaceLookupResults:(NSMutableArray *)arg1 ;
-(void)setSpatialEventLookupResults:(NSMutableArray *)arg1 ;
@end

