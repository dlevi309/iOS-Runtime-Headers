/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrix;

@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel {

	MPSMatrix* _workspace;
	BOOL _right;
	BOOL _upper;
	BOOL _transpose;
	BOOL _unit;
	unsigned long long _order;
	unsigned long long _numberOfRightHandSides;
	double _alpha;

}

@property (nonatomic,readonly) BOOL right;                                           //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) BOOL upper;                                           //@synthesize upper=_upper - In the implementation block
@property (nonatomic,readonly) BOOL transpose;                                       //@synthesize transpose=_transpose - In the implementation block
@property (nonatomic,readonly) BOOL unit;                                            //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) unsigned long long order;                               //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRightHandSides;              //@synthesize numberOfRightHandSides=_numberOfRightHandSides - In the implementation block
@property (nonatomic,readonly) double alpha;                                         //@synthesize alpha=_alpha - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(BOOL)right;
-(double)alpha;
-(BOOL)transpose;
-(BOOL)upper;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(BOOL)unit;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 right:(BOOL)arg2 upper:(BOOL)arg3 transpose:(BOOL)arg4 unit:(BOOL)arg5 order:(unsigned long long)arg6 numberOfRightHandSides:(unsigned long long)arg7 alpha:(double)arg8 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4 ;
-(unsigned long long)numberOfRightHandSides;
-(void)setNumberOfRightHandSides:(unsigned long long)arg1 ;
@end

