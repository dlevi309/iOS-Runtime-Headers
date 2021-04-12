/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(BOOL)upper;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4 ;
-(unsigned long long)numberOfRightHandSides;
-(void)setNumberOfRightHandSides:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 upper:(BOOL)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4 ;
@end

