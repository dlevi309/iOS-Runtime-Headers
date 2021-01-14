/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
*/

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryGradientKernel.h>

@interface MPSNDArrayResampleGradient : MPSNDArrayUnaryGradientKernel {

	MPSScaleTransform _transformStorage;
	MPSScaleTransform* _scaleTransform;
	unsigned _resampleMode;

}

@property (assign,nonatomic) const MPSScaleTransform* scaleTransform;              //@synthesize scaleTransform=_scaleTransform - In the implementation block
@property (assign,nonatomic) unsigned resampleMode;                                //@synthesize resampleMode=_resampleMode - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)setScaleTransform:(const MPSScaleTransform*)arg1 ;
-(const MPSScaleTransform*)scaleTransform;
-(unsigned)resampleMode;
-(void)setResampleMode:(unsigned)arg1 ;
@end

