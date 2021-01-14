/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <libobjc.A.dylib/TCSContactsObserver.h>

@protocol TCSContactsDataSourceDelegate;
@class TCSContacts, NSMutableSet, NSDictionary, CNContactStore, NSArray, NSString;

@interface TCSContactsDataSource : NSObject <TCSContactsObserver> {

	TCSContacts* _contacts;
	NSMutableSet* _whitelistedContactIdentifiers;
	NSMutableSet* _inviterContactIdentifiers;
	NSDictionary* _whitelistedContactMap;
	NSDictionary* _inviterContactMap;
	NSDictionary* _inviteeContactMap;
	int _namePrefChangeToken;
	id<TCSContactsDataSourceDelegate> _delegate;
	CNContactStore* _contactStore;
	NSArray* _sortedContacts;
	NSArray* _sortedInviters;
	NSArray* _sortedInvitees;

}

@property (nonatomic,retain) NSArray * sortedContacts;                                       //@synthesize sortedContacts=_sortedContacts - In the implementation block
@property (nonatomic,retain) NSArray * sortedInviters;                                       //@synthesize sortedInviters=_sortedInviters - In the implementation block
@property (nonatomic,retain) NSArray * sortedInvitees;                                       //@synthesize sortedInvitees=_sortedInvitees - In the implementation block
@property (assign,nonatomic,__weak) id<TCSContactsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) TCSContacts * contacts;                                       //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(CNContactStore *)contactStore;
-(TCSContacts *)contacts;
-(id<TCSContactsDataSourceDelegate>)delegate;
-(id)contactWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id<TCSContactsDataSourceDelegate>)arg1 ;
-(void)removeContact:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)sectionCount;
-(void)_notifyDelegateContactsChanged;
-(void)_handleDeviceFirstUnlock;
-(void)destinationsDidChange:(id)arg1 ;
-(void)recencyDidChange:(id)arg1 ;
-(void)contactBecameAccepted:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contacts:(id)arg2 ;
-(void)_handlePersonNamePreferencesChangeNotification;
-(void)_handleContactStoreDidChange:(id)arg1 ;
-(void)_updateSortedContactsAndNotifyIfChanged:(BOOL)arg1 ;
-(NSArray *)sortedInvitees;
-(NSArray *)sortedInviters;
-(NSArray *)sortedContacts;
-(id)_sortedContactsArrayFromArray:(id)arg1 ;
-(id)_contactMapFromArray:(id)arg1 ;
-(long long)_sectionForContact:(id)arg1 ;
-(void)removeContact:(id)arg1 inSection:(long long)arg2 ;
-(id)_contactsForSection:(long long)arg1 ;
-(void)_notifyDelegateRecencyChanged;
-(id)_unsortedContactsArray;
-(id)_sortedContactsArrayFromArray:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)_contactArray:(id)arg1 differsFromArray:(id)arg2 ;
-(void)_logSortedContacts;
-(long long)inviteContact:(id)arg1 ;
-(BOOL)isContactWhitelisted:(id)arg1 ;
-(BOOL)isContactAnInviter:(id)arg1 ;
-(void)setSortedContacts:(NSArray *)arg1 ;
-(void)setSortedInviters:(NSArray *)arg1 ;
-(void)setSortedInvitees:(NSArray *)arg1 ;
@end

