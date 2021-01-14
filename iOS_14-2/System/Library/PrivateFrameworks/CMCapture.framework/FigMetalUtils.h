/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLDevice;
@interface FigMetalUtils : NSObject {

	id<MTLDevice> _device;

}

@property (nonatomic,readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)computeLinearTextureStride:(unsigned long long)arg1 format:(unsigned long long)arg2 ;
-(id)texture2DFromBuffer:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4 offset:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
-(unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
@end

