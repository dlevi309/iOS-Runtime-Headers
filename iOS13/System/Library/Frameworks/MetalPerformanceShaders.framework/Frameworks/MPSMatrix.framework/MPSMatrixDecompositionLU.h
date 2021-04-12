/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@class MPSMatrixMultiplication, MPSMatrixSolveTriangular;

@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel {

	MPSMatrixMultiplication* _gemmKernel;
	MPSMatrixSolveTriangular* _trsmKernel;
	unsigned long long _rows;
	unsigned long long _columns;

}

@property (nonatomic,readonly) unsigned long long rows;                 //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) unsigned long long columns;              //@synthesize columns=_columns - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(unsigned long long)rows;
-(unsigned long long)columns;
-(id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 pivotIndices:(id)arg4 status:(id)arg5 ;
@end

