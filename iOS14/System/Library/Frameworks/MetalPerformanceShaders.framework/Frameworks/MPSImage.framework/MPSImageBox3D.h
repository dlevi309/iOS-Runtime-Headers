/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageBox;

@interface MPSImageBox3D : MPSUnaryImageKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _kernelDepth;
	MPSImageBox* _boxFilter;
	BOOL _supportsReadWriteTextures;

}

@property (nonatomic,readonly) unsigned long long kernelWidth;               //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;              //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelDepth;               //@synthesize kernelDepth=_kernelDepth - In the implementation block
+(id)supportedPixelFormats;
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 kernelDepth:(unsigned long long)arg4 ;
-(unsigned long long)kernelDepth;
@end

