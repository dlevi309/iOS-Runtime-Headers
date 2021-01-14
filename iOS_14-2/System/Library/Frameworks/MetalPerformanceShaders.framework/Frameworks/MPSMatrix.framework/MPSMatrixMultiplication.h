/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@protocol MPSExternalMatrixMultiplication;
@interface MPSMatrixMultiplication : MPSKernel {

	BOOL _useTiling;
	id<MPSExternalMatrixMultiplication> _plugin;
	/*function pointer*/void* _encode;
	BOOL _transA;
	BOOL _transB;
	unsigned long long _batchStart;
	unsigned long long _batchSize;
	double _alpha;
	double _beta;
	unsigned long long _M;
	unsigned long long _N;
	unsigned long long _K;
	SCD_Struct_MP0 _resultMatrixOrigin;
	SCD_Struct_MP0 _leftMatrixOrigin;
	SCD_Struct_MP0 _rightMatrixOrigin;

}

@property (assign,nonatomic) BOOL transA;                                    //@synthesize transA=_transA - In the implementation block
@property (assign,nonatomic) BOOL transB;                                    //@synthesize transB=_transB - In the implementation block
@property (assign,nonatomic) double alpha;                                   //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) double beta;                                    //@synthesize beta=_beta - In the implementation block
@property (assign,M,nonatomic) unsigned long long M;                         //@synthesize M=_M - In the implementation block
@property (assign,nonatomic,nonatomic) unsigned long long N;                 //@synthesize N=_N - In the implementation block
@property (assign,K,nonatomic) unsigned long long K;                         //@synthesize K=_K - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 resultMatrixOrigin;              //@synthesize resultMatrixOrigin=_resultMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 leftMatrixOrigin;                //@synthesize leftMatrixOrigin=_leftMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 rightMatrixOrigin;               //@synthesize rightMatrixOrigin=_rightMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                  //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(unsigned long long)K;
-(unsigned long long)N;
-(unsigned long long)M;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(double)beta;
-(unsigned long long)batchSize;
-(void)setN:(unsigned long long)arg1 ;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setK:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(BOOL)transA;
-(BOOL)transB;
-(SCD_Struct_MP0)resultMatrixOrigin;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 transposeLeft:(BOOL)arg2 transposeRight:(BOOL)arg3 resultRows:(unsigned long long)arg4 resultColumns:(unsigned long long)arg5 interiorColumns:(unsigned long long)arg6 alpha:(double)arg7 beta:(double)arg8 ;
-(void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 leftMatrix:(id)arg3 rightMatrix:(id)arg4 resultMatrix:(id)arg5 ;
-(void)setLeftMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setRightMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setBeta:(double)arg1 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(void)setResultMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setM:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg1 leftMatrix:(id)arg2 rightMatrix:(id)arg3 resultMatrix:(id)arg4 ;
-(id)initWithDevice:(id)arg1 resultRows:(unsigned long long)arg2 resultColumns:(unsigned long long)arg3 interiorColumns:(unsigned long long)arg4 ;
-(SCD_Struct_MP0)leftMatrixOrigin;
-(SCD_Struct_MP0)rightMatrixOrigin;
-(void)setTransA:(BOOL)arg1 ;
-(void)setTransB:(BOOL)arg1 ;
@end

