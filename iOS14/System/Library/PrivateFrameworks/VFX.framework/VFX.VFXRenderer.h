/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@class _TtC3VFX8VFXScene, UIColor;

@interface VFX.VFXRenderer : NSObject {

	 scene;
	 renderer;
	 texture;
	 depthTexture;
	 backgroundColor;

}

@property (retain,nonatomic) _TtC3VFX8VFXScene * scene; 
@property (retain,nonatomic) id<MTLTexture> texture; 
@property (retain,nonatomic) id<MTLTexture> depthTexture; 
@property (retain,nonatomic) UIColor * backgroundColor; 
-(id<MTLTexture>)texture;
-(_TtC3VFX8VFXScene *)scene;
-(void)setScene:(_TtC3VFX8VFXScene *)arg1 ;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(id<MTLTexture>)depthTexture;
-(void)setDepthTexture:(id<MTLTexture>)arg1 ;
-(void)encodeWithCommandBuffer:(id)arg1 ;
@end

