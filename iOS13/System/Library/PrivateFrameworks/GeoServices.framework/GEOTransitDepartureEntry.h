/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTripMuid; 
@property (assign,nonatomic) unsigned long long tripMuid; 
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) unsigned departureTime; 
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
-(unsigned)departureTime;
-(void)setDepartureTime:(unsigned)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(unsigned long long)tripMuid;
-(void)setTripMuid:(unsigned long long)arg1 ;
-(void)setHasTripMuid:(BOOL)arg1 ;
-(BOOL)hasTripMuid;
@end

