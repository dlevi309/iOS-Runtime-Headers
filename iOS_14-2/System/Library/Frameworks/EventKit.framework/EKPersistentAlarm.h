/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAlarm : EKPersistentObject
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)alternateUniverseClass;
+(Class)meltedClass;
-(int)entityType;
-(id)externalData;
-(void)setExternalData:(id)arg1 ;
-(id)UUID;
-(id)semanticIdentifier;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(long long)proximity;
-(id)description;
-(id)structuredLocation;
-(void)setCalendarItemOwner:(id)arg1 ;
-(void)setStructuredLocation:(id)arg1 ;
-(id)snoozedAlarms;
-(id)originalAlarm;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(void)setOriginalAlarm:(id)arg1 ;
-(id)acknowledgedDate;
-(void)setUUID:(id)arg1 ;
-(id)calendarItemOwner;
-(long long)alarmType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)absoluteDate;
-(void)setAbsoluteDate:(id)arg1 ;
-(id)relativeOffset;
-(void)setRelativeOffset:(id)arg1 ;
-(void)setAlarmType:(long long)arg1 ;
-(BOOL)isDefaultAlarm;
-(id)calendarOwner;
-(void)setCalendarOwner:(id)arg1 ;
-(void)setIsDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(id)arg1 ;
@end

