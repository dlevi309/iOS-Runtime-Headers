/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOMinimumVisibleElevationRange : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _lowerBoundCm;
	int _upperBoundCm;
	struct {
		unsigned has_lowerBoundCm : 1;
		unsigned has_upperBoundCm : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLowerBoundCm; 
@property (assign,nonatomic) int lowerBoundCm; 
@property (assign,nonatomic) BOOL hasUpperBoundCm; 
@property (assign,nonatomic) int upperBoundCm; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setLowerBoundCm:(int)arg1 ;
-(void)setUpperBoundCm:(int)arg1 ;
-(int)lowerBoundCm;
-(void)setHasLowerBoundCm:(BOOL)arg1 ;
-(BOOL)hasLowerBoundCm;
-(int)upperBoundCm;
-(void)setHasUpperBoundCm:(BOOL)arg1 ;
-(BOOL)hasUpperBoundCm;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

