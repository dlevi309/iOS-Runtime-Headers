/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface _NSClStr : NSString {

	unsigned long long length;
	unsigned short* characters;

}
-(id)initWithString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(unsigned long long)length;
-(const unsigned short*)_fastCharacterContents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
@end

