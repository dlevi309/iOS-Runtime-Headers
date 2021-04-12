/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@class NSDate;

@interface EKAttendee : EKParticipant

@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantStatus; 
@property (assign,nonatomic) long long participantType; 
@property (nonatomic,readonly) NSDate * lastModifiedParticipationStatus; 
@property (nonatomic,readonly) BOOL rsvpRequested; 
@property (assign,nonatomic) long long pendingStatus; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 ;
+(long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1 ;
+(id)attendeeWithName:(id)arg1 url:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)knownSingleValueKeysForComparison;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(Class)frozenClass;
-(BOOL)proposedStartDateChanged;
-(id)displayString;
-(BOOL)commentChanged;
-(BOOL)isCurrentUser;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(BOOL)statusChanged;
-(id)owner;
-(void)setPendingStatus:(long long)arg1 ;
-(unsigned)flags;
-(int)pendingStatusRaw;
-(long long)participantType;
-(void)setCommentChanged:(BOOL)arg1 ;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(id)description;
-(void)markAsForward;
-(long long)participantStatus;
-(void)setParticipantStatus:(long long)arg1 ;
-(BOOL)rsvpRequested;
-(int)statusRaw;
-(NSDate *)lastModifiedParticipationStatus;
-(long long)participantRole;
-(void)setFlags:(unsigned)arg1 ;
-(void)setStatusChanged:(BOOL)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(BOOL)_isParticipantStatusDirty;
-(long long)pendingStatus;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(void)setParticipantRole:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusRaw:(int)arg1 ;
-(void)setPendingStatusRaw:(int)arg1 ;
@end

