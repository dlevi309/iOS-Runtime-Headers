/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixCopyToImage : MPSKernel {

	SCD_Struct_MP9 _sourceMatrixOrigin;
	unsigned long long _sourceMatrixBatchIndex;
	unsigned long long _dataLayout;

}

@property (assign,nonatomic) SCD_Struct_MP9 sourceMatrixOrigin;                      //@synthesize sourceMatrixOrigin=_sourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long sourceMatrixBatchIndex;              //@synthesize sourceMatrixBatchIndex=_sourceMatrixBatchIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLayout;                        //@synthesize dataLayout=_dataLayout - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)dataLayout;
-(SCD_Struct_MP9)sourceMatrixOrigin;
-(id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImages:(id)arg3 ;
-(void)setSourceMatrixOrigin:(SCD_Struct_MP9)arg1 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceMatrix:(id)arg3 destinationImages:(id)arg4 ;
-(unsigned long long)sourceMatrixBatchIndex;
-(void)setSourceMatrixBatchIndex:(unsigned long long)arg1 ;
@end

