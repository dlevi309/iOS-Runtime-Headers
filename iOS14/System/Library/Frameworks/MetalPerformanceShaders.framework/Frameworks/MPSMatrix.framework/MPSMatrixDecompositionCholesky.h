/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(BOOL)lower;
-(unsigned long long)order;
-(id)initWithDevice:(id)arg1 lower:(BOOL)arg2 order:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 status:(id)arg4 ;
@end

