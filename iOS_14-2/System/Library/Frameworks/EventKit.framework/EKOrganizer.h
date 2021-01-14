/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5 ;
+(Class)frozenClass;
-(BOOL)isCurrentUser;
-(id)owner;
-(id)description;
-(void)setCurrentUser:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5 ;
-(long long)scheduleAgent;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

