/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <Foundation/NSMutableString.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXAttributedString : NSMutableString <NSCopying> {

	CFAttributedStringRef _string;

}
+(id)string;
+(id)axAttributedStringWithString:(id)arg1 ;
-(id)attributeValueForKey:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(NSRange)arg3 ;
-(void)appendFormat:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)appendAXAttributedString:(id)arg1 ;
-(BOOL)hasAttributes;
-(void)setAttributes:(id)arg1 ;
-(id)axStringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)attributedString;
-(id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(unsigned long long)length;
-(const CFAttributedStringRef)cfAttributedString;
-(void)convertAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)lowercaseString;
-(void)removeAttributes:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)stringByTrimmingCharactersInSet:(id)arg1 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)replaceString:(CFStringRef)arg1 ;
-(id)coalescedAttributes;
-(void)enumerateAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)description;
-(void)setAttributes:(id)arg1 withRange:(NSRange)arg2 ;
-(BOOL)hasAttribute:(id)arg1 ;
-(id)initWithStringOrAttributedString:(id)arg1 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(id)uppercaseString;
-(id)string;
-(id)axAttributedStringDescription;
-(id)attributesAtIndex:(long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)initWithCFAttributedString:(CFAttributedStringRef)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)coalescedFontAttributes;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(BOOL)isAXAttributedString;
-(void)dealloc;
-(void)appendStringOrAXAttributedString:(id)arg1 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1 ;
@end

