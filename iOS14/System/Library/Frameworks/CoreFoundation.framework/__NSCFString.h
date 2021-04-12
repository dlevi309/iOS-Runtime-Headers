/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface __NSCFString : NSMutableString
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)cStringLength;
-(BOOL)isNSString__;
-(BOOL)hasPrefix:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(BOOL)isEqualToString:(id)arg1 ;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(BOOL)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(void)appendString:(id)arg1 ;
-(oneway void)release;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)appendFormat:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)smallestEncoding;
-(unsigned long long)length;
-(BOOL)hasSuffix:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(const unsigned short*)_fastCharacterContents;
-(Class)classForCoder;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)copy;
-(const char*)cString;
-(unsigned long long)retainCount;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned long long)hash;
-(const char*)UTF8String;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)_isCString;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setString:(id)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

