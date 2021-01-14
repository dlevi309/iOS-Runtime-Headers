/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface STConfigurationSchedule : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allDaysTheSame;
	NSDictionary* _scheduleDaysByWeekdayIndex;

}

@property (assign,nonatomic) BOOL allDaysTheSame;                                 //@synthesize allDaysTheSame=_allDaysTheSame - In the implementation block
@property (copy,readonly) NSDictionary * scheduleDaysByWeekdayIndex;              //@synthesize scheduleDaysByWeekdayIndex=_scheduleDaysByWeekdayIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithScheduleDays:(id)arg1 ;
-(NSDictionary *)scheduleDaysByWeekdayIndex;
-(BOOL)isEqualToConfigurationSchedule:(id)arg1 ;
-(id)initWithRepeatedScheduleDay:(id)arg1 ;
-(BOOL)allDaysTheSame;
-(void)setAllDaysTheSame:(BOOL)arg1 ;
@end

