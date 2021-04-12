/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)contactWithKeysToFetch:(id)arg1;
-(NSSet *)contactEmailAddresses;
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
@property (copy,readonly) NSSet * allEmailAddresses; 
@property (copy,readonly) NSSet * accountsEmailAddresses; 
@property (copy,readonly) NSSet * contactEmailAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)doesAddressList:(id)arg1 containAddressInSet:(id)arg2 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)contact;
-(NSDictionary *)cache;
-(id)init;
-(BOOL)isMyEmailAddressContainedInAddressList:(id)arg1 ;
-(void)setCache:(NSDictionary *)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(void)_contactsChanged:(id)arg1 ;
-(id)contactWithKeysToFetch:(id)arg1 ;
-(NSSet *)contactEmailAddresses;
-(id)_contactEmailAddresses;
-(void)refreshCachedValues;
-(BOOL)_isMyEmailAddressContainedInAddressStrings:(id)arg1 ;
-(NSSet *)allEmailAddresses;
-(NSMutableArray *)knownToBeMyEmail;
-(NSMutableArray *)knownToNotBeMyEmail;
-(id)_accountsEmailAddresses;
-(NSSet *)accountsEmailAddresses;
-(void)waitForOutstandingCacheRefreshes;
@end

