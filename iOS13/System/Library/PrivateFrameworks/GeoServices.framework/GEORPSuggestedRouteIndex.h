/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying> {

	SCD_Struct_GE19* _clusteredRouteRideSelections;
	unsigned _directionsResponseIndex;
	unsigned _directionsResponseSuggestedRoutesIndex;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned directionsResponseIndex; 
@property (assign,nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex; 
@property (assign,nonatomic) unsigned directionsResponseSuggestedRoutesIndex; 
@property (nonatomic,readonly) unsigned long long clusteredRouteRideSelectionsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteRideSelections; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
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
-(unsigned long long)clusteredRouteRideSelectionsCount;
-(void)clearClusteredRouteRideSelections;
-(unsigned)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1 ;
-(void)addClusteredRouteRideSelections:(unsigned)arg1 ;
-(unsigned)directionsResponseIndex;
-(void)setDirectionsResponseIndex:(unsigned)arg1 ;
-(void)setHasDirectionsResponseIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseIndex;
-(unsigned)directionsResponseSuggestedRoutesIndex;
-(void)setDirectionsResponseSuggestedRoutesIndex:(unsigned)arg1 ;
-(void)setHasDirectionsResponseSuggestedRoutesIndex:(BOOL)arg1 ;
-(BOOL)hasDirectionsResponseSuggestedRoutesIndex;
-(unsigned*)clusteredRouteRideSelections;
-(void)setClusteredRouteRideSelections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

