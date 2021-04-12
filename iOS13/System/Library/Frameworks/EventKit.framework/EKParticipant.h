/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKParticipantSemanticIdentifierGeneratorDelegate.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKCalendarItem, NSString, NSURL, NSPredicate;

@interface EKParticipant : EKObject <EKParticipantSemanticIdentifierGeneratorDelegate, EKIdentityProtocol, NSCopying> {

	EKCalendarItem* _owner;

}

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * inviterNameString; 
@property (assign,nonatomic) int proposedStartDateStatus; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,readonly) EKCalendarItem * owner;                             //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long participantStatus; 
@property (nonatomic,readonly) long long participantRole; 
@property (nonatomic,readonly) long long participantType; 
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
+(id)participantWithName:(id)arg1 url:(id)arg2 ;
-(id)displayName;
-(id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3 ;
-(id)commentLabelString;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)url;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(NSURL *)URL;
-(NSString *)phoneNumber;
-(id)displayName;
-(EKCalendarItem *)owner;
-(void)setDisplayName:(id)arg1 ;
-(NSPredicate *)contactPredicate;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(id)nameComponents;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isCurrentUser;
-(long long)participantRole;
-(long long)participantStatus;
-(long long)participantType;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(id)proposedStartDate;
-(void)setProposedStartDate:(id)arg1 ;
-(id)proposedStartDateForEvent:(id)arg1 ;
-(NSString *)inviterNameString;
-(int)proposedStartDateStatus;
-(BOOL)isLocationRoom;
-(void)setProposedStartDateStatus:(int)arg1 ;
-(id)semanticIdentifier;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4 ;
-(id)displayNameRaw;
-(id)invitedBy;
-(const void*)ABRecordWithAddressBook:(void*)arg1 ;
-(void)setProposedStartDate:(id)arg1 forEvent:(id)arg2 ;
-(id)setInviterNameString;
@end

