/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSColor : NSObject <NSSecureCoding> {

	unsigned char _red;
	unsigned char _green;
	unsigned char _blue;

}
+(BOOL)supportsSecureCoding;
+(id)symbolicColorForLegacyRGB:(id)arg1 ;
+(BOOL)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4 ;
-(unsigned char)red;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)blue;
-(id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)green;
@end

