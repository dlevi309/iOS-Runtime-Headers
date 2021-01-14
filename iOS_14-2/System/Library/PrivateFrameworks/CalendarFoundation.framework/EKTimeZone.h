/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying> {

	NSTimeZone* _nsTimeZone;

}

@property (nonatomic,retain) NSTimeZone * nsTimeZone;              //@synthesize nsTimeZone=_nsTimeZone - In the implementation block
+(id)timeZoneWithName:(id)arg1 ;
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
-(id)NSTimeZone;
-(id)initWithNSTimeZone:(id)arg1 ;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(void)setNsTimeZone:(NSTimeZone *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSTimeZone *)nsTimeZone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

