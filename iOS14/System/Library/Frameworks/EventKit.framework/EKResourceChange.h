/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class EKCalendar, EKCalendarItem, NSString, NSURL, NSDate, NSNumber;

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (nonatomic,retain,readonly) EKCalendar * calendar; 
@property (nonatomic,retain,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,copy,readonly) NSString * changedByDisplayName; 
@property (nonatomic,copy,readonly) NSURL * changedByAddress; 
@property (nonatomic,copy,readonly) NSString * changedByFirstName; 
@property (nonatomic,copy,readonly) NSString * changedByLastName; 
@property (nonatomic,readonly) unsigned changeType; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) BOOL dateChanged; 
@property (nonatomic,readonly) BOOL timeChanged; 
@property (nonatomic,readonly) BOOL titleChanged; 
@property (nonatomic,readonly) BOOL locationChanged; 
@property (nonatomic,readonly) NSNumber * createCount; 
@property (nonatomic,readonly) NSNumber * updateCount; 
@property (nonatomic,readonly) NSNumber * deleteCount; 
@property (nonatomic,readonly) NSString * deletedTitle; 
@property (nonatomic,readonly) BOOL alerted; 
@property (nonatomic,readonly) unsigned publicStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)knownRelationshipSingleValueKeys;
+(id)calendarItemPropertyName;
+(id)knownRelationshipWeakKeys;
+(Class)frozenClass;
-(id)firstName;
-(id)lastName;
-(unsigned)changeType;
-(id)notification;
-(id)emailAddress;
-(NSDate *)timestamp;
-(EKCalendar *)calendar;
-(id)phoneNumber;
-(NSNumber *)deleteCount;
-(BOOL)alerted;
-(id)name;
-(NSString *)deletedTitle;
-(NSString *)changedByDisplayName;
-(NSNumber *)createCount;
-(NSNumber *)updateCount;
-(BOOL)dateChanged;
-(BOOL)timeChanged;
-(BOOL)locationChanged;
-(BOOL)titleChanged;
-(BOOL)_propertyWithFlagDidChange:(unsigned)arg1 ;
-(id)URL;
-(EKCalendarItem *)calendarItem;
-(void)clearAlertedStatus;
-(unsigned)publicStatus;
-(NSURL *)changedByAddress;
-(NSString *)changedByFirstName;
-(NSString *)changedByLastName;
-(unsigned)changedProperties;
@end

