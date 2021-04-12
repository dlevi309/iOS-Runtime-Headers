/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAlarm : EKPersistentObject
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(Class)alternateUniverseClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(id)location;
-(long long)proximity;
-(void)setLocation:(id)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(int)entityType;
-(long long)alarmType;
-(id)absoluteDate;
-(id)relativeOffset;
-(id)structuredLocation;
-(void)setStructuredLocation:(id)arg1 ;
-(void)setAbsoluteDate:(id)arg1 ;
-(void)setRelativeOffset:(id)arg1 ;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(id)acknowledgedDate;
-(id)semanticIdentifier;
-(BOOL)isDefaultAlarm;
-(id)externalData;
-(id)snoozedAlarms;
-(id)calendarItemOwner;
-(id)originalAlarm;
-(void)setOriginalAlarm:(id)arg1 ;
-(void)setExternalData:(id)arg1 ;
-(void)setCalendarItemOwner:(id)arg1 ;
-(void)setAlarmType:(long long)arg1 ;
-(id)calendarOwner;
-(void)setCalendarOwner:(id)arg1 ;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(id)arg1 ;
@end

