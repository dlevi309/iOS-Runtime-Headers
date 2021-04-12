/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

@class JTImage;


@protocol JTImageViewRendering <NSObject>
@property (nonatomic,retain) JTImage * jtImage; 
@property (nonatomic,readonly) long long renderingType; 
@property (assign,nonatomic) BOOL flipX; 
@property (assign,nonatomic) BOOL flipY; 
@property (assign,nonatomic) BOOL enableDebugDrawing; 
@required
-(long long)renderingType;
-(void)setJtImage:(id)arg1;
-(JTImage *)jtImage;
-(BOOL)flipX;
-(void)setFlipX:(BOOL)arg1;
-(BOOL)flipY;
-(void)setFlipY:(BOOL)arg1;
-(BOOL)enableDebugDrawing;
-(void)setEnableDebugDrawing:(BOOL)arg1;

@end

