/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol OS_dispatch_semaphore;
@class MPSCNNLoss, MPSCNNNeuron, MPSCNNNeuronGradient, MPSCNNAdd, MPSNNSlice, NSObject, NSData;

@interface MPSCNNYOLOLoss : MPSCNNKernel {

	MPSCNNLoss* _lossXY;
	MPSCNNLoss* _lossWH;
	MPSCNNLoss* _lossConfidence;
	MPSCNNLoss* _lossClasses;
	int _reductionType;
	MPSCNNNeuron* _sigmoid;
	MPSCNNNeuronGradient* _sigmoidGradient;
	MPSCNNAdd* _add;
	MPSNNSlice* _slice;
	BOOL _rescore;
	float _scaleXY;
	float _scaleWH;
	float _scaleNoObject;
	float _scaleObject;
	float _scaleClass;
	float _minIOUForObjectPresence;
	float _maxIOUForObjectAbsence;
	float _countOfPresentObjects;
	NSObject*<OS_dispatch_semaphore> _encodingSemaphore;
	NSData* _anchorBoxes;
	unsigned long long _numberOfAnchorBoxes;

}

@property (nonatomic,retain,readonly) MPSCNNLoss * lossXY;                          //@synthesize lossXY=_lossXY - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossWH;                          //@synthesize lossWH=_lossWH - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossConfidence;                  //@synthesize lossConfidence=_lossConfidence - In the implementation block
@property (nonatomic,retain,readonly) MPSCNNLoss * lossClasses;                     //@synthesize lossClasses=_lossClasses - In the implementation block
@property (nonatomic,readonly) float scaleXY;                                       //@synthesize scaleXY=_scaleXY - In the implementation block
@property (nonatomic,readonly) float scaleWH;                                       //@synthesize scaleWH=_scaleWH - In the implementation block
@property (nonatomic,readonly) float scaleNoObject;                                 //@synthesize scaleNoObject=_scaleNoObject - In the implementation block
@property (nonatomic,readonly) float scaleObject;                                   //@synthesize scaleObject=_scaleObject - In the implementation block
@property (nonatomic,readonly) float scaleClass;                                    //@synthesize scaleClass=_scaleClass - In the implementation block
@property (nonatomic,readonly) float minIOUForObjectPresence;                       //@synthesize minIOUForObjectPresence=_minIOUForObjectPresence - In the implementation block
@property (nonatomic,readonly) float maxIOUForObjectAbsence;                        //@synthesize maxIOUForObjectAbsence=_maxIOUForObjectAbsence - In the implementation block
@property (nonatomic,readonly) int reductionType;                                   //@synthesize reductionType=_reductionType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAnchorBoxes;              //@synthesize numberOfAnchorBoxes=_numberOfAnchorBoxes - In the implementation block
@property (nonatomic,retain,readonly) NSData * anchorBoxes;                         //@synthesize anchorBoxes=_anchorBoxes - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 ;
-(unsigned long long)maxBatchSize;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(int)reductionType;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 destinationImages:(id)arg4 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 ;
-(float)scaleXY;
-(float)scaleWH;
-(float)scaleNoObject;
-(float)scaleObject;
-(float)scaleClass;
-(float)minIOUForObjectPresence;
-(float)maxIOUForObjectAbsence;
-(NSData *)anchorBoxes;
-(unsigned long long)numberOfAnchorBoxes;
-(void)initializeSupportFiltersWithDevice:(id)arg1 lossDescriptor:(id)arg2 ;
-(float)countPresetobjectsSourceImages:(id)arg1 labels:(id)arg2 ;
-(MPSCNNLoss *)lossXY;
-(MPSCNNLoss *)lossWH;
-(MPSCNNLoss *)lossConfidence;
-(MPSCNNLoss *)lossClasses;
@end

