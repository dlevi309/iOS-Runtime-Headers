/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <SchoolTime/SCLScheduleSettings.h>

@class SCLSchedule;

@interface SCLMutableScheduleSettings : SCLScheduleSettings

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) SCLSchedule * schedule; 
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSchedule:(SCLSchedule *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

