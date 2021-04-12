/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/


#import <MPSMatrix/MPSMatrix-Structs.h>
@class MPSVector;

@interface MPSMatrixCopyDescriptor : NSObject {

	id* _sourceMatrices;
	id* _destinationMatrices;
	SCD_Struct_MP2* _cpuOffsetsVector;
	MPSVector* _gpuOffsetsVector;
	unsigned long long _gpuBufferOffset;
	unsigned long long _allocCount;
	unsigned long long _filledCount;

}
+(id)descriptorWithSourceMatrix:(id)arg1 destinationMatrix:(id)arg2 offsets:(SCD_Struct_MP2)arg3 ;
-(id)initWithDevice:(id)arg1 count:(unsigned long long)arg2 ;
-(void)setCopyOperationAtIndex:(unsigned long long)arg1 sourceMatrix:(id)arg2 destinationMatrix:(id)arg3 offsets:(SCD_Struct_MP2)arg4 ;
-(void)dealloc;
-(id*)sourceMatrices;
-(id*)destinationMatrices;
-(SCD_Struct_MP2*)cpuOffsetsVector;
-(id)gpuOffsetsVector;
-(unsigned long long)gpuBufferOffset;
-(unsigned long long)allocCount;
-(unsigned long long)filledCount;
-(id)initWithSourceMatrices:(id)arg1 destinationMatrices:(id)arg2 offsetVector:(id)arg3 offset:(unsigned long long)arg4 ;
@end

