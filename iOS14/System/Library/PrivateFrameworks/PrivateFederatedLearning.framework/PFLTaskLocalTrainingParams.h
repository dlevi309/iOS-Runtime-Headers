/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PFLTaskLocalTrainingParams : PBCodable <NSCopying> {

	long long _epochs;
	double _learningRate;
	double _validationSplit;
	NSMutableArray* _orderedTrainableLayers;
	SCD_Struct_PF3 _has;

}

@property (nonatomic,retain) NSMutableArray * orderedTrainableLayers;              //@synthesize orderedTrainableLayers=_orderedTrainableLayers - In the implementation block
@property (assign,nonatomic) BOOL hasValidationSplit; 
@property (assign,nonatomic) double validationSplit;                               //@synthesize validationSplit=_validationSplit - In the implementation block
@property (assign,nonatomic) BOOL hasLearningRate; 
@property (assign,nonatomic) double learningRate;                                  //@synthesize learningRate=_learningRate - In the implementation block
@property (assign,nonatomic) BOOL hasEpochs; 
@property (assign,nonatomic) long long epochs;                                     //@synthesize epochs=_epochs - In the implementation block
+(Class)orderedTrainableLayersType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(long long)epochs;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLearningRate:(double)arg1 ;
-(double)learningRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEpochs:(long long)arg1 ;
-(void)setHasEpochs:(BOOL)arg1 ;
-(BOOL)hasEpochs;
-(double)validationSplit;
-(NSMutableArray *)orderedTrainableLayers;
-(void)addOrderedTrainableLayers:(id)arg1 ;
-(unsigned long long)orderedTrainableLayersCount;
-(void)clearOrderedTrainableLayers;
-(id)orderedTrainableLayersAtIndex:(unsigned long long)arg1 ;
-(void)setValidationSplit:(double)arg1 ;
-(void)setHasValidationSplit:(BOOL)arg1 ;
-(BOOL)hasValidationSplit;
-(void)setHasLearningRate:(BOOL)arg1 ;
-(BOOL)hasLearningRate;
-(void)setOrderedTrainableLayers:(NSMutableArray *)arg1 ;
@end

