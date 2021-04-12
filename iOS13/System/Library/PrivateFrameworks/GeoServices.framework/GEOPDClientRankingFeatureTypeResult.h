/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDClientRankingFeatureTypeResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _resultFeature;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasResultFeature; 
@property (assign,nonatomic) int resultFeature; 
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
-(int)resultFeature;
-(void)setResultFeature:(int)arg1 ;
-(void)setHasResultFeature:(BOOL)arg1 ;
-(BOOL)hasResultFeature;
-(id)resultFeatureAsString:(int)arg1 ;
-(int)StringAsResultFeature:(id)arg1 ;
@end

