/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/NSIdentityGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGlyphNameGlyphInfo : NSIdentityGlyphInfo <NSSecureCoding> {

	NSString* _name;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)glyphName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGlyphName:(id)arg1 glyph:(unsigned)arg2 forFont:(id)arg3 baseString:(id)arg4 ;
-(void)dealloc;
@end

