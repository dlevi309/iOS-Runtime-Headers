/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDTransitIncident : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _transitIncidents;

}

@property (nonatomic,retain) NSMutableArray * transitIncidents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(BOOL*)arg2 ;
+(id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1 ;
+(Class)transitIncidentType;
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
-(NSMutableArray *)transitIncidents;
-(void)addTransitIncident:(id)arg1 ;
-(unsigned long long)transitIncidentsCount;
-(void)clearTransitIncidents;
-(id)transitIncidentAtIndex:(unsigned long long)arg1 ;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
@end

