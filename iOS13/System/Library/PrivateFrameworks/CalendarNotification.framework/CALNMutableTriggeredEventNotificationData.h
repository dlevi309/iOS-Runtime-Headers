/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <CalendarNotification/CALNTriggeredEventNotificationData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, EKTravelEngineHypothesis;

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>

@property (nonatomic,copy) NSString * alarmID; 
@property (assign,nonatomic) BOOL isOffsetFromTravelTimeStart; 
@property (nonatomic,copy) NSDate * lastFireTimeOfAlertOffsetFromTravelTime; 
@property (nonatomic,copy) EKTravelEngineHypothesis * hypothesis; 
@property (assign,nonatomic) BOOL hasDisplayedLeaveByMessage; 
@property (assign,nonatomic) BOOL hasDisplayedLeaveNowMessage; 
@property (assign,nonatomic) BOOL hasDisplayedRunningLateMessage; 
@property (nonatomic,copy) NSDate * lastTimeNotificationAdded; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAlarmID:(NSString *)arg1 ;
-(void)setIsOffsetFromTravelTimeStart:(BOOL)arg1 ;
-(void)setLastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg1 ;
-(void)setHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)setHasDisplayedLeaveByMessage:(BOOL)arg1 ;
-(void)setHasDisplayedLeaveNowMessage:(BOOL)arg1 ;
-(void)setHasDisplayedRunningLateMessage:(BOOL)arg1 ;
-(void)setLastTimeNotificationAdded:(NSDate *)arg1 ;
@end

