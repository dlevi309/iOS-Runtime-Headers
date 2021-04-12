/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDScheduleTimePeriod.h>

@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (nonatomic,copy) DNDScheduleTime * startTime; 
@property (nonatomic,copy) DNDScheduleTime * endTime; 
-(void)setStartTime:(DNDScheduleTime *)arg1 ;
-(void)setEndTime:(DNDScheduleTime *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

