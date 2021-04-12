/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveCholesky : MPSMatrixBinaryKernel {

	MPSMatrixSolveTriangular* _trsmT;
	MPSMatrixSolveTriangular* _trsmN;
	BOOL _upper;
	unsigned long long _order;
	unsigned long long _numberOfRightHandSides;

}

@property (nonatomic,readonly) BOOL upper;                                           //@synthesize upper=_upper - In the implementation block
@property (assign,nonatomic) unsigned long long order;                               //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRightHandSides;              //@synthesize numberOfRightHandSides=_numberOfRightHandSides - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)dealloc;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4 ;
-(BOOL)upper;
-(unsigned long long)numberOfRightHandSides;
-(void)setNumberOfRightHandSides:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 upper:(BOOL)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4 ;
@end

