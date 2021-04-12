/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, MKVibrantView, NSString, UIFont, UIColor;

@interface MKPlatterView : UIView {

	UIImageView* _glyphImageView;
	MKVibrantView* _platterView;
	BOOL _highlighted;
	NSString* _glyph;
	UIFont* _glyphFont;
	UIColor* _glyphColor;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) NSString * glyph;                                   //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) UIFont * glyphFont;                                 //@synthesize glyphFont=_glyphFont - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                               //@synthesize glyphColor=_glyphColor - In the implementation block
-(NSString *)glyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setGlyph:(NSString *)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)infoCardThemeChanged;
-(UIFont *)glyphFont;
-(void)setGlyphFont:(UIFont *)arg1 ;
-(void)updateGlyph;
@end

