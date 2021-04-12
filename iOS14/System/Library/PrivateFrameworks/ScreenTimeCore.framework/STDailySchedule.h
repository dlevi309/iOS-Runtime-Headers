/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class STDowntime;

@interface STDailySchedule : NSManagedObject

@property (assign,nonatomic) long long weekday; 
@property (assign,nonatomic) long long startHour; 
@property (assign,nonatomic) long long startMinute; 
@property (assign,nonatomic) long long endHour; 
@property (assign,nonatomic) long long endMinute; 
@property (nonatomic,retain) STDowntime * downtime; 
@end

