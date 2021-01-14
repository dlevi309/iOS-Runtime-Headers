/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)snapshot;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)antialiasingMode;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
-(unsigned)textureID;
@end

