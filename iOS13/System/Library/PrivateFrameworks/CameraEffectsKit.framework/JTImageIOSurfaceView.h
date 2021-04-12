/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/JTImageViewRendering.h>

@class JTImage, NSString;

@interface JTImageIOSurfaceView : UIView <JTImageViewRendering> {

	BOOL _flipX;
	BOOL _flipY;
	BOOL _enableDebugDrawing;
	JTImage* _jtImage;
	long long _renderingType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) JTImage * jtImage;                      //@synthesize jtImage=_jtImage - In the implementation block
@property (nonatomic,readonly) long long renderingType;              //@synthesize renderingType=_renderingType - In the implementation block
@property (assign,nonatomic) BOOL flipX;                             //@synthesize flipX=_flipX - In the implementation block
@property (assign,nonatomic) BOOL flipY;                             //@synthesize flipY=_flipY - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDrawing;                //@synthesize enableDebugDrawing=_enableDebugDrawing - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)renderingType;
-(void)setJtImage:(JTImage *)arg1 ;
-(void)setRenderingType:(long long)arg1 ;
-(void)JTImageIOSurfaceView_commonInit;
-(void)updateDebugDrawing;
-(JTImage *)jtImage;
-(BOOL)flipX;
-(void)setFlipX:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)enableDebugDrawing;
-(void)setEnableDebugDrawing:(BOOL)arg1 ;
@end

