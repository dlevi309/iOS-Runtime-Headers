/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderer.h>

@protocol MTLDevice;
@interface NUMetalRenderer : NURenderer {

	id<MTLDevice> _device;

}
-(id)name;
-(id)initWithCIContext:(id)arg1 ;
-(id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3 ;
-(id)renderDestinationForSurface:(id)arg1 owner:(id)arg2 ;
-(id)_textureForSurface:(id)arg1 owner:(id)arg2 ;
-(id)initWithMetalDevice:(id)arg1 options:(id)arg2 ;
-(unsigned long long)_textureFormatForPixelFormat:(id)arg1 ;
@end

