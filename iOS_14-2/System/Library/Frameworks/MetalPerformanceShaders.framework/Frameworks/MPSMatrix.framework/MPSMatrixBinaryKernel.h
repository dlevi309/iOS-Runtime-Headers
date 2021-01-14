/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixBinaryKernel : MPSKernel {

	unsigned long long _batchStart;
	unsigned long long _batchSize;
	SCD_Struct_MP0 _primarySourceMatrixOrigin;
	SCD_Struct_MP0 _secondarySourceMatrixOrigin;
	SCD_Struct_MP0 _resultMatrixOrigin;

}

@property (assign,nonatomic) SCD_Struct_MP0 primarySourceMatrixOrigin;                //@synthesize primarySourceMatrixOrigin=_primarySourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 secondarySourceMatrixOrigin;              //@synthesize secondarySourceMatrixOrigin=_secondarySourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 resultMatrixOrigin;                       //@synthesize resultMatrixOrigin=_resultMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                           //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP0)primarySourceMatrixOrigin;
-(SCD_Struct_MP0)secondarySourceMatrixOrigin;
-(SCD_Struct_MP0)resultMatrixOrigin;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(void)setResultMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setPrimarySourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setSecondarySourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
@end

