/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EMUserProfileProvider.h>
@class NSSet;


@protocol EMUserProfileProvider <NSObject>
@property (copy,readonly) NSSet * allEmailAddresses; 
@property (copy,readonly) NSSet * accountsEmailAddresses; 
@property (copy,readonly) NSSet * contactEmailAddresses; 
@required
-(id)contact;
-(BOOL)isMyEmailAddressContainedInAddressList:(id)arg1;
-(NSSet *)contactEmailAddresses;
-(id)contactWithKeysToFetch:(id)arg1;
-(NSSet *)allEmailAddresses;
-(NSSet *)accountsEmailAddresses;

@end


@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSDictionary, NSMutableArray, CNContactStore, NSString;

@interface EMUserProfileProvider : NSObject <EMUserProfileProvider> {

	os_unfair_lock_s _cacheLock;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	int _outstandingCacheRefreshes;
	NSDictionary* _cache;
	NSMutableArray* _knownToBeMyEmail;
	NSMutableArray* _knownToNotBeMyEmail;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) NSDictionary * cache;                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSMutableArray * knownToBeMyEmail;                 //@synthesize knownToBeMyEmail=_knownToBeMyEmail - In the implementation block
@property (nonatomic,readonly) NSMutableArray * knownToNotBeMyEmail;              //@synthesize knownToNotBeMyEmail=_knownToNotBeMyEmail - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * allEmailAddresses; 
@property (copy,readonly) NSSet * accountsEmailAddresses; 
@property (copy,readonly) NSSet * contactEmailAddresses; 
+(BOOL)doesAddressList:(id)arg1 containAddressInSet:(id)arg2 ;
-(id)init;
-(id)contact;
-(void)setCache:(NSDictionary *)arg1 ;
-(NSDictionary *)cache;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(BOOL)isMyEmailAddressContainedInAddressList:(id)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(NSSet *)contactEmailAddresses;
-(id)_contactEmailAddresses;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(void)refreshCachedValues;
-(void)_contactsChanged:(id)arg1 ;
-(BOOL)_isMyEmailAddressContainedInAddressStrings:(id)arg1 ;
-(NSSet *)allEmailAddresses;
-(NSMutableArray *)knownToBeMyEmail;
-(NSMutableArray *)knownToNotBeMyEmail;
-(id)_accountsEmailAddresses;
-(NSSet *)accountsEmailAddresses;
-(void)waitForOutstandingCacheRefreshes;
@end

