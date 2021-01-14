/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCGPUDeviceOps.h>

@class NSArray, NSMutableArray;

@interface MLCMultiGPUDeviceOps : MLCGPUDeviceOps {

	int _multiGPUReduction;
	NSArray* _localGradientMatrices;
	NSArray* _remoteGradientBuffers;
	NSArray* _receivedGradientMatrices;
	NSArray* _matrixSumKernels;
	NSMutableArray* _allReducedGradientMatrices;
	NSMutableArray* _rnnTrainableWeightGradients;

}

@property (assign,nonatomic) int multiGPUReduction;                                     //@synthesize multiGPUReduction=_multiGPUReduction - In the implementation block
@property (nonatomic,retain) NSArray * localGradientMatrices;                           //@synthesize localGradientMatrices=_localGradientMatrices - In the implementation block
@property (nonatomic,retain) NSArray * remoteGradientBuffers;                           //@synthesize remoteGradientBuffers=_remoteGradientBuffers - In the implementation block
@property (nonatomic,retain) NSArray * receivedGradientMatrices;                        //@synthesize receivedGradientMatrices=_receivedGradientMatrices - In the implementation block
@property (nonatomic,retain) NSArray * matrixSumKernels;                                //@synthesize matrixSumKernels=_matrixSumKernels - In the implementation block
@property (nonatomic,retain) NSMutableArray * allReducedGradientMatrices;               //@synthesize allReducedGradientMatrices=_allReducedGradientMatrices - In the implementation block
@property (nonatomic,retain) NSMutableArray * rnnTrainableWeightGradients;              //@synthesize rnnTrainableWeightGradients=_rnnTrainableWeightGradients - In the implementation block
+(id)multiGPUDeviceOpsWithGPUDeviceOps:(id)arg1 ;
-(NSMutableArray *)rnnTrainableWeightGradients;
-(NSArray *)localGradientMatrices;
-(NSArray *)receivedGradientMatrices;
-(NSArray *)remoteGradientBuffers;
-(NSMutableArray *)allReducedGradientMatrices;
-(NSArray *)matrixSumKernels;
-(void)setRemoteGradientBuffers:(NSArray *)arg1 ;
-(void)setLocalGradientMatrices:(NSArray *)arg1 ;
-(void)setReceivedGradientMatrices:(NSArray *)arg1 ;
-(void)setMatrixSumKernels:(NSArray *)arg1 ;
-(void)setAllReducedGradientMatrices:(NSMutableArray *)arg1 ;
-(void)setMultiGPUReduction:(int)arg1 ;
-(void)setRnnTrainableWeightGradients:(NSMutableArray *)arg1 ;
-(id)initWithGPUDevicOps:(id)arg1 ;
-(int)multiGPUReduction;
@end

