/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)release;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)dealloc;
@end

