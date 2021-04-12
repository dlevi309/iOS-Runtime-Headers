/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDScheduleTimePeriod.h>

@class DNDScheduleTime;

@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod

@property (nonatomic,copy) DNDScheduleTime * startTime; 
@property (nonatomic,copy) DNDScheduleTime * endTime; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEndTime:(DNDScheduleTime *)arg1 ;
-(void)setStartTime:(DNDScheduleTime *)arg1 ;
@end

