/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


@protocol MTLCommandBuffer, MTLRenderCommandEncoder;
#import <RenderBox/RenderBox-Structs.h>
@class MTLRenderPassDescriptor;

@interface RBMetalRenderState : NSObject {

	unsigned _flags;
	int _blendMode;
	float _alpha;
	id<MTLCommandBuffer> _commandBuffer;
	MTLRenderPassDescriptor* _descriptor;
	unsigned long long _formatKey;
	id<MTLRenderCommandEncoder> _encoder;
	CGSize _size;
	SCD_Struct_RB64 _bounds;
	CGAffineTransform _CTM;

}

@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int blendMode;                                     //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) float alpha;                                       //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer;                //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain) MTLRenderPassDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) unsigned long long formatKey;                      //@synthesize formatKey=_formatKey - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> encoder;               //@synthesize encoder=_encoder - In the implementation block
@property (assign,nonatomic) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB64 bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform CTM;                             //@synthesize CTM=_CTM - In the implementation block
-(int)blendMode;
-(SCD_Struct_RB64)bounds;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(float)alpha;
-(CGSize)size;
-(unsigned)flags;
-(void)setSize:(CGSize)arg1 ;
-(void)setBounds:(SCD_Struct_RB64)arg1 ;
-(void)setEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(MTLRenderPassDescriptor *)descriptor;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(id<MTLRenderCommandEncoder>)encoder;
-(void)setDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(CGAffineTransform)CTM;
-(void)dealloc;
-(void)setFormatKey:(unsigned long long)arg1 ;
-(unsigned long long)formatKey;
@end

