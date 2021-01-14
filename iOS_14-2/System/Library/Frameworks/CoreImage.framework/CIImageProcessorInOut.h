/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol MTLTexture;
#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorInOut : NSObject {

	CGRect _region;
	IOSurfaceRef _surface;
	BOOL _usesSRGB;
	Context* _context;
	id<MTLTexture> _mtlTexture;
	BOOL _surfaceLocked;

}

@property (nonatomic,readonly) CGRect region;                               //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) BOOL usesSRGBTransferFunction; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) id<MTLDevice> device; 
-(int)format;
-(CGRect)region;
-(unsigned long long)bytesPerRow;
-(id<MTLDevice>)device;
-(id)description;
-(IOSurfaceRef)surface;
-(CVBufferRef)pixelBuffer;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(BOOL)usesSRGBTransferFunction;
-(void)dealloc;
@end

