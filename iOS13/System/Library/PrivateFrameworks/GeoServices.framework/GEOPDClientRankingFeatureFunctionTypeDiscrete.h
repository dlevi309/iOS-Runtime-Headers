/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)featureValueThresholdLow;
-(void)setFeatureValueThresholdLow:(float)arg1 ;
-(void)setHasFeatureValueThresholdLow:(BOOL)arg1 ;
-(BOOL)hasFeatureValueThresholdLow;
-(float)featureWeightLow;
-(void)setFeatureWeightLow:(float)arg1 ;
-(void)setHasFeatureWeightLow:(BOOL)arg1 ;
-(BOOL)hasFeatureWeightLow;
-(float)featureValueThresholdHigh;
-(void)setFeatureValueThresholdHigh:(float)arg1 ;
-(void)setHasFeatureValueThresholdHigh:(BOOL)arg1 ;
-(BOOL)hasFeatureValueThresholdHigh;
-(float)featureWeightHigh;
-(void)setFeatureWeightHigh:(float)arg1 ;
-(void)setHasFeatureWeightHigh:(BOOL)arg1 ;
-(BOOL)hasFeatureWeightHigh;
@end

