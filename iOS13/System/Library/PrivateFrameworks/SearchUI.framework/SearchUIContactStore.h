/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol OS_dispatch_queue;
@class CNContactStore, NSCache, NSObject;

@interface SearchUIContactStore : NSObject {

	CNContactStore* _contactStore;
	NSCache* _contactCache;
	NSObject*<OS_dispatch_queue> _contactFetchingQueue;

}

@property (nonatomic,retain) NSCache * contactCache;                                         //@synthesize contactCache=_contactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> contactFetchingQueue;              //@synthesize contactFetchingQueue=_contactFetchingQueue - In the implementation block
+(id)sharedStore;
+(id)placeholderContact;
+(id)contactForPhoneNumber:(id)arg1 email:(id)arg2 ;
+(id)resultTableContactDescriptorKeys;
+(id)viewControllerDescriptorKeys;
-(id)init;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)contactForIdentifier:(id)arg1 ;
-(NSCache *)contactCache;
-(id)cachedContactForIdentifier:(id)arg1 ;
-(void)setContactCache:(NSCache *)arg1 ;
-(void)setContactFetchingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)cachedContactsForIdentifiers:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)contactFetchingQueue;
-(id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2 ;
-(void)fetchContactForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

