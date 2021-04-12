/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
-(unsigned long long)cStringLength;
-(unsigned long long)fastestEncoding;
-(BOOL)isEqualToString:(id)arg1 ;
-(oneway void)release;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)smallestEncoding;
-(id)autorelease;
-(unsigned long long)length;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(const char*)lossyCString;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(id)copy;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(const char*)cString;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
@end

