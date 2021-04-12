/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderer.h>

@class NSString, NUGLContext;

@interface NUOpenGLRenderer : NURenderer {

	NSString* _rendererString;
	NSString* _versionString;
	NUGLContext* _glContext;

}

@property (nonatomic,readonly) NUGLContext * glContext;              //@synthesize glContext=_glContext - In the implementation block
-(id)name;
-(NUGLContext *)glContext;
-(id)initWithCIContext:(id)arg1 ;
-(id)initWithGLContext:(id)arg1 options:(id)arg2 ;
-(void)_renderImage:(id)arg1 toTexture:(id)arg2 bounds:(SCD_Struct_NU8)arg3 withColorSpace:(id)arg4 ;
-(id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3 ;
-(id)renderDestinationForSurface:(id)arg1 owner:(id)arg2 ;
-(id)_textureForSurface:(id)arg1 owner:(id)arg2 ;
@end

