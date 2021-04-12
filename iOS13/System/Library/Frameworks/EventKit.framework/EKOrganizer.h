/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant
+(Class)frozenClass;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5 ;
@end

