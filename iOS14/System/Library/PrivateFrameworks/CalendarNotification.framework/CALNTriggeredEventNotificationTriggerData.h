/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)trigger;
-(id)description;
-(EKTravelEngineHypothesis *)hypothesis;
-(NSString *)alarmID;
-(id)initWithTrigger:(unsigned long long)arg1 alarmID:(id)arg2 isOffsetFromTravelTimeStart:(BOOL)arg3 hypothesis:(id)arg4 ;
-(BOOL)isOffsetFromTravelTimeStart;
@end

