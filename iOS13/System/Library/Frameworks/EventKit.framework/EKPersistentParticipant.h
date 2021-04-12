/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>

@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>
+(id)defaultPropertiesToLoad;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)url;
-(id)UUID;
-(id)address;
-(void)setUUID:(id)arg1 ;
-(id)phoneNumber;
-(id)displayName;
-(id)owner;
-(void)setDisplayName:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 ;
-(id)emailAddress;
-(void)setEmailAddress:(id)arg1 ;
-(id)comment;
-(void)setAddress:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(int)proposedStartDateStatus;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)semanticIdentifier;
-(id)invitedBy;
@end

