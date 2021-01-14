/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	float _featureValueThresholdHigh;
	float _featureValueThresholdLow;
	float _featureWeightHigh;
	float _featureWeightLow;
	struct {
		unsigned has_featureValueThresholdHigh : 1;
		unsigned has_featureValueThresholdLow : 1;
		unsigned has_featureWeightHigh : 1;
		unsigned has_featureWeightLow : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeatureValueThresholdLow; 
@property (assign,nonatomic) float featureValueThresholdLow; 
@property (assign,nonatomic) BOOL hasFeatureWeightLow; 
@property (assign,nonatomic) float featureWeightLow; 
@property (assign,nonatomic) BOOL hasFeatureValueThresholdHigh; 
@property (assign,nonatomic) float featureValueThresholdHigh; 
@property (assign,nonatomic) BOOL hasFeatureWeightHigh; 
@property (assign,nonatomic) float featureWeightHigh; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFeatureValueThresholdLow:(float)arg1 ;
-(void)setFeatureWeightLow:(float)arg1 ;
-(void)setFeatureValueThresholdHigh:(float)arg1 ;
-(void)setFeatureWeightHigh:(float)arg1 ;
-(float)featureValueThresholdLow;
-(void)setHasFeatureValueThresholdLow:(BOOL)arg1 ;
-(BOOL)hasFeatureValueThresholdLow;
-(float)featureWeightLow;
-(void)setHasFeatureWeightLow:(BOOL)arg1 ;
-(BOOL)hasFeatureWeightLow;
-(float)featureValueThresholdHigh;
-(void)setHasFeatureValueThresholdHigh:(BOOL)arg1 ;
-(BOOL)hasFeatureValueThresholdHigh;
-(float)featureWeightHigh;
-(void)setHasFeatureWeightHigh:(BOOL)arg1 ;
-(BOOL)hasFeatureWeightHigh;
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

