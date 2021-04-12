/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarNotification.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSTimeZone, EKRecurrenceRule, NSArray, EKCalendarEventInvitationNotificationAttendee;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification <NSCopying> {

	BOOL _allDay;
	BOOL _timeChanged;
	BOOL _dateChanged;
	BOOL _locationChanged;
	BOOL _attendeeReplyChanged;
	BOOL _expanded;
	NSString* _location;
	NSDate* _startDate;
	NSDate* _startDateForNextOccurrence;
	NSDate* _endDate;
	NSDate* _participationStatusModifiedDate;
	NSTimeZone* _timeZone;
	long long _participationStatus;
	long long _status;
	EKRecurrenceRule* _recurrenceRule;
	NSArray* _attendees;
	EKCalendarEventInvitationNotificationAttendee* _owner;
	NSString* _invitedBy;
	EKCalendarEventInvitationNotificationAttendee* _expandedProposedTimeAttendee;

}

@property (nonatomic,retain) NSString * location;                                                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;                                                       //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * participationStatusModifiedDate;                                                  //@synthesize participationStatusModifiedDate=_participationStatusModifiedDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                                                     //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) long long participationStatus;                                                             //@synthesize participationStatus=_participationStatus - In the implementation block
@property (assign,nonatomic) long long status;                                                                          //@synthesize status=_status - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                                                               //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) EKRecurrenceRule * recurrenceRule;                                                         //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (assign,nonatomic) BOOL timeChanged;                                                                          //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) BOOL dateChanged;                                                                          //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) BOOL locationChanged;                                                                      //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) BOOL attendeeReplyChanged;                                                                 //@synthesize attendeeReplyChanged=_attendeeReplyChanged - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                                                       //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) EKCalendarEventInvitationNotificationAttendee * owner;                                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSString * invitedBy;                                                                    //@synthesize invitedBy=_invitedBy - In the implementation block
@property (assign,nonatomic) BOOL couldBeJunk; 
@property (nonatomic,retain) EKCalendarEventInvitationNotificationAttendee * expandedProposedTimeAttendee;              //@synthesize expandedProposedTimeAttendee=_expandedProposedTimeAttendee - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                                             //@synthesize expanded=_expanded - In the implementation block
-(NSArray *)attendees;
-(void)setExpanded:(BOOL)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)needsReply;
-(NSString *)invitedBy;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isAllDay;
-(void)setStartDate:(NSDate *)arg1 ;
-(EKCalendarEventInvitationNotificationAttendee *)owner;
-(NSDate *)startDate;
-(BOOL)expanded;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)location;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(BOOL)dateChanged;
-(void)setDateChanged:(BOOL)arg1 ;
-(BOOL)timeChanged;
-(void)setTimeChanged:(BOOL)arg1 ;
-(BOOL)locationChanged;
-(void)setLocationChanged:(BOOL)arg1 ;
-(void)setStartDateForNextOccurrence:(NSDate *)arg1 ;
-(EKRecurrenceRule *)recurrenceRule;
-(void)setOwner:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(BOOL)hasRecurrenceRules;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSDate *)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRecurrenceRule:(EKRecurrenceRule *)arg1 ;
-(BOOL)isInvitation;
-(BOOL)isProposedNewTime;
-(BOOL)proposedStartDateIsInFutureForAttendee:(id)arg1 ;
-(BOOL)attendeeReplyChanged;
-(long long)participationStatus;
-(void)setParticipationStatus:(long long)arg1 ;
-(void)setAttendeeReplyChanged:(BOOL)arg1 ;
-(EKCalendarEventInvitationNotificationAttendee *)expandedProposedTimeAttendee;
-(id)eventFromEventStore:(id)arg1 ;
-(NSDate *)startDateForNextOccurrence;
-(void)setExpandedProposedTimeAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
@end

