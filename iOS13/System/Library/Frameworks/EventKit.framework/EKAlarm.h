/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, EKObject, EKCalendar, EKCalendarItem, NSArray, NSDate, EKStructuredLocation;

@interface EKAlarm : EKObject <NSCopying> {

	long long _type;
	NSString* _emailAddress;
	NSString* _soundName;
	NSURL* _url;

}

@property (nonatomic,readonly) BOOL isAbsolute; 
@property (assign,nonatomic) BOOL isSnoozed; 
@property (assign,getter=isDefaultAlarm,nonatomic) BOOL defaultAlarm; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * externalID; 
@property (nonatomic,readonly) EKObject * owner; 
@property (nonatomic,readonly) EKCalendar * calendarOwner; 
@property (nonatomic,readonly) EKCalendarItem * calendarItemOwner; 
@property (nonatomic,retain) EKAlarm * originalAlarm; 
@property (nonatomic,copy) NSArray * snoozedAlarms; 
@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,copy) NSDate * absoluteDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (assign,nonatomic) long long proximity; 
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * soundName;                                   //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSURL * url;                                            //@synthesize url=_url - In the implementation block
+(id)alarmWithAbsoluteDate:(id)arg1 ;
+(id)alarmWithRelativeOffset:(double)arg1 ;
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(long long)maxPublicProximity;
+(int)_currentAuthorizationStatus;
+(BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1 ;
+(BOOL)areLocationsAvailable;
+(BOOL)areLocationsAllowed;
+(BOOL)areLocationsCurrentlyEnabled;
+(double)defaultGeofencedReminderRadius;
+(id)alarmWithAlarm:(id)arg1 ;
+(id)noneTriggerDate;
-(id)localizedDescription;
-(id)_localizedDescription:(BOOL)arg1 isAllDay:(BOOL)arg2 ;
-(id)longLocalizedDescription;
-(id)longLocalizedAllDayDescription;
-(id)localizedAllDayDescription;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(NSURL *)url;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)_reset;
-(EKObject *)owner;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(long long)proximity;
-(BOOL)isAbsolute;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(NSString *)externalID;
-(long long)alarmType;
-(BOOL)isSnoozed;
-(void)setIsSnoozed:(BOOL)arg1 ;
-(NSDate *)absoluteDate;
-(double)relativeOffset;
-(EKStructuredLocation *)structuredLocation;
-(BOOL)isTopographicallyEqualToAlarm:(id)arg1 ;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(id)acknowledgedDate;
-(id)semanticIdentifier;
-(BOOL)isDefaultAlarm;
-(NSArray *)snoozedAlarms;
-(EKCalendarItem *)calendarItemOwner;
-(EKAlarm *)originalAlarm;
-(void)setOriginalAlarm:(EKAlarm *)arg1 ;
-(void)setAlarmType:(long long)arg1 ;
-(EKCalendar *)calendarOwner;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(NSArray *)arg1 ;
-(BOOL)validateWithOwner:(id)arg1 error:(id*)arg2 ;
-(id)initWithAbsoluteDate:(id)arg1 ;
-(id)initWithRelativeOffset:(double)arg1 ;
-(id)relativeOffsetRaw;
-(void)setRelativeOffsetRaw:(id)arg1 ;
-(id)ownerUUID;
-(void)addSnoozedAlarm:(id)arg1 ;
-(void)removeSnoozedAlarm:(id)arg1 ;
-(BOOL)triggerIsNotRelativeToTravelTime;
-(void)setTriggerIsNotRelativeToTravelTime:(BOOL)arg1 ;
-(BOOL)isVehicleAlarm;
-(BOOL)isTimeToLeaveAlarm;
-(void)setIsTimeToLeaveAlarm:(BOOL)arg1 ;
-(BOOL)shouldIncludeInNormalAlarms;
@end

