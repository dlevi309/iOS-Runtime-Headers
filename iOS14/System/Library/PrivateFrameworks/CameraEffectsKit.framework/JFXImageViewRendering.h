/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

@class JTImage;


@protocol JFXImageViewRendering <NSObject>
@property (nonatomic,retain) JTImage * jtImage; 
@property (nonatomic,readonly) long long renderingType; 
@property (assign,nonatomic) BOOL flipX; 
@property (assign,nonatomic) BOOL flipY; 
@property (assign,nonatomic) BOOL enableDebugDrawing; 
@required
-(void)setFlipX:(BOOL)arg1;
-(void)setFlipY:(BOOL)arg1;
-(BOOL)flipX;
-(JTImage *)jtImage;
-(void)setEnableDebugDrawing:(BOOL)arg1;
-(BOOL)flipY;
-(void)setJtImage:(id)arg1;
-(BOOL)enableDebugDrawing;
-(long long)renderingType;

@end

