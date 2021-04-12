/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNDowntimeWhitelistContainerFetching.h>

@protocol NSObject;
@class CNContainer, CNContactStore, ACAccountStore, NSNotificationCenter, NSString;

@interface CNDowntimeWhitelistContainerFetcher : NSObject <CNDowntimeWhitelistContainerFetching> {

	CNContainer* _primaryiCloudContainer;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	NSNotificationCenter* _notificationCenter;
	id<NSObject> _accountStoreDidChangeNotificationToken;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                        //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<NSObject> accountStoreDidChangeNotificationToken;              //@synthesize accountStoreDidChangeNotificationToken=_accountStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) CNContainer * primaryiCloudContainer;                             //@synthesize primaryiCloudContainer=_primaryiCloudContainer - In the implementation block
@property (nonatomic,readonly) CNContainer * downtimeWhitelistContainer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
-(CNContactStore *)contactStore;
-(id)init;
-(NSNotificationCenter *)notificationCenter;
-(ACAccountStore *)accountStore;
-(void)beginObservingChangeNotifications;
-(CNContainer *)downtimeWhitelistContainer;
-(CNContainer *)primaryiCloudContainer;
-(id)fetchPrimaryiCloudCardDAVContainer;
-(id)fetchPrimaryiCloudCardDAVAccountIdentifier;
-(id<NSObject>)accountStoreDidChangeNotificationToken;
-(id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3 ;
-(void)dealloc;
@end

