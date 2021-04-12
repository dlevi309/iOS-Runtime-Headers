/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying> {

	unsigned long long _label;
	unsigned long long _supervisionType;
	unsigned long long _timestamp;
	float _confidenceScore;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatFeatures;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                //@synthesize modelInfo=_modelInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLabel; 
@property (assign,nonatomic) unsigned long long label;                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatFeatures; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatFeatures;              //@synthesize sparseFloatFeatures=_sparseFloatFeatures - In the implementation block
@property (assign,nonatomic) BOOL hasSupervisionType; 
@property (assign,nonatomic) unsigned long long supervisionType;                                           //@synthesize supervisionType=_supervisionType - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceScore; 
@property (assign,nonatomic) float confidenceScore;                                                        //@synthesize confidenceScore=_confidenceScore - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(unsigned long long)arg1 ;
-(unsigned long long)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)confidenceScore;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(BOOL)hasLabel;
-(void)setHasLabel:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConfidenceScore:(float)arg1 ;
-(void)setHasConfidenceScore:(BOOL)arg1 ;
-(BOOL)hasConfidenceScore;
-(BOOL)hasModelInfo;
-(BOOL)hasSparseFloatFeatures;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatFeatures;
-(void)setSparseFloatFeatures:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(void)setSupervisionType:(unsigned long long)arg1 ;
-(void)setHasSupervisionType:(BOOL)arg1 ;
-(BOOL)hasSupervisionType;
-(unsigned long long)supervisionType;
@end

