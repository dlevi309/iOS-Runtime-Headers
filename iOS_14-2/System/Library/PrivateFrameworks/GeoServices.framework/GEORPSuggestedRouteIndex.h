/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {

	SCD_Struct_GE17* _clusteredRouteRideSelections;
	unsigned _directionsResponseIndex;
	unsigned _directionsResponseSuggestedRoutesIndex;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned directionsResponseIndex; 
@property (assign,nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex; 
@property (assign,nonatomic) unsigned directionsResponseSuggestedRoutesIndex; 
@property (nonatomic,readonly) unsigned long long clusteredRouteRideSelectionsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteRideSelections; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setDirectionsResponseIndex:(unsigned)arg1 ;
-(void)setDirectionsResponseSuggestedRoutesIndex:(unsigned)arg1 ;
-(void)addClusteredRouteRideSelections:(unsigned)arg1 ;
-(unsigned long long)clusteredRouteRideSelectionsCount;
-(unsigned)directionsResponseIndex;
-(void)clearClusteredRouteRideSelections;
-(unsigned)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasDirectionsResponseIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseIndex;
-(unsigned*)clusteredRouteRideSelections;
-(unsigned)directionsResponseSuggestedRoutesIndex;
-(void)setHasDirectionsResponseSuggestedRoutesIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseSuggestedRoutesIndex;
-(void)setClusteredRouteRideSelections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

