/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, NSAttributedString, UIColor;

@interface SKLabelNode : SKNode {

	SKCLabelNode* _skcLabelNode;

}

@property (assign,nonatomic) long long verticalAlignmentMode; 
@property (assign,nonatomic) long long horizontalAlignmentMode; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double preferredMaxLayoutWidth; 
@property (nonatomic,copy) NSString * fontName; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * fontColor; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)labelNodeWithFontNamed:(id)arg1 ;
+(id)labelNodeWithText:(id)arg1 ;
+(id)labelNodeWithAttributedText:(id)arg1 ;
+(id)_labelNodeWithFontNamed:(id)arg1 ;
+(id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CGRect)frame;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(id)attributedString;
-(void)setFont:(CTFontRef)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(void)setFontColor:(UIColor *)arg1 ;
-(UIColor *)fontColor;
-(void)_initialize;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setColorBlendFactor:(double)arg1 ;
-(double)colorBlendFactor;
-(id)_getTextSprites;
-(void)setUIFont:(id)arg1 ;
-(long long)horizontalAlignmentMode;
-(long long)verticalAlignmentMode;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(void)setVerticalAlignmentMode:(long long)arg1 ;
-(id)initWithFontNamed:(id)arg1 ;
@end

