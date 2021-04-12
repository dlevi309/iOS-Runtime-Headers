/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString {

	SCD_Union_NS38* contents;
	fields flags;
	unsigned long long numCharacters;
	void* _reserved;

}
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(const char*)cString;
-(unsigned long long)cStringLength;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)fastestEncoding;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4 ;
@end

