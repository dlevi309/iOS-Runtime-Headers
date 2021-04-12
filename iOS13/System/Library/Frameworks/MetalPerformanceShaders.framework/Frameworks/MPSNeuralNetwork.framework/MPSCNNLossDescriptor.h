/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSCNNLossDescriptor : NSObject <NSCopying> {

	unsigned _lossType;
	int _reductionType;
	float _weight;
	float _labelSmoothing;
	unsigned long long _numberOfClasses;
	float _epsilon;
	float _delta;

}

@property (assign,nonatomic) unsigned lossType;                               //@synthesize lossType=_lossType - In the implementation block
@property (assign,nonatomic) int reductionType;                               //@synthesize reductionType=_reductionType - In the implementation block
@property (assign,nonatomic) float weight;                                    //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) float labelSmoothing;                            //@synthesize labelSmoothing=_labelSmoothing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfClasses;              //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (assign,nonatomic) float epsilon;                                   //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) float delta;                                     //@synthesize delta=_delta - In the implementation block
+(id)cnnLossDescriptorWithType:(unsigned)arg1 reductionType:(int)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)epsilon;
-(void)setEpsilon:(float)arg1 ;
-(void)setWeight:(float)arg1 ;
-(float)weight;
-(unsigned long long)numberOfClasses;
-(unsigned)lossType;
-(void)setLossType:(unsigned)arg1 ;
-(float)delta;
-(void)setDelta:(float)arg1 ;
-(int)reductionType;
-(float)labelSmoothing;
-(void)setLabelSmoothing:(float)arg1 ;
-(void)setNumberOfClasses:(unsigned long long)arg1 ;
-(void)setReductionType:(int)arg1 ;
@end

