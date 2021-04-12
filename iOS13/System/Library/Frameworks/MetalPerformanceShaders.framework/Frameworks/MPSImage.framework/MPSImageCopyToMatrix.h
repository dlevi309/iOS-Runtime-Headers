/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSImageCopyToMatrix : MPSKernel {

	SCD_Struct_MP9 _destinationMatrixOrigin;
	unsigned long long _destinationMatrixBatchIndex;
	unsigned long long _dataLayout;

}

@property (assign,nonatomic) SCD_Struct_MP9 destinationMatrixOrigin;                      //@synthesize destinationMatrixOrigin=_destinationMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long destinationMatrixBatchIndex;              //@synthesize destinationMatrixBatchIndex=_destinationMatrixBatchIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLayout;                             //@synthesize dataLayout=_dataLayout - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)dataLayout;
-(id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationMatrix:(id)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceImages:(id)arg3 destinationMatrix:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationMatrix:(id)arg3 ;
-(SCD_Struct_MP9)destinationMatrixOrigin;
-(void)setDestinationMatrixOrigin:(SCD_Struct_MP9)arg1 ;
-(unsigned long long)destinationMatrixBatchIndex;
-(void)setDestinationMatrixBatchIndex:(unsigned long long)arg1 ;
@end

