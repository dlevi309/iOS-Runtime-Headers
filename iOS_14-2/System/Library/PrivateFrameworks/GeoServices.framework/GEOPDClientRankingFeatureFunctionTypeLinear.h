/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	float _featureMaxRelativeValue;
	float _featureMeanValue;
	float _featureWeight;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasFeatureWeight; 
@property (assign,nonatomic) float featureWeight; 
@property (assign,nonatomic) BOOL hasFeatureMaxRelativeValue; 
@property (assign,nonatomic) float featureMaxRelativeValue; 
@property (assign,nonatomic) BOOL hasFeatureMeanValue; 
@property (assign,nonatomic) float featureMeanValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFeatureWeight:(float)arg1 ;
-(void)setFeatureMaxRelativeValue:(float)arg1 ;
-(void)setFeatureMeanValue:(float)arg1 ;
-(float)featureWeight;
-(void)setHasFeatureWeight:(BOOL)arg1 ;
-(BOOL)hasFeatureWeight;
-(float)featureMaxRelativeValue;
-(void)setHasFeatureMaxRelativeValue:(BOOL)arg1 ;
-(float)featureMeanValue;
-(BOOL)hasFeatureMaxRelativeValue;
-(void)setHasFeatureMeanValue:(BOOL)arg1 ;
-(BOOL)hasFeatureMeanValue;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

