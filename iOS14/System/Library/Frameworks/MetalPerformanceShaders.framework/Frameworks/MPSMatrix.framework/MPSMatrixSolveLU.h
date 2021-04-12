/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveLU : MPSMatrixBinaryKernel {

	MPSMatrixSolveTriangular* _trsmU;
	MPSMatrixSolveTriangular* _trsmL;
	BOOL _transpose;
	unsigned long long _order;
	unsigned long long _numberOfRightHandSides;

}

@property (nonatomic,readonly) BOOL transpose;                                       //@synthesize transpose=_transpose - In the implementation block
@property (assign,nonatomic) unsigned long long order;                               //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRightHandSides;              //@synthesize numberOfRightHandSides=_numberOfRightHandSides - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(BOOL)transpose;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfRightHandSides;
-(void)setNumberOfRightHandSides:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 transpose:(BOOL)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 pivotIndices:(id)arg4 solutionMatrix:(id)arg5 ;
@end

