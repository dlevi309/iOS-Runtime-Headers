/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDRigMetrics : PBCodable <NSCopying> {

	SCD_Struct_GE19* _occlusionScores;

}

@property (nonatomic,readonly) unsigned long long occlusionScoresCount; 
@property (nonatomic,readonly) unsigned* occlusionScores; 
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
-(unsigned long long)occlusionScoresCount;
-(void)clearOcclusionScores;
-(unsigned)occlusionScoreAtIndex:(unsigned long long)arg1 ;
-(void)addOcclusionScore:(unsigned)arg1 ;
-(unsigned*)occlusionScores;
-(void)setOcclusionScores:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

