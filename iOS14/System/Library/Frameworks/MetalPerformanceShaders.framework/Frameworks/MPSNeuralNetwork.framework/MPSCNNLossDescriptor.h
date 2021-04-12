/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSCNNLossDescriptor : NSObject <NSCopying> {

	unsigned _lossType;
	int _reductionType;
	BOOL _reduceAcrossBatch;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;

}

@property (assign,nonatomic) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (assign,nonatomic) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (assign,nonatomic) BOOL reduceAcrossBatch;                          //@synthesize reduceAcrossBatch=_reduceAcrossBatch - In the implementation block
@property (assign,nonatomic) float weight;                                    //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) float labelSmoothing;                            //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (assign,nonatomic) float epsilon;                                   //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) float delta;                                     //@synthesize delta=_delta - In the implementation block
+(id)cnnLossDescriptorWithType:(unsigned)arg1 reductionType:(int)arg2 ;
-(void)setEpsilon:(float)arg1 ;
-(void)setWeight:(float)arg1 ;
-(unsigned)lossType;
-(id)debugDescription;
-(float)delta;
-(void)setLossType:(unsigned)arg1 ;
-(float)weight;
-(void)setDelta:(float)arg1 ;
-(void)setNumberOfClasses:(unsigned long long)arg1 ;
-(int)reductionType;
-(float)labelSmoothing;
-(BOOL)reduceAcrossBatch;
-(void)setLabelSmoothing:(float)arg1 ;
-(void)setReductionType:(int)arg1 ;
-(void)setReduceAcrossBatch:(BOOL)arg1 ;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfClasses;
-(void)dealloc;
@end

