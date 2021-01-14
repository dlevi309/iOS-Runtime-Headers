/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitDepartureEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _tripMuid;
	unsigned _departureTime;
	struct {
		unsigned has_tripMuid : 1;
		unsigned has_departureTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) unsigned departureTime; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned)departureTime;
-(id)jsonRepresentation;
-(BOOL)hasDepartureTime;
-(void)mergeFrom:(id)arg1 ;
-(void)setDepartureTime:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)tripMuid;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

