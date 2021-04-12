/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CNContactStore *)contactStore;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)accountStoreDidChange;
-(void)contactStoreDidChange;
-(void)resetPrimaryiCloudContainer;
-(void)resetAccountCache;
-(id)onWorkQueue_findPrimaryiCloudContainer;
-(id)accountForContainer:(id)arg1 ;
-(id)cnAccountForContainer:(id)arg1 ;
-(void)setPrimaryiCloudContainer:(CNContainer *)arg1 ;
-(ACAccountStore *)accountStore;
-(CNCache *)cachedAccounts;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)setCachedAccounts:(CNCache *)arg1 ;
-(id)initWithContactStore:(id)arg1 ;
-(CNContainer *)primaryiCloudContainer;
-(void)dealloc;
@end

