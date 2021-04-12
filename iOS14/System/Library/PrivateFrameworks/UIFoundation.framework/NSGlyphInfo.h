/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _baseString;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCGGlyph:(unsigned short)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(Class)classForKeyedArchiver;
-(id)_baseString;
-(unsigned long long)characterIdentifier;
-(unsigned long long)characterCollection;
-(id)baseString;
-(id)glyphName;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned short)glyphID;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithBaseString:(id)arg1 ;
-(void)dealloc;
@end

