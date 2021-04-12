/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>
#import <libobjc.A.dylib/NUGLFramebufferAttachable.h>

@class NUPixelFormat, NUIOSurface;

@interface NUGLTexture : NUGLObject <NUGLFramebufferAttachable> {

	NUPixelFormat* _format;
	SCD_Struct_NU7 _size;

}

@property (readonly) BOOL isSurface; 
@property (nonatomic,readonly) NUIOSurface * surface; 
@property (nonatomic,readonly) SCD_Struct_NU7 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
+(id)textureWithIOSurface:(id)arg1 ;
-(void)delete;
-(NUPixelFormat *)format;
-(id)init;
-(SCD_Struct_NU7)size;
-(void)ensure:(id)arg1 ;
-(void)generate:(id)arg1 ;
-(NUIOSurface *)surface;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(void)attachToFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyRect:(SCD_Struct_NU8)arg1 toBuffer:(id)arg2 atPoint:(SCD_Struct_NU7)arg3 context:(id)arg4 ;
-(id)newRenderDestination;
-(BOOL)isSurface;
-(void)allocateStorage:(id)arg1 ;
-(void)write:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyRect:(SCD_Struct_NU8)arg1 fromBuffer:(id)arg2 atPoint:(SCD_Struct_NU7)arg3 context:(id)arg4 ;
-(void)copyRect:(SCD_Struct_NU8)arg1 fromTexture:(id)arg2 atPoint:(SCD_Struct_NU7)arg3 context:(id)arg4 ;
-(void)copyRect:(SCD_Struct_NU8)arg1 toTexture:(id)arg2 atPoint:(SCD_Struct_NU7)arg3 context:(id)arg4 ;
-(void)drawRect:(SCD_Struct_NU8)arg1 atPoint:(SCD_Struct_NU7)arg2 context:(id)arg3 ;
@end

