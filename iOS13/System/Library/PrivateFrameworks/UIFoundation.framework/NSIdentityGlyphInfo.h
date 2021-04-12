/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/NSGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding> {

	NSFont* _font;
	unsigned _glyph;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_font;
-(unsigned)_glyph;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(unsigned short)glyph;
@end

