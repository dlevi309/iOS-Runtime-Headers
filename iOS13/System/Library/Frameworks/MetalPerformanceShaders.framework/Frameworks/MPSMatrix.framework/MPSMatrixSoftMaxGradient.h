/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 forwardOutputMatrix:(id)arg3 resultMatrix:(id)arg4 ;
-(unsigned long long)sourceColumns;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(unsigned long long)sourceRows;
@end

