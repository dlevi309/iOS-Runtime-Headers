/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) int status; 
@property (assign,nonatomic) long long participantRole; 
@property (assign,nonatomic) long long participantType; 
@property (assign,nonatomic) int pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) BOOL commentChanged; 
@property (assign,nonatomic) BOOL statusChanged; 
@property (assign,nonatomic) BOOL proposedStartDateChanged; 
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(void)setOwner:(id)arg1 ;
-(int)status;
-(id)owner;
-(void)setStatus:(int)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(long long)participantRole;
-(void)setParticipantRole:(long long)arg1 ;
-(long long)participantType;
-(int)entityType;
-(NSDate *)lastModified;
-(void)setLastModified:(NSDate *)arg1 ;
-(void)setParticipantType:(long long)arg1 ;
-(int)pendingStatus;
-(void)setPendingStatus:(int)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
@end

