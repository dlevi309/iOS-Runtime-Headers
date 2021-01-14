/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOStorageRouteRequestStorage;

@interface MSPDirectionsSearch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOStorageRouteRequestStorage* _routeRequestStorage;
	BOOL _navigationInterrupted;
	SCD_Struct_MS3 _has;

}

@property (nonatomic,readonly) BOOL hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (assign,nonatomic) BOOL hasNavigationInterrupted; 
@property (assign,nonatomic) BOOL navigationInterrupted;                                       //@synthesize navigationInterrupted=_navigationInterrupted - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)navigationInterrupted;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setNavigationInterrupted:(BOOL)arg1 ;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRouteRequestStorage;
-(void)setHasNavigationInterrupted:(BOOL)arg1 ;
-(BOOL)hasNavigationInterrupted;
@end

