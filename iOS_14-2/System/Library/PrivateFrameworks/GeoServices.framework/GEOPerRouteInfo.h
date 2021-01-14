/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPerRouteInfo : PBCodable <NSCopying> {

	GEOSessionID _routeUuid;
	unsigned long long _etaServiceTravelTime;
	unsigned long long _originalTravelTime;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasOriginalTravelTime; 
@property (assign,nonatomic) unsigned long long originalTravelTime; 
@property (assign,nonatomic) BOOL hasEtaServiceTravelTime; 
@property (assign,nonatomic) unsigned long long etaServiceTravelTime; 
@property (assign,nonatomic) BOOL hasRouteUuid; 
@property (assign,nonatomic) GEOSessionID routeUuid; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOSessionID)routeUuid;
-(void)setRouteUuid:(GEOSessionID)arg1 ;
-(void)setOriginalTravelTime:(unsigned long long)arg1 ;
-(void)setEtaServiceTravelTime:(unsigned long long)arg1 ;
-(unsigned long long)originalTravelTime;
-(void)setHasOriginalTravelTime:(BOOL)arg1 ;
-(BOOL)hasOriginalTravelTime;
-(unsigned long long)etaServiceTravelTime;
-(void)setHasEtaServiceTravelTime:(BOOL)arg1 ;
-(void)setHasRouteUuid:(BOOL)arg1 ;
-(BOOL)hasEtaServiceTravelTime;
-(BOOL)hasRouteUuid;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

