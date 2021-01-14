/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingQuantizedSparseVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable <NSCopying> {

	unsigned long long _iteration;
	unsigned long long _timestamp;
	AWDProactiveModelFittingQuantizedDenseVector* _denseQuantizedGradient;
	AWDProactiveModelFittingEvalMetrics* _evaluationMetrics;
	float _gradientL2norm;
	float _gradientScaleFactor;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatGradient;
	AWDProactiveModelFittingQuantizedSparseVector* _sparseQuantizedGradient;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                        //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatGradient;                      //@synthesize sparseFloatGradient=_sparseFloatGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;                              //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasEvaluationMetrics; 
@property (nonatomic,retain) AWDProactiveModelFittingEvalMetrics * evaluationMetrics;                              //@synthesize evaluationMetrics=_evaluationMetrics - In the implementation block
@property (assign,nonatomic) BOOL hasIteration; 
@property (assign,nonatomic) unsigned long long iteration;                                                         //@synthesize iteration=_iteration - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseQuantizedGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedSparseVector * sparseQuantizedGradient;              //@synthesize sparseQuantizedGradient=_sparseQuantizedGradient - In the implementation block
@property (assign,nonatomic) BOOL hasGradientScaleFactor; 
@property (assign,nonatomic) float gradientScaleFactor;                                                            //@synthesize gradientScaleFactor=_gradientScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL hasGradientL2norm; 
@property (assign,nonatomic) float gradientL2norm;                                                                 //@synthesize gradientL2norm=_gradientL2norm - In the implementation block
@property (nonatomic,readonly) BOOL hasDenseQuantizedGradient; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedDenseVector * denseQuantizedGradient;                //@synthesize denseQuantizedGradient=_denseQuantizedGradient - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasGradient;
-(void)setIteration:(unsigned long long)arg1 ;
-(void)setHasIteration:(BOOL)arg1 ;
-(BOOL)hasIteration;
-(unsigned long long)iteration;
-(BOOL)hasModelInfo;
-(BOOL)hasMinibatchStats;
-(BOOL)hasEvaluationMetrics;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(AWDProactiveModelFittingEvalMetrics *)evaluationMetrics;
-(void)setEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 ;
-(float)gradientValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)gradientLength;
-(BOOL)hasSparseFloatGradient;
-(BOOL)hasSparseQuantizedGradient;
-(void)setGradientScaleFactor:(float)arg1 ;
-(void)setHasGradientScaleFactor:(BOOL)arg1 ;
-(BOOL)hasGradientScaleFactor;
-(void)setGradientL2norm:(float)arg1 ;
-(void)setHasGradientL2norm:(BOOL)arg1 ;
-(BOOL)hasGradientL2norm;
-(BOOL)hasDenseQuantizedGradient;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatGradient;
-(void)setSparseFloatGradient:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(AWDProactiveModelFittingQuantizedSparseVector *)sparseQuantizedGradient;
-(void)setSparseQuantizedGradient:(AWDProactiveModelFittingQuantizedSparseVector *)arg1 ;
-(float)gradientScaleFactor;
-(float)gradientL2norm;
-(AWDProactiveModelFittingQuantizedDenseVector *)denseQuantizedGradient;
-(void)setDenseQuantizedGradient:(AWDProactiveModelFittingQuantizedDenseVector *)arg1 ;
@end

