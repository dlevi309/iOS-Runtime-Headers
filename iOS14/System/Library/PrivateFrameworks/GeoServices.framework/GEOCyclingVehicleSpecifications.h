/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOCyclingVehicleSpecifications : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _isEbike;
	struct {
		unsigned has_isEbike : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIsEbike; 
@property (assign,nonatomic) BOOL isEbike; 
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
-(BOOL)isEbike;
-(void)setIsEbike:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasIsEbike;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasIsEbike:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

