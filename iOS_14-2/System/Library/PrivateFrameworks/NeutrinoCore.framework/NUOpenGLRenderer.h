/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCIContext:(id)arg1 priority:(long long)arg2 ;
-(id)initWithGLContext:(id)arg1 options:(id)arg2 ;
-(void)_renderImage:(id)arg1 toTexture:(id)arg2 bounds:(SCD_Struct_NU8)arg3 withColorSpace:(id)arg4 ;
-(id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3 ;
-(id)renderDestinationForSurface:(id)arg1 owner:(id)arg2 ;
-(id)_textureForSurface:(id)arg1 owner:(id)arg2 ;
@end

