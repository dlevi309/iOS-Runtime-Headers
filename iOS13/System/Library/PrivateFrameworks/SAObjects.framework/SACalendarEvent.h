/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSDate, NSNumber, NSString;

@interface SACalendarEvent : SADomainObject

@property (nonatomic,copy) NSArray * alerts; 
@property (assign,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSArray * attendees; 
@property (nonatomic,copy) NSURL * calendarId; 
@property (nonatomic,copy) NSURL * calendarPunchoutURI; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * includeRecurrences; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * readOnly; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSString * selfParticipantStatus; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)event;
+(id)eventWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)status;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSNumber *)readOnly;
-(void)setStatus:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setReadOnly:(NSNumber *)arg1 ;
-(NSArray *)alerts;
-(void)setAlerts:(NSArray *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(BOOL)allDay;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSString *)selfParticipantStatus;
-(NSURL *)calendarId;
-(void)setCalendarId:(NSURL *)arg1 ;
-(NSURL *)calendarPunchoutURI;
-(void)setCalendarPunchoutURI:(NSURL *)arg1 ;
-(NSNumber *)includeRecurrences;
-(void)setIncludeRecurrences:(NSNumber *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(void)setSelfParticipantStatus:(NSString *)arg1 ;
-(NSString *)timeZoneId;
@end

