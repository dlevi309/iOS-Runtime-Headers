/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)notes;
-(NSArray *)attendees;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setReadOnly:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSArray *)alerts;
-(NSNumber *)readOnly;
-(id)encodedClassName;
-(void)setNotes:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSString *)location;
-(BOOL)allDay;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSURL *)calendarId;
-(void)setCalendarId:(NSURL *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(NSString *)selfParticipantStatus;
-(NSURL *)calendarPunchoutURI;
-(void)setCalendarPunchoutURI:(NSURL *)arg1 ;
-(NSNumber *)includeRecurrences;
-(void)setIncludeRecurrences:(NSNumber *)arg1 ;
-(void)setSelfParticipantStatus:(NSString *)arg1 ;
-(void)setAlerts:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSString *)status;
-(NSArray *)recurrences;
@end

