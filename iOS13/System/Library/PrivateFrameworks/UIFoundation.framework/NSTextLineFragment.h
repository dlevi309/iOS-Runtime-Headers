/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIFont, NSAttributedString;

@interface NSTextLineFragment : NSObject <NSSecureCoding> {

	CTLineRef _lineRef;
	unsigned short* _glyphs;
	CGSize* _advances;
	long long _glyphCount;
	UIFont* _font;
	NSAttributedString* _attributedString;
	NSRange _characterRange;
	CGPoint glyphOrigin;
	CGRect typographicBounds;

}

@property (assign) CGRect typographicBounds; 
@property (assign) CGPoint glyphOrigin; 
@property (copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) NSRange characterRange;                                  //@synthesize characterRange=_characterRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)typographicBounds;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(NSAttributedString *)attributedString;
-(CGRect)boundsWithType:(long long)arg1 options:(unsigned long long)arg2 ;
-(NSRange)characterRange;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)numberOfGlyphs;
-(CGPoint)glyphOrigin;
-(void)drawAtPoint:(CGPoint)arg1 graphicsContext:(id)arg2 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 range:(NSRange)arg3 ;
-(void)setLineRef:(CTLineRef)arg1 ;
-(void)setGlyphs:(const unsigned short*)arg1 advances:(const CGSize*)arg2 count:(long long)arg3 font:(id)arg4 ;
-(CGRect)typographicUsedBounds;
-(CGPoint)locationForCharacterAtIndex:(long long)arg1 ;
-(long long)characterIndexForPoint:(CGPoint)arg1 fractionOfDistanceThroughGlyph:(double*)arg2 ;
-(void)setTypographicBounds:(CGRect)arg1 ;
-(void)setGlyphOrigin:(CGPoint)arg1 ;
@end

