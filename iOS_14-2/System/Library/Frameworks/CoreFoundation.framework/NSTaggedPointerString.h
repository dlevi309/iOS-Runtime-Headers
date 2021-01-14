/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSTaggedPointerString : NSObject
+(void)_setAsTaggedStringClass;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)isNSString__;
-(unsigned long long)fastestEncoding;
-(BOOL)isEqualToString:(id)arg1 ;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(BOOL)_getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned)arg3 ;
-(oneway void)release;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)retain;
-(unsigned long long)smallestEncoding;
-(id)autorelease;
-(unsigned long long)length;
-(const unsigned short*)_fastCharacterContents;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(const char*)UTF8String;
-(BOOL)_isCString;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

