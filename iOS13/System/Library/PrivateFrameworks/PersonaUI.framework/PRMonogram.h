/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/


#import <PersonaUI/PersonaUI-Structs.h>
@class NSString, UIColor, PRMonogramColor;

@interface PRMonogram : NSObject {

	NSString* _text;
	unsigned long long _fontIndex;
	UIColor* _color;
	PRMonogramColor* _monogramColor;

}

@property (nonatomic,copy) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long fontIndex;                          //@synthesize fontIndex=_fontIndex - In the implementation block
@property (nonatomic,retain) UIColor * color;                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) PRMonogramColor * monogramColor;                       //@synthesize monogramColor=_monogramColor - In the implementation block
@property (nonatomic,readonly) UIColor * plateFlatColor; 
@property (nonatomic,readonly) UIColor * plateGradientStartColor; 
@property (nonatomic,readonly) UIColor * plateGradientEndColor; 
@property (nonatomic,readonly) UIColor * plateSelectedActiveColor; 
@property (nonatomic,readonly) UIColor * plateSelectedInactiveColor; 
@property (nonatomic,readonly) UIColor * plateSelectedActiveTextColor; 
+(id)monogram;
+(id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2 ;
+(double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2 ;
+(id)_fontSpecs;
+(void)updatePlateOverlayLayer:(id)arg1 ;
+(unsigned long long)countOfFonts;
+(id)plateOverlayLayer;
+(id)monogramWithData:(id)arg1 ;
-(id)init;
-(id)description;
-(id)dataRepresentation;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(PRMonogramColor *)monogramColor;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)_initWithData:(id)arg1 ;
-(unsigned long long)fontIndex;
-(id)initWithText:(id)arg1 fontIndex:(unsigned long long)arg2 monogramColor:(id)arg3 ;
-(UIColor *)plateFlatColor;
-(UIColor *)plateGradientStartColor;
-(UIColor *)plateGradientEndColor;
-(BOOL)_renderTextInContext:(CGContextRef)arg1 frame:(CGRect)arg2 ;
-(id)stringAttributesForDiameter:(double)arg1 ;
-(UIColor *)plateSelectedActiveColor;
-(UIColor *)plateSelectedInactiveColor;
-(UIColor *)plateSelectedActiveTextColor;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(void)setFontIndexToUnsupportedValue;
-(void)_takeValuesFromDataRepresentation:(id)arg1 ;
-(id)dataRepresentationWithVersion:(unsigned char)arg1 ;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 fontIndex:(unsigned char)arg3 ;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 ;
@end

