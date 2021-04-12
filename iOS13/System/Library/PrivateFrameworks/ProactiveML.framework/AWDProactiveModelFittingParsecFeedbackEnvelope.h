/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingLinRegObjectiveFeatures, AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLogRegWeights;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying> {

	AWDProactiveModelFittingEvaluation* _evaluation;
	AWDProactiveModelFittingLinRegFeatureMatrix* _linRegFeatureMatrix;
	AWDProactiveModelFittingLinRegObjectiveFeatures* _linRegObjectiveFeatures;
	AWDProactiveModelFittingLogRegGradient* _logRegGradient;
	AWDProactiveModelFittingLogRegWeights* _logRegWeights;

}

@property (nonatomic,readonly) BOOL hasEvaluation; 
@property (nonatomic,retain) AWDProactiveModelFittingEvaluation * evaluation;                                        //@synthesize evaluation=_evaluation - In the implementation block
@property (nonatomic,readonly) BOOL hasLogRegWeights; 
@property (nonatomic,retain) AWDProactiveModelFittingLogRegWeights * logRegWeights;                                  //@synthesize logRegWeights=_logRegWeights - In the implementation block
@property (nonatomic,readonly) BOOL hasLogRegGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingLogRegGradient * logRegGradient;                                //@synthesize logRegGradient=_logRegGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasLinRegFeatureMatrix; 
@property (nonatomic,retain) AWDProactiveModelFittingLinRegFeatureMatrix * linRegFeatureMatrix;                      //@synthesize linRegFeatureMatrix=_linRegFeatureMatrix - In the implementation block
@property (nonatomic,readonly) BOOL hasLinRegObjectiveFeatures; 
@property (nonatomic,retain) AWDProactiveModelFittingLinRegObjectiveFeatures * linRegObjectiveFeatures;              //@synthesize linRegObjectiveFeatures=_linRegObjectiveFeatures - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasEvaluation;
-(BOOL)hasLogRegWeights;
-(BOOL)hasLogRegGradient;
-(BOOL)hasLinRegFeatureMatrix;
-(BOOL)hasLinRegObjectiveFeatures;
-(AWDProactiveModelFittingEvaluation *)evaluation;
-(void)setEvaluation:(AWDProactiveModelFittingEvaluation *)arg1 ;
-(AWDProactiveModelFittingLogRegWeights *)logRegWeights;
-(void)setLogRegWeights:(AWDProactiveModelFittingLogRegWeights *)arg1 ;
-(AWDProactiveModelFittingLogRegGradient *)logRegGradient;
-(void)setLogRegGradient:(AWDProactiveModelFittingLogRegGradient *)arg1 ;
-(AWDProactiveModelFittingLinRegFeatureMatrix *)linRegFeatureMatrix;
-(void)setLinRegFeatureMatrix:(AWDProactiveModelFittingLinRegFeatureMatrix *)arg1 ;
-(AWDProactiveModelFittingLinRegObjectiveFeatures *)linRegObjectiveFeatures;
-(void)setLinRegObjectiveFeatures:(AWDProactiveModelFittingLinRegObjectiveFeatures *)arg1 ;
@end

