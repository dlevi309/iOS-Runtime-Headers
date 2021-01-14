/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@class JTImage, UIView;

@interface JFXImageView : UIView {

	BOOL _preferIOSurfaceForYUV;
	BOOL _preferMetalKit;
	BOOL _enableDebugDrawing;
	BOOL _disableIOSurface;
	BOOL _disableMetalKit;
	JTImage* _jtImage;
	long long _imageViewType;
	long long _currentImageViewType;
	UIView* _imageView;

}

@property (assign,nonatomic) long long currentImageViewType;              //@synthesize currentImageViewType=_currentImageViewType - In the implementation block
@property (nonatomic,retain) UIView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) JTImage * jtImage;                           //@synthesize jtImage=_jtImage - In the implementation block
@property (assign,nonatomic) long long imageViewType;                     //@synthesize imageViewType=_imageViewType - In the implementation block
@property (assign,nonatomic) BOOL preferIOSurfaceForYUV;                  //@synthesize preferIOSurfaceForYUV=_preferIOSurfaceForYUV - In the implementation block
@property (assign,nonatomic) BOOL preferMetalKit;                         //@synthesize preferMetalKit=_preferMetalKit - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDrawing;                     //@synthesize enableDebugDrawing=_enableDebugDrawing - In the implementation block
@property (assign,nonatomic) BOOL disableIOSurface;                       //@synthesize disableIOSurface=_disableIOSurface - In the implementation block
@property (assign,nonatomic) BOOL disableMetalKit;                        //@synthesize disableMetalKit=_disableMetalKit - In the implementation block
+(BOOL)normalizedQuadVertices:(SCD_Struct_JF20*)arg1 viewSize:(CGSize)arg2 textureSize:(CGSize)arg3 contentMode:(long long)arg4 ;
+(id)colorFromRenderingType:(long long)arg1 ;
+(id)colorFromImageViewType:(long long)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)imageView;
-(void)flipX;
-(JTImage *)jtImage;
-(void)setEnableDebugDrawing:(BOOL)arg1 ;
-(void)updateDebugDrawing;
-(void)setJtImage:(JTImage *)arg1 ;
-(BOOL)enableDebugDrawing;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setPreferIOSurfaceForYUV:(BOOL)arg1 ;
-(void)setPreferMetalKit:(BOOL)arg1 ;
-(void)JFXImageView_commonInit;
-(void)setCurrentImageViewType:(long long)arg1 ;
-(long long)preferredImageViewTypeForImage:(id)arg1 ;
-(void)updateImageViewImage;
-(void)reconfigureImageView;
-(id)stringFromImageViewType:(long long)arg1 ;
-(void)setImageViewType:(long long)arg1 ;
-(void)setDisableIOSurface:(BOOL)arg1 ;
-(void)setDisableMetalKit:(BOOL)arg1 ;
-(long long)imageViewType;
-(long long)currentImageViewType;
-(BOOL)preferIOSurfaceForYUV;
-(BOOL)preferMetalKit;
-(BOOL)disableIOSurface;
-(BOOL)disableMetalKit;
@end

