/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOJunctionInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	int _drivingSide;
	int _junctionType;
	int _maneuverType;
	SCD_Struct_GE85 _flags;

}

@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)maneuverType;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(BOOL)hasDrivingSide;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(void)clearJunctionElements;
-(unsigned long long)junctionElementsCount;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(int)junctionType;
-(void)setJunctionType:(int)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(GEOJunctionElement*)junctionElements;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
@end

