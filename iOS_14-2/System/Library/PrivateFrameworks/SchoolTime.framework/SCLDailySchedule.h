/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <SchoolTime/SCLSchedule.h>

@class NSMutableDictionary;

@interface SCLDailySchedule : SCLSchedule {

	NSMutableDictionary* _dayMap;

}

@property (nonatomic,retain) NSMutableDictionary * dayMap;              //@synthesize dayMap=_dayMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)dayMap;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)recurrences;
-(id)initWithSchedule:(id)arg1 ;
-(id)startTimeForDay:(long long)arg1 ;
-(id)endTimeForDay:(long long)arg1 ;
-(id)scheduleForDay:(long long)arg1 ;
-(void)setDayMap:(NSMutableDictionary *)arg1 ;
@end

