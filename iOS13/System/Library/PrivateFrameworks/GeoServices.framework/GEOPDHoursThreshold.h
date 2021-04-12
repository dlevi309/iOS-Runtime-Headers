/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDHoursThreshold : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _closingSoonMessageThresholdSecond;
	unsigned _openingSoonMessageThresholdSecond;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasOpeningSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned openingSoonMessageThresholdSecond; 
@property (assign,nonatomic) BOOL hasClosingSoonMessageThresholdSecond; 
@property (assign,nonatomic) unsigned closingSoonMessageThresholdSecond; 
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
-(void)setOpeningSoonMessageThresholdSecond:(unsigned)arg1 ;
-(void)setClosingSoonMessageThresholdSecond:(unsigned)arg1 ;
-(unsigned)openingSoonMessageThresholdSecond;
-(unsigned)closingSoonMessageThresholdSecond;
-(void)setHasOpeningSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasOpeningSoonMessageThresholdSecond;
-(void)setHasClosingSoonMessageThresholdSecond:(BOOL)arg1 ;
-(BOOL)hasClosingSoonMessageThresholdSecond;
@end

