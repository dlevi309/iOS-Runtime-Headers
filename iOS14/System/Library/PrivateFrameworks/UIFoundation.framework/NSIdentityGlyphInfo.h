/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned short)glyph;
-(id)_font;
-(unsigned)_glyph;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(void)dealloc;
@end

