/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOPBTransitScheduleLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _lineId;
	unsigned long long _referenceTripId;
	NSData* _routingParameters;
	unsigned long long _transitId;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (assign,nonatomic) BOOL hasTransitId; 
@property (assign,nonatomic) unsigned long long transitId; 
@property (assign,nonatomic) BOOL hasReferenceTripId; 
@property (assign,nonatomic) unsigned long long referenceTripId; 
@property (nonatomic,readonly) BOOL hasRoutingParameters; 
@property (nonatomic,retain) NSData * routingParameters; 
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
-(void)setLineId:(unsigned long long)arg1 ;
-(NSData *)routingParameters;
-(void)setRoutingParameters:(NSData *)arg1 ;
-(unsigned long long)lineId;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(unsigned long long)transitId;
-(void)setTransitId:(unsigned long long)arg1 ;
-(void)setHasTransitId:(BOOL)arg1 ;
-(BOOL)hasTransitId;
-(unsigned long long)referenceTripId;
-(void)setReferenceTripId:(unsigned long long)arg1 ;
-(void)setHasReferenceTripId:(BOOL)arg1 ;
-(BOOL)hasReferenceTripId;
-(BOOL)hasRoutingParameters;
@end

