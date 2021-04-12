/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(BOOL)hasRouteRequestStorage;
-(void)setNavigationInterrupted:(BOOL)arg1 ;
-(void)setHasNavigationInterrupted:(BOOL)arg1 ;
-(BOOL)hasNavigationInterrupted;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(BOOL)navigationInterrupted;
@end

