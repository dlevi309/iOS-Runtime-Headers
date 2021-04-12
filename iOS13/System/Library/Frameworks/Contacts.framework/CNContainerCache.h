/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol OS_dispatch_queue;
@class CNContainer, CNContactStore, ACAccountStore, CNCache, NSObject;

@interface CNContainerCache : NSObject {

	CNContainer* _primaryiCloudContainer;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	CNCache* _cachedAccounts;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) CNContainer * primaryiCloudContainer;                //@synthesize primaryiCloudContainer=_primaryiCloudContainer - In the implementation block
@property (assign,nonatomic,__weak) CNContactStore * contactStore;                //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) CNCache * cachedAccounts;                            //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)os_log;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)initWithContactStore:(id)arg1 ;
-(CNContainer *)primaryiCloudContainer;
-(void)accountStoreDidChange;
-(void)contactStoreDidChange;
-(void)resetAccountCache;
-(void)resetPrimaryiCloudContainer;
-(id)onWorkQueue_findPrimaryiCloudContainer;
-(id)accountForContainer:(id)arg1 ;
-(CNCache *)cachedAccounts;
-(id)cnAccountForContainer:(id)arg1 ;
-(void)setCachedAccounts:(CNCache *)arg1 ;
-(void)setPrimaryiCloudContainer:(CNContainer *)arg1 ;
@end

