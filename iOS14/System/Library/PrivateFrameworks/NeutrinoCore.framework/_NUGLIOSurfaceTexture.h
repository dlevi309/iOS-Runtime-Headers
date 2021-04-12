/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture {

	NUIOSurface* _surface;

}
-(id)surface;
-(id)initWithIOSurface:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(BOOL)isSurface;
-(void)allocateStorage:(id)arg1 ;
@end

