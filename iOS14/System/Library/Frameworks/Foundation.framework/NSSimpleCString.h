/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSSimpleCString : NSString {

	char* bytes;
	int numBytes;
	int _unused;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)cStringLength;
-(BOOL)hasPrefix:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(BOOL)isEqualToString:(id)arg1 ;
-(id)stringByAppendingString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)smallestEncoding;
-(unsigned long long)length;
-(BOOL)hasSuffix:(id)arg1 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
@end

