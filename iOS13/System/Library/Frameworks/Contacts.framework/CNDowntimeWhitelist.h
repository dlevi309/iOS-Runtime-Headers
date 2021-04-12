/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol NSObject;
@class NSString, CNContactStore, ACAccountStore;

@interface CNDowntimeWhitelist : NSObject {

	NSString* _primaryiCloudContainerIdentifier;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	id<NSObject> _contactStoreDidChangeNotificationToken;

}

@property (readonly) CNContactStore * contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) NSString * primaryiCloudContainerIdentifier;                      //@synthesize primaryiCloudContainerIdentifier=_primaryiCloudContainerIdentifier - In the implementation block
@property (readonly) id<NSObject> contactStoreDidChangeNotificationToken;              //@synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken - In the implementation block
+(id)os_log;
+(BOOL)isWhitelistedContact:(id)arg1 ;
+(BOOL)anyContactIsWhitelisted:(id)arg1 ;
+(id)keyDescriptor;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(ACAccountStore *)accountStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)requestForContactsInPermittedContainersWithHandles:(id)arg1 ;
-(id)allWhitelistedContacts;
-(id)requestForContactsInPermittedContainers;
-(id)requestForNonUnifiedContacts;
-(id)identifierOfContainerSupporingDowntimeContacts;
-(NSString *)primaryiCloudContainerIdentifier;
-(id)fetchPrimaryiCloudCardDAVContainerIdentifier;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 ;
-(BOOL)isHandleStringWhitelisted:(id)arg1 ;
-(id)allWhitelistedHandleStrings;
-(void)setTestPrimaryiCloudContainerIdentifier:(id)arg1 ;
-(void)setTestAcountStore:(id)arg1 ;
-(id<NSObject>)contactStoreDidChangeNotificationToken;
@end

