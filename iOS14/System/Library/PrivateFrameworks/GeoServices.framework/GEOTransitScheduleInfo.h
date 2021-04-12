/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOTransitEntry;

@interface GEOTransitScheduleInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTransitEntry* _entry;

}

@property (nonatomic,readonly) BOOL hasEntry; 
@property (nonatomic,retain) GEOTransitEntry * entry; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)tripID;
-(id)jsonRepresentation;
-(unsigned long long)lineID;
-(void)mergeFrom:(id)arg1 ;
-(GEOTransitEntry *)entry;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setEntry:(GEOTransitEntry *)arg1 ;
-(BOOL)hasEntry;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)routingParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)staticDepartureDate;
-(id)windowStartDate;
@end

