/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {

	NSAttributedString* _original;
	NSDictionary* _formatConfiguration;

}
+(const CFStringRef)createStringRequiringInflectionWithFormat:(CFStringRef)arg1 formatOptions:(CFDictionaryRef)arg2 arguments:(char*)arg3 ;
+(const CFStringRef)copyStringWithMarkup:(CFStringRef)arg1 formatConfiguration:(CFDictionaryRef)arg2 ;
+(id)whitelistedStringWithAttributedString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)initWithAttributedStringMarkup:(id)arg1 formatConfiguration:(id)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(Class)classForCoder;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)__baseAttributedString;
-(id)_initWithAttributedString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

