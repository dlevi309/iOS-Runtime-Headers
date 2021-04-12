/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSArray, NSSet;

@interface EKParticipantToContactMatcher : NSObject {

	NSArray* _contacts;
	NSSet* _contactEmailAddresses;
	NSSet* _contactNameComponents;
	NSSet* _contactCompanyNames;

}

@property (nonatomic,retain) NSArray * contacts;                         //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSSet * contactEmailAddresses;              //@synthesize contactEmailAddresses=_contactEmailAddresses - In the implementation block
@property (nonatomic,retain) NSSet * contactNameComponents;              //@synthesize contactNameComponents=_contactNameComponents - In the implementation block
@property (nonatomic,retain) NSSet * contactCompanyNames;                //@synthesize contactCompanyNames=_contactCompanyNames - In the implementation block
+(id)_nameComponentsForContact:(id)arg1 reverse:(BOOL)arg2 ;
+(id)_nameComponentsWithGivenName:(id)arg1 familyName:(id)arg2 ;
+(id)_allParticipantsOnItem:(id)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(id)matchingParticipantsFromItem:(id)arg1 ;
-(void)_cacheContactData;
-(void)setContactEmailAddresses:(NSSet *)arg1 ;
-(void)setContactNameComponents:(NSSet *)arg1 ;
-(void)setContactCompanyNames:(NSSet *)arg1 ;
-(BOOL)anyContactMatchesAnyParticipant:(id)arg1 ;
-(BOOL)anyContactMatchesParticipant:(id)arg1 ;
-(id)matchingParticipantsFromParticipants:(id)arg1 ;
-(NSSet *)contactEmailAddresses;
-(NSSet *)contactNameComponents;
-(NSSet *)contactCompanyNames;
-(BOOL)anyContactMatchesAnyParticipantFromItem:(id)arg1 ;
@end

