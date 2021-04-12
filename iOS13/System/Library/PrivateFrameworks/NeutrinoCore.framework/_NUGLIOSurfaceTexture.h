/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture {

	NUIOSurface* _surface;

}

@property (nonatomic,readonly) NUIOSurface * surface;              //@synthesize surface=_surface - In the implementation block
-(id)initWithIOSurface:(id)arg1 ;
-(NUIOSurface *)surface;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(BOOL)isSurface;
-(void)allocateStorage:(id)arg1 ;
@end

