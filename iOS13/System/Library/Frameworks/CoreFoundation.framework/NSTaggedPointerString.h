/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSTaggedPointerString : NSObject
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)_setAsTaggedStringClass;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isNSString__;
-(unsigned long long)length;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)UTF8String;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(BOOL)_isCString;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(BOOL)_getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned)arg3 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
@end

