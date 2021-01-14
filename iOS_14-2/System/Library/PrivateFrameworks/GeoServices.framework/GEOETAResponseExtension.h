/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOETAServiceResponseSummary;

@interface GEOETAResponseExtension : PBCodable <NSCopying> {

	unsigned long long _debugServerLatencyMs;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasDebugServerLatencyMs;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)debugServerLatencyMs;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

