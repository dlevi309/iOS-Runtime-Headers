/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSNDArray : NSObject {

	 _dimensionLengths;
	 _sliceOffsets;
	 _sliceLengths;
	 _dimensionOrder;
	unsigned long long _numberOfDimensions;
	unsigned _dataType;
	NSString* _label;
	MPSDevice* _device;
	MPSNDArray* _parent;
	MPSAutoBuffer* _buffer;
	unsigned long long _offset;
	unsigned long long _rowBytes;
	MPSLibrary* _library;

}

@property (copy) NSString * label;                                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long dataTypeSize; 
@property (nonatomic,readonly) unsigned long long numberOfDimensions;              //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,retain,readonly) MPSNDArray * parent;                         //@synthesize parent=_parent - In the implementation block
+(id)defaultAllocator;
+(const MPSLibraryInfo*)libraryInfo;
-(id)init;
-(void)dealloc;
-(MPSNDArray *)parent;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(id)buffer;
-(NSString *)label;
-(unsigned)dataType;
-(unsigned long long)offset;
-(id)descriptor;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)readBytes:(void*)arg1 strideBytes:(long long*)arg2 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(void)writeBytes:(void*)arg1 strideBytes:(long long*)arg2 ;
-(id)matrixWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(unsigned long long)numberOfDimensions;
-(unsigned long long)resourceSize;
-(unsigned long long)lengthOfDimension:(unsigned long long)arg1 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 ;
-(void)makeStrideBytesInArray:(long long*)arg1 ;
-(void)encodeCopyWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationStrideBytes:(long long*)arg5 ;
-(void)encodeReshapedMatrixWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationRowBytes:(unsigned long long)arg5 destinationColumns:(unsigned long long)arg6 destinationRows:(unsigned long long)arg7 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 lengths:(unsigned long long*)arg6 numLengths:(unsigned long long)arg7 flatteningLevel:(unsigned long long)arg8 ;
-(1)makeStrideBytes;
-(void)copyDataWithCommandBuffer:(id)arg1 images:(id)arg2 offset:(MPSImageCoordinate)arg3 imageToArray:(BOOL)arg4 ;
-(unsigned long long)dataTypeSize;
-(id)dataWithCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 matrix:(id)arg2 ;
-(id)initWithDevice:(id)arg1 scalar:(double)arg2 ;
-(id)arrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(void)encodeReshapedBatchWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationRowBytes:(unsigned long long)arg5 destinationColumns:(unsigned long long)arg6 destinationRows:(unsigned long long)arg7 ;
-(void)importDataWithCommandBuffer:(id)arg1 fromBuffer:(id)arg2 sourceDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toImages:(id)arg2 offset:(MPSImageCoordinate)arg3 ;
-(void)importDataWithCommandBuffer:(id)arg1 fromImages:(id)arg2 offset:(MPSImageCoordinate)arg3 ;
-(void)printNDArray;
@end

