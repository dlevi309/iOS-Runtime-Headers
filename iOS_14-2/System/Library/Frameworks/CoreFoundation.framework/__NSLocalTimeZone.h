/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(BOOL)supportsSecureCoding;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)name;
-(id)description;
-(Class)classForCoder;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

