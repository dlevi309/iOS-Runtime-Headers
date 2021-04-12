/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationTriggerData : NSObject {

	BOOL _isOffsetFromTravelTimeStart;
	unsigned long long _trigger;
	NSString* _alarmID;
	EKTravelEngineHypothesis* _hypothesis;

}

@property (nonatomic,readonly) unsigned long long trigger;                         //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,copy,readonly) NSString * alarmID;                            //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) BOOL isOffsetFromTravelTimeStart;                   //@synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart - In the implementation block
@property (nonatomic,readonly) EKTravelEngineHypothesis * hypothesis;              //@synthesize hypothesis=_hypothesis - In the implementation block
-(id)description;
-(NSString *)alarmID;
-(unsigned long long)trigger;
-(EKTravelEngineHypothesis *)hypothesis;
-(id)initWithTrigger:(unsigned long long)arg1 alarmID:(id)arg2 isOffsetFromTravelTimeStart:(BOOL)arg3 hypothesis:(id)arg4 ;
-(BOOL)isOffsetFromTravelTimeStart;
@end

