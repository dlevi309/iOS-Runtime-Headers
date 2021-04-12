/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentRecurrenceRule : EKPersistentObject
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)alternateUniverseClass;
+(Class)meltedClass;
-(int)entityType;
-(void)setFrequency:(int)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(int)frequency;
-(id)endDate;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(void)setInterval:(long long)arg1 ;
-(id)UUID;
-(id)owner;
-(long long)interval;
-(void)setEndDate:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(long long)firstDayOfTheWeekRaw;
-(void)setOwner:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFirstDayOfTheWeekRaw:(long long)arg1 ;
-(id)cachedEndDate;
@end

