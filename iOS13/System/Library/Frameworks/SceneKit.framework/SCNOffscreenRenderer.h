/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic,readonly) unsigned textureID; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (assign,nonatomic) CGSize size; 
+(id)offscreenRendererWithDevice:(id)arg1 size:(CGSize)arg2 ;
+(id)offscreenRendererWithContext:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)snapshot;
-(unsigned long long)antialiasingMode;
-(unsigned)textureID;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
@end

