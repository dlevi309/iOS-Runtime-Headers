/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOSnapScorePoint;

@interface GEOSnapScoreMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _destinationAccessPoints;
	NSMutableArray* _destinationPoints;
	NSMutableArray* _originAccessPoints;
	GEOSnapScorePoint* _originPoint;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_destinationAccessPoints : 1;
		unsigned read_destinationPoints : 1;
		unsigned read_originAccessPoints : 1;
		unsigned read_originPoint : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginPoint; 
@property (nonatomic,retain) GEOSnapScorePoint * originPoint; 
@property (nonatomic,retain) NSMutableArray * originAccessPoints; 
@property (nonatomic,retain) NSMutableArray * destinationPoints; 
@property (nonatomic,retain) NSMutableArray * destinationAccessPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)originAccessPointType;
+(Class)destinationPointType;
+(Class)destinationAccessPointType;
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
-(GEOSnapScorePoint *)originPoint;
-(void)setOriginPoint:(GEOSnapScorePoint *)arg1 ;
-(void)addOriginAccessPoint:(id)arg1 ;
-(BOOL)hasOriginPoint;
-(void)addDestinationPoint:(id)arg1 ;
-(void)addDestinationAccessPoint:(id)arg1 ;
-(unsigned long long)originAccessPointsCount;
-(NSMutableArray *)destinationPoints;
-(void)clearOriginAccessPoints;
-(id)originAccessPointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)destinationPointsCount;
-(void)clearDestinationPoints;
-(id)destinationPointAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)destinationAccessPointsCount;
-(void)clearDestinationAccessPoints;
-(id)destinationAccessPointAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)originAccessPoints;
-(void)setOriginAccessPoints:(NSMutableArray *)arg1 ;
-(void)setDestinationPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)destinationAccessPoints;
-(void)setDestinationAccessPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

