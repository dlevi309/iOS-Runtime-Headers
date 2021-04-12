/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)knownIdentityKeysForComparison;
+(int)_currentAuthorizationStatus;
+(BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1 ;
+(BOOL)areLocationsAllowed;
+(BOOL)areLocationsAvailable;
+(id)alarmWithAbsoluteDate:(id)arg1 ;
+(BOOL)areLocationsCurrentlyEnabled;
+(double)defaultGeofencedReminderRadius;
+(id)knownRelationshipMultiValueKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownSingleValueKeysForComparison;
+(long long)maxPublicProximity;
+(Class)frozenClass;
+(id)alarmWithRelativeOffset:(double)arg1 ;
-(NSString *)soundName;
-(void)setSoundName:(NSString *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)UUID;
-(id)semanticIdentifier;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)init;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(EKObject *)owner;
-(NSString *)emailAddress;
-(id)ownerUUID;
-(NSString *)externalID;
-(BOOL)validateWithOwner:(id)arg1 error:(id*)arg2 ;
-(void)setIsSnoozed:(BOOL)arg1 ;
-(id)initWithAbsoluteDate:(id)arg1 ;
-(id)initWithRelativeOffset:(double)arg1 ;
-(id)relativeOffsetRaw;
-(BOOL)defaultAlarm;
-(void)setRelativeOffsetRaw:(id)arg1 ;
-(void)addSnoozedAlarm:(id)arg1 ;
-(void)removeSnoozedAlarm:(id)arg1 ;
-(BOOL)isTopographicallyEqualToAlarm:(id)arg1 ;
-(long long)proximity;
-(NSURL *)url;
-(BOOL)isSnoozed;
-(id)description;
-(EKStructuredLocation *)structuredLocation;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)type;
-(BOOL)isAbsolute;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(BOOL)_reset;
-(NSArray *)snoozedAlarms;
-(EKAlarm *)originalAlarm;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setProximity:(long long)arg1 ;
-(void)setOriginalAlarm:(EKAlarm *)arg1 ;
-(id)acknowledgedDate;
-(void)setUUID:(NSString *)arg1 ;
-(EKCalendarItem *)calendarItemOwner;
-(long long)alarmType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)absoluteDate;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(double)relativeOffset;
-(void)setRelativeOffset:(double)arg1 ;
-(void)setAlarmType:(long long)arg1 ;
-(BOOL)isDefaultAlarm;
-(EKCalendar *)calendarOwner;
-(void)setSnoozedAlarms:(NSArray *)arg1 ;
@end

