/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOUpdateLocation : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _metersFromStartOfRoute;
	unsigned _minSecondsSinceLastUpdate;
	struct {
		unsigned has_metersFromStartOfRoute : 1;
		unsigned has_minSecondsSinceLastUpdate : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMetersFromStartOfRoute; 
@property (assign,nonatomic) unsigned metersFromStartOfRoute; 
@property (assign,nonatomic) BOOL hasMinSecondsSinceLastUpdate; 
@property (assign,nonatomic) unsigned minSecondsSinceLastUpdate; 
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
-(void)setMetersFromStartOfRoute:(unsigned)arg1 ;
-(void)setMinSecondsSinceLastUpdate:(unsigned)arg1 ;
-(unsigned)metersFromStartOfRoute;
-(void)setHasMetersFromStartOfRoute:(BOOL)arg1 ;
-(BOOL)hasMetersFromStartOfRoute;
-(unsigned)minSecondsSinceLastUpdate;
-(void)setHasMinSecondsSinceLastUpdate:(BOOL)arg1 ;
-(BOOL)hasMinSecondsSinceLastUpdate;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

