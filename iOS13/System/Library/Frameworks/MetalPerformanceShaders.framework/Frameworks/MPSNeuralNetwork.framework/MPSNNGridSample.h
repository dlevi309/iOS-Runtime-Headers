/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNGridSample : MPSCNNBinaryKernel {

	BOOL _useGridValueAsInputCoordinate;

}

@property (assign,nonatomic) BOOL useGridValueAsInputCoordinate;              //@synthesize useGridValueAsInputCoordinate=_useGridValueAsInputCoordinate - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(BOOL)useGridValueAsInputCoordinate;
-(void)setUseGridValueAsInputCoordinate:(BOOL)arg1 ;
@end

