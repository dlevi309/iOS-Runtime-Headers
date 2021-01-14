/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {

	int innerShadowBlendMode;
	int outerShadowBlendMode;
	UIColor* embossHighlightColor;
	UIColor* embossShadowColor;
	double embossSize;
	UIColor* innerShadowColor;
	double innerShadowBlur;
	UIColor* outerShadowColor;
	double outerShadowBlur;
	UIColor* topGradientColor;
	UIColor* bottomGradientColor;
	double innerOpacity;
	CGPoint innerShadowOffset;
	CGPoint outerShadowOffset;

}

@property (nonatomic,retain) UIColor * embossHighlightColor; 
@property (nonatomic,retain) UIColor * embossShadowColor; 
@property (assign,nonatomic) double embossSize; 
@property (nonatomic,retain) UIColor * innerShadowColor; 
@property (assign,nonatomic) CGPoint innerShadowOffset; 
@property (assign,nonatomic) double innerShadowBlur; 
@property (assign,nonatomic) int innerShadowBlendMode; 
@property (nonatomic,retain) UIColor * outerShadowColor; 
@property (assign,nonatomic) CGPoint outerShadowOffset; 
@property (assign,nonatomic) double outerShadowBlur; 
@property (assign,nonatomic) int outerShadowBlendMode; 
@property (nonatomic,retain) UIColor * topGradientColor; 
@property (nonatomic,retain) UIColor * bottomGradientColor; 
@property (assign,nonatomic) double innerOpacity; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
+(id)old2xLetterpressStyle;
+(id)defaultLetterpressStyle;
-(UIEdgeInsets)edgeInsets;
-(double)innerOpacity;
-(void)setEmbossSize:(double)arg1 ;
-(double)innerShadowBlur;
-(void)setInnerShadowBlendMode:(int)arg1 ;
-(void)setInnerShadowColor:(UIColor *)arg1 ;
-(void)setOuterShadowColor:(UIColor *)arg1 ;
-(void)setEmbossShadowColor:(UIColor *)arg1 ;
-(void)setEmbossHighlightColor:(UIColor *)arg1 ;
-(double)embossSize;
-(void)setInnerOpacity:(double)arg1 ;
-(void)setInnerShadowOffset:(CGPoint)arg1 ;
-(void)setInnerShadowBlur:(double)arg1 ;
-(void)setOuterShadowOffset:(CGPoint)arg1 ;
-(void)setOuterShadowBlur:(double)arg1 ;
-(UIColor *)embossShadowColor;
-(void)setOuterShadowBlendMode:(int)arg1 ;
-(void)setTopGradientColor:(UIColor *)arg1 ;
-(void)setBottomGradientColor:(UIColor *)arg1 ;
-(UIColor *)embossHighlightColor;
-(UIColor *)innerShadowColor;
-(CGPoint)innerShadowOffset;
-(int)innerShadowBlendMode;
-(UIColor *)outerShadowColor;
-(CGPoint)outerShadowOffset;
-(double)outerShadowBlur;
-(int)outerShadowBlendMode;
-(UIColor *)topGradientColor;
-(UIColor *)bottomGradientColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

