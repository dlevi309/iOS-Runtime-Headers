/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)contactForPhoneNumber:(id)arg1 email:(id)arg2 ;
+(id)placeholderContact;
+(id)resultTableContactDescriptorKeys;
+(id)viewControllerDescriptorKeys;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)init;
-(id)contactForIdentifier:(id)arg1 ;
-(id)cachedContactForIdentifier:(id)arg1 ;
-(NSCache *)contactCache;
-(void)setContactFetchingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)cachedContactsForIdentifiers:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContactCache:(NSCache *)arg1 ;
-(NSObject*<OS_dispatch_queue>)contactFetchingQueue;
-(id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2 ;
-(void)fetchContactForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

