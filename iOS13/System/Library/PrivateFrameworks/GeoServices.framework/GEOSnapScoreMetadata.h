/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_destinationAccessPoints : 1;
		unsigned wrote_destinationPoints : 1;
		unsigned wrote_originAccessPoints : 1;
		unsigned wrote_originPoint : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginPoint; 
@property (nonatomic,retain) GEOSnapScorePoint * originPoint; 
@property (nonatomic,retain) NSMutableArray * originAccessPoints; 
@property (nonatomic,retain) NSMutableArray * destinationPoints; 
@property (nonatomic,retain) NSMutableArray * destinationAccessPoints; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)originAccessPointType;
+(Class)destinationPointType;
+(Class)destinationAccessPointType;
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
-(void)_readOriginPoint;
-(void)_readOriginAccessPoints;
-(void)_addNoFlagsOriginAccessPoint:(id)arg1 ;
-(void)_readDestinationPoints;
-(void)_addNoFlagsDestinationPoint:(id)arg1 ;
-(void)_readDestinationAccessPoints;
-(void)_addNoFlagsDestinationAccessPoint:(id)arg1 ;
-(GEOSnapScorePoint *)originPoint;
-(void)setOriginPoint:(GEOSnapScorePoint *)arg1 ;
-(unsigned long long)originAccessPointsCount;
-(void)clearOriginAccessPoints;
-(id)originAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)addOriginAccessPoint:(id)arg1 ;
-(unsigned long long)destinationPointsCount;
-(void)clearDestinationPoints;
-(id)destinationPointAtIndex:(unsigned long long)arg1 ;
-(void)addDestinationPoint:(id)arg1 ;
-(unsigned long long)destinationAccessPointsCount;
-(void)clearDestinationAccessPoints;
-(id)destinationAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)addDestinationAccessPoint:(id)arg1 ;
-(NSMutableArray *)originAccessPoints;
-(NSMutableArray *)destinationPoints;
-(NSMutableArray *)destinationAccessPoints;
-(BOOL)hasOriginPoint;
-(void)setOriginAccessPoints:(NSMutableArray *)arg1 ;
-(void)setDestinationPoints:(NSMutableArray *)arg1 ;
-(void)setDestinationAccessPoints:(NSMutableArray *)arg1 ;
@end

