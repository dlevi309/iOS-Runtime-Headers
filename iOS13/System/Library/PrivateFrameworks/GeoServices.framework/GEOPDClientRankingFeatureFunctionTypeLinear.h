/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasFeatureWeight; 
@property (assign,nonatomic) float featureWeight; 
@property (assign,nonatomic) BOOL hasFeatureMaxRelativeValue; 
@property (assign,nonatomic) float featureMaxRelativeValue; 
@property (assign,nonatomic) BOOL hasFeatureMeanValue; 
@property (assign,nonatomic) float featureMeanValue; 
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
-(float)featureWeight;
-(void)setFeatureWeight:(float)arg1 ;
-(void)setHasFeatureWeight:(BOOL)arg1 ;
-(BOOL)hasFeatureWeight;
-(float)featureMaxRelativeValue;
-(void)setFeatureMaxRelativeValue:(float)arg1 ;
-(void)setHasFeatureMaxRelativeValue:(BOOL)arg1 ;
-(BOOL)hasFeatureMaxRelativeValue;
-(float)featureMeanValue;
-(void)setFeatureMeanValue:(float)arg1 ;
-(void)setHasFeatureMeanValue:(BOOL)arg1 ;
-(BOOL)hasFeatureMeanValue;
@end

