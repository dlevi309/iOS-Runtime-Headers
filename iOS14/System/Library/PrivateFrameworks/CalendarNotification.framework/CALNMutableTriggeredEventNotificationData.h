/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAlarmID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsOffsetFromTravelTimeStart:(BOOL)arg1 ;
-(void)setLastFireTimeOfAlertOffsetFromTravelTime:(NSDate *)arg1 ;
-(void)setHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)setHasDisplayedLeaveByMessage:(BOOL)arg1 ;
-(void)setHasDisplayedLeaveNowMessage:(BOOL)arg1 ;
-(void)setHasDisplayedRunningLateMessage:(BOOL)arg1 ;
-(void)setLastTimeNotificationAdded:(NSDate *)arg1 ;
@end

