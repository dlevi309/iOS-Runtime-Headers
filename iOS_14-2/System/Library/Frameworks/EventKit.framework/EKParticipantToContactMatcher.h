/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id)initWithContacts:(id)arg1 ;
-(id)matchingParticipantsFromItem:(id)arg1 ;
-(void)_cacheContactData;
-(void)setContactEmailAddresses:(NSSet *)arg1 ;
-(void)setContactNameComponents:(NSSet *)arg1 ;
-(void)setContactCompanyNames:(NSSet *)arg1 ;
-(NSSet *)contactEmailAddresses;
-(BOOL)anyContactMatchesAnyParticipant:(id)arg1 ;
-(BOOL)anyContactMatchesParticipant:(id)arg1 ;
-(id)matchingParticipantsFromParticipants:(id)arg1 ;
-(NSSet *)contactNameComponents;
-(NSSet *)contactCompanyNames;
-(BOOL)anyContactMatchesAnyParticipantFromItem:(id)arg1 ;
@end

