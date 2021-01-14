/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) int statusRaw; 
@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantType; 
@property (assign,nonatomic) int pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)relations;
+(id)defaultPropertiesToLoad;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
+(Class)meltedClass;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(int)entityType;
-(void)setLastModifiedParticipationStatus:(id)arg1 ;
-(unsigned)flags;
-(int)pendingStatusRaw;
-(long long)participantType;
-(id)description;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
-(int)statusRaw;
-(id)lastModifiedParticipationStatus;
-(long long)participantRole;
-(void)setFlags:(unsigned)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(void)setParticipantRole:(long long)arg1 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStatusRaw:(int)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setPendingStatusRaw:(int)arg1 ;
@end

