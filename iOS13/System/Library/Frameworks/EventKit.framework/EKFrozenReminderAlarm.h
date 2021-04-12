/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@class REMAlarm, NSArray, NSString, EKFrozenReminderStructuredLocation;

@interface EKFrozenReminderAlarm : EKFrozenReminderObject {

	REMAlarm* _timeAlarm;
	REMAlarm* _locationAlarm;

}

@property (readonly) NSArray * alarms; 
@property (readonly) NSArray * triggers; 
@property (readonly) NSString * externalID; 
@property (readonly) EKFrozenReminderStructuredLocation * structuredLocation; 
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
+(Class)meltedClass;
+(id)semanticIdentifierFromREMAlarm:(id)arg1 ;
+(id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(BOOL)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5 ;
+(long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1 ;
+(id)semanticIdentifierFromDateComponents:(id)arg1 ;
+(long long)remAlarmProximityToEKAlarmProximity:(long long)arg1 ;
-(id)UUID;
-(id)uniqueIdentifier;
-(long long)proximity;
-(NSString *)externalID;
-(NSArray *)triggers;
-(NSArray *)alarms;
-(id)absoluteDate;
-(double)relativeOffset;
-(EKFrozenReminderStructuredLocation *)structuredLocation;
-(id)remObjectID;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)semanticIdentifier;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(BOOL)isDefaultAlarm;
-(id)originalAlarm;
-(id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)modifiedStructuredLocation;
-(id)_setTimeOrLocationAlarm:(id)arg1 ;
-(void)_setTimeAndLocationAlarms:(id)arg1 ;
-(id)_timeAlarm;
-(id)_locationAlarm;
-(id)_remStructuredLocation;
-(id)initWithAlarms:(id)arg1 inStore:(id)arg2 ;
-(id)updatedAlarmWithLocation:(id)arg1 ;
@end

