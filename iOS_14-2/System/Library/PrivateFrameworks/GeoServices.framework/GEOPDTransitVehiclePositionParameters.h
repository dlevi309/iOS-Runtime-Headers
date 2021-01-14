/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDTransitVehiclePositionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _tripIds;

}

@property (nonatomic,readonly) unsigned long long tripIdsCount; 
@property (nonatomic,readonly) unsigned long long* tripIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long*)tripIds;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)tripIdsCount;
-(void)clearTripIds;
-(unsigned long long)tripIdAtIndex:(unsigned long long)arg1 ;
-(void)setTripIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)addTripId:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

