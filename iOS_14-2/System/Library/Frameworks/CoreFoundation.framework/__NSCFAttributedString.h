/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@interface __NSCFAttributedString : NSMutableAttributedString
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(oneway void)release;
-(void)setAttributedString:(id)arg1 ;
-(BOOL)_tryRetain;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)retain;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(BOOL)_isDeallocating;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(unsigned long long)length;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(Class)classForCoder;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)retainCount;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

