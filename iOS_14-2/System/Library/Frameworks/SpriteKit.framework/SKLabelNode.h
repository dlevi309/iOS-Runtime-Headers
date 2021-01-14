/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(long long)blendMode;
-(NSString *)fontName;
-(long long)lineBreakMode;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(CTFontRef)arg1 ;
-(UIColor *)color;
-(id)attributedString;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(id)copy;
-(double)preferredMaxLayoutWidth;
-(NSString *)text;
-(void)setFontSize:(double)arg1 ;
-(void)setFontColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)setBlendMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfLines;
-(UIColor *)fontColor;
-(void)_initialize;
-(void)setColorBlendFactor:(double)arg1 ;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(void)setVerticalAlignmentMode:(long long)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(double)colorBlendFactor;
-(id)_getTextSprites;
-(void)setUIFont:(id)arg1 ;
-(long long)horizontalAlignmentMode;
-(long long)verticalAlignmentMode;
-(id)initWithFontNamed:(id)arg1 ;
@end

