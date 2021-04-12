/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isTemporary;

}

@property (copy) NSString * label;                                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long dataTypeSize; 
@property (nonatomic,readonly) unsigned long long numberOfDimensions;              //@synthesize numberOfDimensions=_numberOfDimensions - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,retain,readonly) MPSNDArray * parent;                         //@synthesize parent=_parent - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
+(id)defaultAllocator;
-(unsigned)dataType;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(MPSNDArray *)parent;
-(id)init;
-(id)debugDescription;
-(unsigned long long)lengthOfDimension:(unsigned long long)arg1 ;
-(id)arrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 destinationArray:(id)arg4 aliasing:(unsigned long long)arg5 ;
-(id)safeArrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(void)makeStrideBytesInArray:(long long*)arg1 ;
-(1)makeStrideBytes;
-(void)copyDataWithCommandBuffer:(id)arg1 images:(id)arg2 offset:(MPSImageCoordinate)arg3 imageToArray:(BOOL)arg4 ;
-(void)encodeCopyWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 toBuffer:(id)arg3 destinationDataType:(unsigned)arg4 destinationOffsetBytes:(unsigned long long)arg5 destinationStrideBytes:(long long*)arg6 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 lengths:(unsigned long long*)arg6 numLengths:(unsigned long long)arg7 flatteningLevel:(unsigned long long)arg8 ;
-(void)encodeReshapedMatrixWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 toBuffer:(id)arg3 destinationDataType:(unsigned)arg4 destinationOffsetBytes:(unsigned long long)arg5 destinationRowBytes:(unsigned long long)arg6 destinationColumns:(unsigned long long)arg7 destinationRows:(unsigned long long)arg8 ;
-(void)printNDArrayToFile:(_sFILE*)arg1 ;
-(unsigned long long)dataTypeSize;
-(id)dataWithCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 matrix:(id)arg2 ;
-(void)exportDataWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 toBuffer:(id)arg3 destinationDataType:(unsigned)arg4 offset:(unsigned long long)arg5 rowStrides:(long long*)arg6 lengths:(unsigned long long*)arg7 numLengths:(unsigned long long)arg8 flatteningLevel:(unsigned long long)arg9 ;
-(id)initWithDevice:(id)arg1 scalar:(double)arg2 ;
-(unsigned long long)resourceSize;
-(id)safeArrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(1)makeStrideElements;
-(void)arrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 destinationArray:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(void)encodeReshapedBatchWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationRowBytes:(unsigned long long)arg5 destinationColumns:(unsigned long long)arg6 destinationRows:(unsigned long long)arg7 ;
-(void)printNDArray;
-(void)exportDataWithCommandBuffer:(id)arg1 toImages:(id)arg2 offset:(MPSImageCoordinate)arg3 ;
-(void)importDataWithCommandBuffer:(id)arg1 fromImages:(id)arg2 offset:(MPSImageCoordinate)arg3 ;
-(id)checkNDArray:(float*)arg1 nativeUlps:(float)arg2 absoluteErr:(float)arg3 ;
-(id<MTLDevice>)device;
-(id)descriptor;
-(unsigned long long)offset;
-(id)buffer;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)readBytes:(void*)arg1 strideBytes:(long long*)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)importDataWithCommandBuffer:(id)arg1 fromBuffer:(id)arg2 sourceDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 ;
-(void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned)arg3 offset:(unsigned long long)arg4 rowStrides:(long long*)arg5 ;
-(id)arrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(unsigned long long)numberOfDimensions;
-(void)writeBytes:(void*)arg1 strideBytes:(long long*)arg2 ;
-(id)matrixWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(NSString *)label;
-(void)dealloc;
@end

