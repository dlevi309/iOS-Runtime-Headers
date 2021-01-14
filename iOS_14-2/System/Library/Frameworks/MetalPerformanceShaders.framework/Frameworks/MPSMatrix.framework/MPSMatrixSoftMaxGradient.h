/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixSoftMaxGradient : MPSMatrixBinaryKernel {

	unsigned long long _sourceColumns;
	unsigned long long _sourceRows;

}

@property (assign,nonatomic) unsigned long long sourceRows;                 //@synthesize sourceRows=_sourceRows - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumns;              //@synthesize sourceColumns=_sourceColumns - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 forwardOutputMatrix:(id)arg3 resultMatrix:(id)arg4 ;
-(unsigned long long)sourceColumns;
-(unsigned long long)sourceRows;
@end

