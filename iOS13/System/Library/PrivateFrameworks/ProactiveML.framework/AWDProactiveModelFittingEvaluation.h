/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, NSMutableArray;

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDProactiveModelFittingEvalMetrics* _evaluationMetrics;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	NSMutableArray* _precisionAtKs;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                        //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;              //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasEvaluationMetrics; 
@property (nonatomic,retain) AWDProactiveModelFittingEvalMetrics * evaluationMetrics;              //@synthesize evaluationMetrics=_evaluationMetrics - In the implementation block
@property (nonatomic,retain) NSMutableArray * precisionAtKs;                                       //@synthesize precisionAtKs=_precisionAtKs - In the implementation block
+(Class)precisionAtKType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasMinibatchStats;
-(BOOL)hasEvaluationMetrics;
-(void)clearPrecisionAtKs;
-(void)addPrecisionAtK:(id)arg1 ;
-(unsigned long long)precisionAtKsCount;
-(id)precisionAtKAtIndex:(unsigned long long)arg1 ;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(AWDProactiveModelFittingEvalMetrics *)evaluationMetrics;
-(void)setEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 ;
-(NSMutableArray *)precisionAtKs;
-(void)setPrecisionAtKs:(NSMutableArray *)arg1 ;
-(float)precisionAtK:(unsigned long long)arg1 ;
@end

