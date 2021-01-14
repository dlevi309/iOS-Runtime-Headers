/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor, SKTexture, SKShader, NSDictionary;

@interface SKShapeNode : SKNode {

	SKCShapeNode* _skcShapeNode;

}

@property (assign,nonatomic) double renderQualityRatio; 
@property (assign,nonatomic) const CGPathRef path; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (nonatomic,retain) UIColor * fillColor; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isAntialiased,nonatomic) BOOL antialiased; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) double glowWidth; 
@property (assign,nonatomic) int lineCap; 
@property (assign,nonatomic) int lineJoin; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,readonly) double lineLength; 
@property (nonatomic,retain) SKTexture * fillTexture; 
@property (nonatomic,retain) SKShader * fillShader; 
@property (nonatomic,retain) SKTexture * strokeTexture; 
@property (nonatomic,retain) SKShader * strokeShader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)shapeNodeWithPath:(CGPathRef)arg1 ;
+(id)shapeNodeWithEllipseInRect:(CGRect)arg1 ;
+(id)shapeNodeWithEllipseOfSize:(CGSize)arg1 ;
+(id)shapeNodeWithRect:(CGRect)arg1 ;
+(id)shapeNodeWithRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)shapeNodeWithPath:(CGPathRef)arg1 centered:(BOOL)arg2 ;
+(id)shapeNodeWithCircleOfRadius:(double)arg1 ;
+(id)shapeNodeWithRectOfSize:(CGSize)arg1 ;
+(id)shapeNodeWithRectOfSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
+(id)shapeNodeWithTriangleA:(CGPoint)arg1 B:(CGPoint)arg2 C:(CGPoint)arg3 ;
+(id)shapeNodeWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)shapeNodeWithSplinePoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)lineWidth;
-(long long)blendMode;
-(id)init;
-(UIColor *)fillColor;
-(int)lineCap;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(const CGPathRef)arg1 ;
-(const CGPathRef)path;
-(void)setLineCap:(int)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(int)lineJoin;
-(id)description;
-(double)miterLimit;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setBlendMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAntialiased:(BOOL)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)_initialize;
-(BOOL)isAntialiased;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(double)glowWidth;
-(void)setGlowWidth:(double)arg1 ;
-(SKTexture *)strokeTexture;
-(SKTexture *)fillTexture;
-(void)setStrokeTexture:(SKTexture *)arg1 ;
-(void)setFillTexture:(SKTexture *)arg1 ;
-(double)renderQualityRatio;
-(void)setRenderQualityRatio:(double)arg1 ;
-(SKShader *)fillShader;
-(void)setFillShader:(SKShader *)arg1 ;
-(SKShader *)strokeShader;
-(void)setStrokeShader:(SKShader *)arg1 ;
-(double)lineLength;
@end

