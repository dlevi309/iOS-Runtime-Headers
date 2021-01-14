/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTScheduleable <NAEquatable,NSCopying>
@optional
-(BOOL)isSleepItem;
-(BOOL)isSingleTime;
-(BOOL)isItemEnabled;
-(BOOL)overridesScheduledObject:(id)arg1 calendar:(id)arg2;
-(void)scheduleOverridenForDate:(id)arg1;

@required
-(id)upcomingTriggersAfterDate:(id)arg1;
-(BOOL)shouldBeScheduled;
-(id)identifier;

@end

