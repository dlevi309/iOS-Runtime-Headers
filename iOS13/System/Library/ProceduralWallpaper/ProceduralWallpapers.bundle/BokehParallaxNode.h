/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@class SKTexture;

@interface BokehParallaxNode : SKSpriteNode {

	double _parallaxMultiplier;
	SKTexture* _blurTex;
	SKTexture* _regTex;
	double _regScaleX;
	double _regScaleY;
	double _regAlpha;
	CGPoint _layoutPosition;
	CGPoint _driftSpeed;

}

@property (assign) CGPoint layoutPosition;                 //@synthesize layoutPosition=_layoutPosition - In the implementation block
@property (assign) double parallaxMultiplier; 
@property (assign) CGPoint driftSpeed;                     //@synthesize driftSpeed=_driftSpeed - In the implementation block
@property (retain) SKTexture * blurTex;                    //@synthesize blurTex=_blurTex - In the implementation block
@property (retain) SKTexture * regTex;                     //@synthesize regTex=_regTex - In the implementation block
@property (assign) double regScaleX;                       //@synthesize regScaleX=_regScaleX - In the implementation block
@property (assign) double regScaleY;                       //@synthesize regScaleY=_regScaleY - In the implementation block
@property (assign) double regAlpha;                        //@synthesize regAlpha=_regAlpha - In the implementation block
-(id)init;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setParallaxMultiplier:(double)arg1 ;
-(double)parallaxMultiplier;
-(CGPoint)layoutPosition;
-(void)setLayoutPosition:(CGPoint)arg1 ;
-(CGPoint)driftSpeed;
-(void)setDriftSpeed:(CGPoint)arg1 ;
-(SKTexture *)blurTex;
-(void)setBlurTex:(SKTexture *)arg1 ;
-(SKTexture *)regTex;
-(void)setRegTex:(SKTexture *)arg1 ;
-(double)regScaleX;
-(void)setRegScaleX:(double)arg1 ;
-(double)regScaleY;
-(void)setRegScaleY:(double)arg1 ;
-(double)regAlpha;
-(void)setRegAlpha:(double)arg1 ;
@end

