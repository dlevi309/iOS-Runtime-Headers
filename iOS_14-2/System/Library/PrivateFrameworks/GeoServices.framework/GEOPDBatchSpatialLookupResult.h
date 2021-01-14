/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * spatialPlaceLookupResults; 
@property (nonatomic,retain) NSMutableArray * spatialEventLookupResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spatialPlaceLookupResultType;
+(Class)spatialEventLookupResultType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(id)description;
-(void)addSpatialPlaceLookupResult:(id)arg1 ;
-(void)addSpatialEventLookupResult:(id)arg1 ;
-(unsigned long long)spatialPlaceLookupResultsCount;
-(void)clearSpatialPlaceLookupResults;
-(NSMutableArray *)spatialPlaceLookupResults;
-(id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spatialEventLookupResultsCount;
-(void)clearSpatialEventLookupResults;
-(id)spatialEventLookupResultAtIndex:(unsigned long long)arg1 ;
-(void)setSpatialPlaceLookupResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spatialEventLookupResults;
-(void)setSpatialEventLookupResults:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

