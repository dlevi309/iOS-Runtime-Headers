/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSString.h>

@interface __NSATSStringSegment : NSString {

	CFStringRef _originalString;
	long long _originalStringLength;
	SCD_Struct_NS10 _range;
	const unsigned short* _characters;
	unsigned short _buffer[128];

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const unsigned short*)_fastCharacterContents;
-(void)_setOriginalString:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOriginalString:(id)arg1 range:(NSRange)arg2 ;
@end

