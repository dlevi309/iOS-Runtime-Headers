/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/JFXImageViewRendering.h>

@class JTImage, NSString;

@interface JFXImageIOSurfaceView : UIView <JFXImageViewRendering> {

	BOOL _flipX;
	BOOL _flipY;
	BOOL _enableDebugDrawing;
	JTImage* _jtImage;
	long long _renderingType;

}

@property (nonatomic,retain) JTImage * jtImage;                      //@synthesize jtImage=_jtImage - In the implementation block
@property (nonatomic,readonly) long long renderingType;              //@synthesize renderingType=_renderingType - In the implementation block
@property (assign,nonatomic) BOOL flipX;                             //@synthesize flipX=_flipX - In the implementation block
@property (assign,nonatomic) BOOL flipY;                             //@synthesize flipY=_flipY - In the implementation block
@property (assign,nonatomic) BOOL enableDebugDrawing;                //@synthesize enableDebugDrawing=_enableDebugDrawing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFlipX:(BOOL)arg1 ;
-(void)setFlipY:(BOOL)arg1 ;
-(BOOL)flipX;
-(JTImage *)jtImage;
-(void)setEnableDebugDrawing:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)updateDebugDrawing;
-(void)setJtImage:(JTImage *)arg1 ;
-(BOOL)enableDebugDrawing;
-(id)initWithCoder:(id)arg1 ;
-(long long)renderingType;
-(void)setRenderingType:(long long)arg1 ;
-(void)JFXImageIOSurfaceView_commonInit;
@end

