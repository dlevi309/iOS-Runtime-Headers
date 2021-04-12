/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/SKWarpable.h>

@class CIFilter, SKShader, NSDictionary, NSString, SKWarpGeometry;

@interface SKEffectNode : SKNode <SKWarpable> {

	SKCEffectNode* _skcEffectNode;

}

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) BOOL shouldCenterFilter; 
@property (assign,nonatomic) BOOL shouldEnableEffects; 
@property (assign,nonatomic) BOOL shouldRasterize; 
@property (assign,nonatomic) long long blendMode; 
@property (nonatomic,retain) SKShader * shader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKWarpGeometry * warpGeometry; 
@property (assign,nonatomic) long long subdivisionLevels; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFilter:(CIFilter *)arg1 ;
-(CIFilter *)filter;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setShouldEnableEffects:(BOOL)arg1 ;
-(void)setWarpGeometry:(SKWarpGeometry *)arg1 ;
-(SKWarpGeometry *)warpGeometry;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)setSubdivisionLevels:(long long)arg1 ;
-(long long)subdivisionLevels;
-(BOOL)shouldEnableEffects;
-(BOOL)shouldCenterFilter;
-(void)setShouldCenterFilter:(BOOL)arg1 ;
@end

