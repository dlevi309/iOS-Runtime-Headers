/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageTransformSequence;

@interface MPSImageConversion : MPSUnaryImageKernel {

	MPSImageTransformSequence* transform;
	[2 srcDecode];
	[2 destDecode];
	ConversionInfo_s convertInfo;
	ConversionInfoPtrs_s* convertInfoPtrs;
	/*function pointer*/void* matFun;
	/*function pointer*/void* trcFun;
	/*function pointer*/void* lutFun;
	/*function pointer*/void* optionsFun;
	/*function pointer*/void* inputRangeFun;
	/*function pointer*/void* outputRangeFun;
	/*function pointer*/void* propertiesFun;
	unsigned long long sourceAlpha;
	unsigned long long destinationAlpha;

}

@property (nonatomic,readonly) unsigned long long sourceAlpha; 
@property (nonatomic,readonly) unsigned long long destinationAlpha; 
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 srcAlpha:(unsigned long long)arg2 destAlpha:(unsigned long long)arg3 backgroundColor:(double*)arg4 conversionInfo:(const CGColorConversionInfoRef)arg5 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 transform:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float*)arg3 destinationTexture:(id)arg4 destinationDecode:(const float*)arg5 ;
-(unsigned long long)sourceAlpha;
-(unsigned long long)destinationAlpha;
@end

