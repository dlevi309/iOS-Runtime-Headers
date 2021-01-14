/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalContactsProviderProtocol.h>

@protocol OS_dispatch_queue;
@class CNContact, CNContactStore, CNReputationStore, NSObject, NSString, NSMutableSet, NSArray;

@interface CalContactsProvider : NSObject <CalContactsProviderProtocol> {

	CNContact* _meContact;
	CNContactStore* _store;
	CNReputationStore* _reputationStore;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSString* _testMeContactIdentifer;
	NSMutableSet* _delegates;
	NSArray* _unitTestEmails;

}

@property (retain) CNContactStore * store;                              //@synthesize store=_store - In the implementation block
@property (retain) CNReputationStore * reputationStore;                 //@synthesize reputationStore=_reputationStore - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (retain) CNContact * meContact; 
@property (retain) NSString * testMeContactIdentifer;                   //@synthesize testMeContactIdentifer=_testMeContactIdentifer - In the implementation block
@property (retain) NSMutableSet * delegates;                            //@synthesize delegates=_delegates - In the implementation block
@property (retain) NSArray * unitTestEmails;                            //@synthesize unitTestEmails=_unitTestEmails - In the implementation block
+(id)defaultProvider;
+(BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1 inReputationStore:(id)arg2 ;
+(BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 inReputationStore:(id)arg2 ;
+(BOOL)birthdayIsYearless:(id)arg1 ;
+(id)reputationForHandle:(id)arg1 inStore:(id)arg2 ;
+(id)birthdayStringForContactName:(id)arg1 eventDate:(id)arg2 birthDate:(id)arg3 lunarCalendar:(id)arg4 ;
+(BOOL)isCalendarIslamic:(id)arg1 ;
-(NSMutableSet *)delegates;
-(void)setMeContact:(CNContact *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(id)contactStore;
-(CNContact *)meContact;
-(id)unifiedMeContact;
-(id)myFullName;
-(CNReputationStore *)reputationStore;
-(BOOL)shouldWhiteListOrganizerEmailFromJunkChecks:(id)arg1 ;
-(void)setStore:(CNContactStore *)arg1 ;
-(id)myHomeAddress;
-(id)init;
-(CNContactStore *)store;
-(id)myWorkAddress;
-(id)myEmailAddress;
-(void)setTestMeContactIdentifier:(id)arg1 ;
-(BOOL)urlMatchesOneOfMyEmails:(id)arg1 ;
-(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(void)setMeCardEmailsForUnitTesting:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(id)contactsFromContactIdentifiers:(id)arg1 withKeys:(id)arg2 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldWhiteListOrganizerPhoneNumberFromJunkChecks:(id)arg1 ;
-(void)_setLastHistoryToken:(id)arg1 ;
-(void)contactsChanged:(id)arg1 ;
-(id)myAddressForLabel:(id)arg1 ;
-(id)_lastHistoryToken;
-(BOOL)contactIdentifierIsMe:(id)arg1 ;
-(id)myPhoneNumbers;
-(BOOL)matchesOneOfMyPhoneNumbers:(id)arg1 ;
-(void)donateEncodedLikenessString:(id)arg1 forEmailAddress:(id)arg2 ;
-(NSArray *)unitTestEmails;
-(void)setReputationStore:(CNReputationStore *)arg1 ;
-(id)myNameWithStyle:(long long)arg1 ;
-(id)myShortDisplayName;
-(BOOL)matchesOneOfMyEmails:(id)arg1 ;
-(void)meCardChanged:(id)arg1 ;
-(id)_fetchedUnifiedMeContact;
-(id)unifiedContactWithPhoneNumber:(id)arg1 ;
-(id)unifiedContactWithIdentifier:(id)arg1 ;
-(id)myAvatarEncodedString;
-(void)registerForContactChangeNotifications:(id)arg1 ;
-(id)unifiedContactWithEmailAddress:(id)arg1 ;
-(void)setTestMeContactIdentifer:(NSString *)arg1 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 ;
-(void)setUnitTestEmails:(NSArray *)arg1 ;
-(id)myEmailAddresses;
-(id)unifiedContactMatchingName:(id)arg1 email:(id)arg2 url:(id)arg3 keysToFetch:(id)arg4 ;
-(void)deregisterForContactChangeNotifications:(id)arg1 ;
-(void)_syncContacts;
-(NSString *)testMeContactIdentifer;
-(id)_meWithKeys:(id)arg1 ;
@end

