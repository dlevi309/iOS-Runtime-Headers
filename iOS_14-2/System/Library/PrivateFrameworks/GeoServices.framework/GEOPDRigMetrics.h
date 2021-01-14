/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDRigMetrics : PBCodable <NSCopying> {

	SCD_Struct_GE17* _occlusionScores;

}

@property (nonatomic,readonly) unsigned long long occlusionScoresCount; 
@property (nonatomic,readonly) unsigned* occlusionScores; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setOcclusionScores:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)occlusionScoresCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)clearOcclusionScores;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)occlusionScores;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addOcclusionScore:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)occlusionScoreAtIndex:(unsigned long long)arg1 ;
@end

