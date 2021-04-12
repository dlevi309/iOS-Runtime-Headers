/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
*/


@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;
#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SIBoxBlurFilter : NSObject {

	id<MTLTexture> _1DBlur;
	id<MTLBuffer> _configBuffer;
	SCD_Struct_SI14 _size;
	SCD_Struct_SI14 _executionThreadgroup;
	id<MTLComputePipelineState> _horizontal;
	id<MTLComputePipelineState> _vertical;
	unsigned long long _radius;

}

@property (assign,nonatomic) unsigned long long radius;              //@synthesize radius=_radius - In the implementation block
-(void)setRadius:(unsigned long long)arg1 ;
-(unsigned long long)radius;
-(id)initWithFactory:(id)arg1 size:(SCD_Struct_SI14)arg2 pixelFormat:(unsigned long long)arg3 andRadius:(unsigned long long)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 blurred:(id)arg3 ;
@end

