/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _detourDistance;
	int _detourTime;
	unsigned _distanceToPlace;
	unsigned _timeToPlace;
	struct {
		unsigned has_detourDistance : 1;
		unsigned has_detourTime : 1;
		unsigned has_distanceToPlace : 1;
		unsigned has_timeToPlace : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDetourTime; 
@property (assign,nonatomic) int detourTime; 
@property (assign,nonatomic) BOOL hasTimeToPlace; 
@property (assign,nonatomic) unsigned timeToPlace; 
@property (assign,nonatomic) BOOL hasDetourDistance; 
@property (assign,nonatomic) int detourDistance; 
@property (assign,nonatomic) BOOL hasDistanceToPlace; 
@property (assign,nonatomic) unsigned distanceToPlace; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)detourTime;
-(unsigned)timeToPlace;
-(int)detourDistance;
-(unsigned)distanceToPlace;
-(void)setDetourTime:(int)arg1 ;
-(void)setHasDetourTime:(BOOL)arg1 ;
-(BOOL)hasDetourTime;
-(void)setTimeToPlace:(unsigned)arg1 ;
-(void)setHasTimeToPlace:(BOOL)arg1 ;
-(BOOL)hasTimeToPlace;
-(void)setDetourDistance:(int)arg1 ;
-(void)setHasDetourDistance:(BOOL)arg1 ;
-(BOOL)hasDetourDistance;
-(void)setDistanceToPlace:(unsigned)arg1 ;
-(void)setHasDistanceToPlace:(BOOL)arg1 ;
-(BOOL)hasDistanceToPlace;
@end

