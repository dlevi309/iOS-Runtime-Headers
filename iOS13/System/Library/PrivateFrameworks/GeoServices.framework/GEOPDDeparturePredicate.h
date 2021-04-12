/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDTimeRange _timeRange;
	unsigned _numAdditionalDepartures;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTimeRange; 
@property (assign,nonatomic) GEOPDTimeRange timeRange; 
@property (assign,nonatomic) BOOL hasNumAdditionalDepartures; 
@property (assign,nonatomic) unsigned numAdditionalDepartures; 
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
-(BOOL)hasTimeRange;
-(void)setTimeRange:(GEOPDTimeRange)arg1 ;
-(GEOPDTimeRange)timeRange;
-(BOOL)hasNumAdditionalDepartures;
-(void)setNumAdditionalDepartures:(unsigned)arg1 ;
-(void)setHasTimeRange:(BOOL)arg1 ;
-(unsigned)numAdditionalDepartures;
-(void)setHasNumAdditionalDepartures:(BOOL)arg1 ;
-(id)initWithTraitsTransitModeFilter:(id)arg1 ;
@end

