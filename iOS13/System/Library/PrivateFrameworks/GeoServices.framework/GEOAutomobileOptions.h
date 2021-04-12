/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOUserPreferences;

@interface GEOAutomobileOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOUserPreferences* _userPreferences;
	int _trafficType;
	BOOL _includeHistoricTravelTime;
	BOOL _includeStaticTravelTime;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType; 
@property (assign,nonatomic) BOOL hasIncludeStaticTravelTime; 
@property (assign,nonatomic) BOOL includeStaticTravelTime; 
@property (nonatomic,readonly) BOOL hasUserPreferences; 
@property (nonatomic,retain) GEOUserPreferences * userPreferences; 
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
-(BOOL)includeHistoricTravelTime;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setTrafficType:(int)arg1 ;
-(int)trafficType;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(id)trafficTypeAsString:(int)arg1 ;
-(int)StringAsTrafficType:(id)arg1 ;
-(void)setUserPreferences:(GEOUserPreferences *)arg1 ;
-(GEOUserPreferences *)userPreferences;
-(BOOL)includeStaticTravelTime;
-(void)setIncludeStaticTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeStaticTravelTime;
-(BOOL)hasUserPreferences;
@end

