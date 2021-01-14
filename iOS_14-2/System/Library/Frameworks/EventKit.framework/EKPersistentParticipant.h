/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>

@interface EKPersistentParticipant : EKPersistentObject <EKParticipantSemanticIdentifierGeneratorDelegate>
+(id)defaultPropertiesToLoad;
-(void)setProposedStartDate:(id)arg1 ;
-(id)comment;
-(id)firstName;
-(id)lastName;
-(int)proposedStartDateStatus;
-(void)setComment:(id)arg1 ;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)invitedBy;
-(id)UUID;
-(id)semanticIdentifier;
-(id)displayNameRaw;
-(void)setLastName:(id)arg1 ;
-(void)setEmailAddress:(id)arg1 ;
-(id)proposedStartDate;
-(void)setFirstName:(id)arg1 ;
-(id)owner;
-(id)emailAddress;
-(void)setDisplayNameRaw:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)phoneNumber;
-(id)url;
-(void)setPhoneNumber:(id)arg1 ;
-(id)URL;
-(void)setUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
@end

