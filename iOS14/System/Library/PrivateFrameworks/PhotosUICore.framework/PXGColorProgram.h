/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol MTLDevice, MTLBuffer, MTLTexture;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGColorProgram : NSObject {

	unsigned _param_count;
	unsigned _num_trc_luts;
	unsigned* _trc_lut_widths;
	unsigned short _numInputs;
	unsigned _opcodes;
	id<MTLDevice> _device;
	CGColorSpaceRef _sourceColorSpace;
	CGColorSpaceRef _destinationColorSpace;
	unsigned long long _flags;
	id<MTLBuffer> _params;
	id<MTLTexture> _TRCLUTs;
	id<MTLTexture> _colorCube;

}

@property (nonatomic,readonly) BOOL needsHDRToSDRConversion; 
@property (nonatomic,readonly) id<MTLDevice> device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef sourceColorSpace;                   //@synthesize sourceColorSpace=_sourceColorSpace - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef destinationColorSpace;              //@synthesize destinationColorSpace=_destinationColorSpace - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned opcodes;                                   //@synthesize opcodes=_opcodes - In the implementation block
@property (nonatomic,readonly) unsigned short numInputs;                           //@synthesize numInputs=_numInputs - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> params;                               //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> TRCLUTs;                             //@synthesize TRCLUTs=_TRCLUTs - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> colorCube;                           //@synthesize colorCube=_colorCube - In the implementation block
-(id)init;
-(unsigned short)numInputs;
-(CGColorSpaceRef)destinationColorSpace;
-(unsigned long long)flags;
-(unsigned)opcodes;
-(id<MTLTexture>)TRCLUTs;
-(id<MTLDevice>)device;
-(id)description;
-(id)initWithDevice:(id)arg1 sourceColorSpace:(CGColorSpaceRef)arg2 destinationColorSpace:(CGColorSpaceRef)arg3 flags:(unsigned long long)arg4 ;
-(BOOL)needsHDRToSDRConversion;
-(BOOL)_generateProgram;
-(BOOL)_compactProgramWithConversionInfo:(CGColorConversionInfoRef)arg1 cubeSize:(int)arg2 cubeOnly:(BOOL)arg3 ;
-(CGColorSpaceRef)sourceColorSpace;
-(id<MTLTexture>)colorCube;
-(void)dealloc;
-(id<MTLBuffer>)params;
@end

