/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (copy,readonly) NSString * string; 
+(BOOL)supportsSecureCoding;
+(id)_attributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char*)arg4 ;
+(id)_attributedStringAttributesFromKnownAttributeKeys:(id)arg1 ;
+(id)_localizedAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 ;
+(id)attributedStringFromMarkupString:(id)arg1 ;
+(id)_localizedAttributedStringWithFormat:(id)arg1 ;
+(void)_setAttributedDictionaryClass:(Class)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)cs_rangesMatchingPredicate:(id)arg1 ;
-(void)cs_writeToFileHandle:(_sFILE*)arg1 ;
-(id)_createAttributedSubstringWithRange:(NSRange)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 replacingCharactersInRanges:(const NSRange*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4 ;
-(unsigned long long)_cfTypeID;
-(void)enumerateAttributesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg1 ;
-(id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char*)arg4 ;
-(id)_inflectedAttributedStringWithReplacements:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)_firstValueOfAttributeWithKey:(id)arg1 inRange:(NSRange)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)_inflectionLanguageForRange:(NSRange)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)description;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(Class)classForCoder;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

