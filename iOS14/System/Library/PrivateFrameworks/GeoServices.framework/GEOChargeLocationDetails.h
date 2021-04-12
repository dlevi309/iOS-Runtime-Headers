/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOChargeLocationDetails : PBCodable <NSCopying> {

	BOOL _arrivedAtChargeLocation;
	BOOL _routePaused;
	BOOL _routeResumed;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasArrivedAtChargeLocation; 
@property (assign,nonatomic) BOOL arrivedAtChargeLocation; 
@property (assign,nonatomic) BOOL hasRoutePaused; 
@property (assign,nonatomic) BOOL routePaused; 
@property (assign,nonatomic) BOOL hasRouteResumed; 
@property (assign,nonatomic) BOOL routeResumed; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setRoutePaused:(BOOL)arg1 ;
-(void)setRouteResumed:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)routePaused;
-(void)setHasRoutePaused:(BOOL)arg1 ;
-(BOOL)hasRoutePaused;
-(BOOL)routeResumed;
-(void)setHasRouteResumed:(BOOL)arg1 ;
-(BOOL)hasRouteResumed;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setArrivedAtChargeLocation:(BOOL)arg1 ;
-(BOOL)arrivedAtChargeLocation;
-(void)setHasArrivedAtChargeLocation:(BOOL)arg1 ;
-(BOOL)hasArrivedAtChargeLocation;
@end

