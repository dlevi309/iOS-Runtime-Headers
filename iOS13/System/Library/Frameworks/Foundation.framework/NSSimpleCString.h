/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)cStringLength;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)hasPrefix:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(id)stringByAppendingString:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 ;
@end

