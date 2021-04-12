/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNDowntimeWhitelistContainerFetching, NSObject;
@class CNContactStore, NSNotificationCenter;

@interface CNDowntimeWhitelist : NSObject {

	id<CNDowntimeWhitelistContainerFetching> _containerFetcher;
	CNContactStore* _contactStore;
	NSNotificationCenter* _notificationCenter;
	id<NSObject> _contactStoreDidChangeNotificationToken;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<NSObject> contactStoreDidChangeNotificationToken;                    //@synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) id<CNDowntimeWhitelistContainerFetching> containerFetcher;              //@synthesize containerFetcher=_containerFetcher - In the implementation block
+(BOOL)isWhitelistedContact:(id)arg1 ;
+(BOOL)anyContactIsWhitelisted:(id)arg1 ;
+(id)keyDescriptor;
+(id)os_log;
-(CNContactStore *)contactStore;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 error:(id*)arg2 ;
-(id)allWhitelistedHandleStrings;
-(void)beginObservingChangeNotifications;
-(BOOL)isHandleStringWhitelisted:(id)arg1 error:(id*)arg2 ;
-(id)allWhitelistedHandleStrings:(id*)arg1 ;
-(id<CNDowntimeWhitelistContainerFetching>)containerFetcher;
-(id)initWithContactStore:(id)arg1 notificationCenter:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 ;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 ;
-(void)setTestContainerFetcher:(id)arg1 ;
-(id)allWhitelistedContacts:(id*)arg1 ;
-(BOOL)isHandleStringWhitelisted:(id)arg1 ;
-(id)requestForContactsInPermittedContainersWithHandles:(id)arg1 ;
-(id)requestForNonUnifiedContacts;
-(id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3 ;
-(id)requestForContactsInPermittedContainers;
-(void)dealloc;
-(id<NSObject>)contactStoreDidChangeNotificationToken;
@end

