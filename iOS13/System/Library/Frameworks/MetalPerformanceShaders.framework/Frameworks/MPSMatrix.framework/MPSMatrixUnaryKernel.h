/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixUnaryKernel : MPSKernel {

	unsigned long long _batchStart;
	unsigned long long _batchSize;
	SCD_Struct_MP0 _sourceMatrixOrigin;
	SCD_Struct_MP0 _resultMatrixOrigin;

}

@property (assign,nonatomic) SCD_Struct_MP0 sourceMatrixOrigin;              //@synthesize sourceMatrixOrigin=_sourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 resultMatrixOrigin;              //@synthesize resultMatrixOrigin=_resultMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                  //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setResultMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setSourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP0)sourceMatrixOrigin;
-(SCD_Struct_MP0)resultMatrixOrigin;
@end

