/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;
@class MPSImageAreaMax;

@interface MPSImageDilate : MPSUnaryImageKernel {

	const RLERow* _rleValues;
	id<MTLBuffer> _rleBuf;
	MPSImageAreaMax* _outerMax;
	MPSImageAreaMax* _innerMax;
	unsigned kernel;
	Class _maxClass;
	unsigned headerSize;
	unsigned valuesOffset;
	unsigned short centerWidth;
	unsigned short centerHeight;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;

}

@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)dealloc;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(Class)maxClass;
-(BOOL)initKernelValues:(const float*)arg1 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 values:(const float*)arg4 ;
@end

