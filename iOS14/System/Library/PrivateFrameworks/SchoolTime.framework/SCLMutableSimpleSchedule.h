/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <SchoolTime/SCLSimpleSchedule.h>

@class SCLScheduleTime;

@interface SCLMutableSimpleSchedule : SCLSimpleSchedule

@property (nonatomic,copy) SCLScheduleTime * startTime; 
@property (nonatomic,copy) SCLScheduleTime * endTime; 
@property (assign,nonatomic) long long repeatSchedule; 
-(void)setRepeatSchedule:(long long)arg1 ;
-(void)setStartTime:(SCLScheduleTime *)arg1 ;
-(void)setEndTime:(SCLScheduleTime *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

