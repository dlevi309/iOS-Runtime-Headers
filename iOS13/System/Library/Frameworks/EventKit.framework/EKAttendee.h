/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) long long pendingStatus; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)attendeeWithName:(id)arg1 url:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(Class)frozenClass;
+(long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1 ;
+(int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1 ;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(id)owner;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)isCurrentUser;
-(long long)participantRole;
-(long long)participantStatus;
-(void)setParticipantRole:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(long long)participantType;
-(void)markAsForward;
-(BOOL)statusChanged;
-(BOOL)commentChanged;
-(BOOL)proposedStartDateChanged;
-(void)setCommentChanged:(BOOL)arg1 ;
-(void)setStatusChanged:(BOOL)arg1 ;
-(void)setProposedStartDateChanged:(BOOL)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(long long)pendingStatus;
-(void)setPendingStatus:(long long)arg1 ;
-(BOOL)_isParticipantStatusDirty;
-(int)statusRaw;
-(void)setStatusRaw:(int)arg1 ;
-(void)setPendingStatusRaw:(int)arg1 ;
-(int)pendingStatusRaw;
-(BOOL)_valueForFlag:(unsigned)arg1 ;
-(void)_setFlag:(unsigned)arg1 value:(BOOL)arg2 ;
-(NSDate *)lastModifiedParticipationStatus;
@end

