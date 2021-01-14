/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/

#import <VFX/VFX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FramebufferDescriptor : NSObject <NSCopying> {

	unsigned long long _sampleCount;
	unsigned long long _colorPixelFormat;
	unsigned long long _depthPixelFormat;
	unsigned long long _stencilPixelFormat;

}

@property (assign,nonatomic) unsigned long long sampleCount;                     //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long colorPixelFormat;                //@synthesize colorPixelFormat=_colorPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long depthPixelFormat;                //@synthesize depthPixelFormat=_depthPixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long stencilPixelFormat;              //@synthesize stencilPixelFormat=_stencilPixelFormat - In the implementation block
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)stencilPixelFormat;
-(unsigned long long)colorPixelFormat;
-(unsigned long long)depthPixelFormat;
-(void)setColorPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)sampleCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRenderPassDescriptor:(id)arg1 ;
-(void)setDepthPixelFormat:(unsigned long long)arg1 ;
-(void)setStencilPixelFormat:(unsigned long long)arg1 ;
@end

