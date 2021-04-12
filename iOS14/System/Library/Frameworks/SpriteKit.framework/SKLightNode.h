/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKLightNode : SKNode {

	SKCLightNode* _skcLightNode;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIColor * lightColor; 
@property (nonatomic,retain) UIColor * ambientColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) unsigned categoryBitMask; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)falloff;
-(id)init;
-(UIColor *)shadowColor;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLightColor:(UIColor *)arg1 ;
-(UIColor *)lightColor;
-(void)commonInit;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFalloff:(double)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)ambientColor;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setLightCategoryBitMask:(unsigned)arg1 ;
-(void)setLightDecay:(double)arg1 ;
-(double)lightDecay;
-(unsigned)lightCategoryBitMask;
@end

