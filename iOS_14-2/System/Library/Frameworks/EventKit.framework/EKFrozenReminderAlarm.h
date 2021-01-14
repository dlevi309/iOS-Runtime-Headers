/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)meltedClass;
+(id)semanticIdentifierFromREMAlarm:(id)arg1 ;
+(id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(BOOL)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5 ;
+(long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1 ;
+(id)semanticIdentifierFromDateComponents:(id)arg1 ;
+(long long)remAlarmProximityToEKAlarmProximity:(long long)arg1 ;
+(id)uniqueIdentifierForREMObject:(id)arg1 ;
-(NSArray *)alarms;
-(id)UUID;
-(id)semanticIdentifier;
-(id)remObjectID;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(NSString *)externalID;
-(id)uniqueIdentifier;
-(long long)proximity;
-(NSArray *)triggers;
-(id)_timeAlarm;
-(id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)modifiedStructuredLocation;
-(EKFrozenReminderStructuredLocation *)structuredLocation;
-(id)_locationAlarm;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(void)_setTimeAndLocationAlarms:(id)arg1 ;
-(id)_setTimeOrLocationAlarm:(id)arg1 ;
-(id)_remStructuredLocation;
-(id)initWithAlarms:(id)arg1 inStore:(id)arg2 ;
-(id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3 ;
-(id)updatedAlarmWithLocation:(id)arg1 ;
-(id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3 ;
-(id)originalAlarm;
-(id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2 ;
-(id)absoluteDate;
-(double)relativeOffset;
-(BOOL)isDefaultAlarm;
@end

