/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipWeakKeys;
+(id)calendarItemPropertyName;
-(id)name;
-(EKCalendar *)calendar;
-(unsigned)changeType;
-(id)URL;
-(NSDate *)timestamp;
-(id)phoneNumber;
-(id)notification;
-(id)emailAddress;
-(NSNumber *)deleteCount;
-(id)firstName;
-(id)lastName;
-(NSNumber *)updateCount;
-(EKCalendarItem *)calendarItem;
-(BOOL)timeChanged;
-(BOOL)dateChanged;
-(BOOL)locationChanged;
-(BOOL)alerted;
-(NSString *)deletedTitle;
-(NSString *)changedByDisplayName;
-(NSNumber *)createCount;
-(BOOL)titleChanged;
-(void)clearAlertedStatus;
-(NSURL *)changedByAddress;
-(NSString *)changedByFirstName;
-(NSString *)changedByLastName;
-(unsigned)changedProperties;
-(unsigned)publicStatus;
-(BOOL)_propertyWithFlagDidChange:(unsigned)arg1 ;
@end

