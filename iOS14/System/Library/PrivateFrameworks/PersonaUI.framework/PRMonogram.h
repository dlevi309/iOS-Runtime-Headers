/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)updatePlateOverlayLayer:(id)arg1 ;
+(id)plateOverlayLayer;
+(id)monogram;
+(unsigned long long)countOfFonts;
+(double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2 ;
+(id)_fontSpecs;
+(id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2 ;
+(id)monogramWithData:(id)arg1 ;
-(id)dataRepresentation;
-(id)init;
-(UIColor *)plateFlatColor;
-(UIColor *)color;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 fontIndex:(unsigned char)arg3 ;
-(id)_initWithData:(id)arg1 ;
-(UIColor *)plateSelectedInactiveColor;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(PRMonogramColor *)monogramColor;
-(void)appendToRecipe:(id)arg1 text:(id)arg2 ;
-(id)dataRepresentationWithVersion:(unsigned char)arg1 ;
-(id)initWithText:(id)arg1 fontIndex:(unsigned long long)arg2 monogramColor:(id)arg3 ;
-(void)_takeValuesFromDataRepresentation:(id)arg1 ;
-(id)description;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(void)setFontIndexToUnsupportedValue;
-(UIColor *)plateSelectedActiveTextColor;
-(unsigned long long)fontIndex;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)stringAttributesForDiameter:(double)arg1 ;
-(UIColor *)plateSelectedActiveColor;
-(UIColor *)plateGradientEndColor;
-(BOOL)_renderTextInContext:(CGContextRef)arg1 frame:(CGRect)arg2 ;
-(UIColor *)plateGradientStartColor;
@end

