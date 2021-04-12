/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _elevationCm;
	unsigned _offsetM;
	struct {
		unsigned has_elevationCm : 1;
		unsigned has_offsetM : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOffsetM; 
@property (assign,nonatomic) unsigned offsetM; 
@property (assign,nonatomic) BOOL hasElevationCm; 
@property (assign,nonatomic) int elevationCm; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)offsetM;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOffsetM:(unsigned)arg1 ;
-(void)setElevationCm:(int)arg1 ;
-(void)setHasOffsetM:(BOOL)arg1 ;
-(int)elevationCm;
-(void)setHasElevationCm:(BOOL)arg1 ;
-(BOOL)hasElevationCm;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasOffsetM;
-(BOOL)isEqual:(id)arg1 ;
@end

