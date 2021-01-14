/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)detourTime;
-(void)writeTo:(id)arg1 ;
-(void)setDetourTime:(int)arg1 ;
-(void)setTimeToPlace:(unsigned)arg1 ;
-(void)setDetourDistance:(int)arg1 ;
-(void)setDistanceToPlace:(unsigned)arg1 ;
-(void)setHasDetourTime:(BOOL)arg1 ;
-(BOOL)hasDetourTime;
-(unsigned)timeToPlace;
-(void)setHasTimeToPlace:(BOOL)arg1 ;
-(BOOL)hasTimeToPlace;
-(int)detourDistance;
-(void)setHasDetourDistance:(BOOL)arg1 ;
-(BOOL)hasDetourDistance;
-(unsigned)distanceToPlace;
-(void)setHasDistanceToPlace:(BOOL)arg1 ;
-(BOOL)hasDistanceToPlace;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

