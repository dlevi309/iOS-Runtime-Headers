/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>
#import <libobjc.A.dylib/NUGLFramebufferAttachable.h>

@protocol EAGLDrawable;
@class NUPixelFormat;

@interface NUGLRenderbuffer : NUGLObject <NUGLFramebufferAttachable> {

	id<EAGLDrawable> _drawable;
	NUPixelFormat* _format;
	SCD_Struct_NU7 _size;

}

@property (nonatomic,readonly) SCD_Struct_NU7 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
-(id)init;
-(SCD_Struct_NU7)size;
-(NUPixelFormat *)format;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(void)delete;
-(void)generate:(id)arg1 ;
-(void)attachToFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned)arg2 context:(id)arg3 ;
-(id)initWithDrawable:(id)arg1 ;
-(void)flushDrawableWithContext:(id)arg1 ;
-(void)draw:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyRect:(SCD_Struct_NU8)arg1 toBuffer:(id)arg2 atPoint:(SCD_Struct_NU7)arg3 context:(id)arg4 ;
@end

