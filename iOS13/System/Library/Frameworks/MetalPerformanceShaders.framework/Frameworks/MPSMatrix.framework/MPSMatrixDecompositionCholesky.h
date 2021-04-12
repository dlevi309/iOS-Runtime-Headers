/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel {

	BOOL _lower;
	unsigned long long _order;

}

@property (nonatomic,readonly) BOOL lower;                            //@synthesize lower=_lower - In the implementation block
@property (nonatomic,readonly) unsigned long long order;              //@synthesize order=_order - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(unsigned long long)order;
-(BOOL)lower;
-(id)initWithDevice:(id)arg1 lower:(BOOL)arg2 order:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 status:(id)arg4 ;
@end

