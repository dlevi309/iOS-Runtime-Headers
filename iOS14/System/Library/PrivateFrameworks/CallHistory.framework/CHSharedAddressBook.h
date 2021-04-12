/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable {

	NSMutableDictionary* _addressBookCache;

}

@property (retain) NSMutableDictionary * addressBookCache;              //@synthesize addressBookCache=_addressBookCache - In the implementation block
+(id)get;
-(id)init;
-(id)description;
-(void)insertAddressBookInfoDictionaryIntoCache:(id)arg1 ;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)registerForContactsNotifications;
-(void)revertAddressBook:(id)arg1 ;
-(NSMutableDictionary *)addressBookCache;
-(void)cleanUpAddressBookCache_sync;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(unsigned long long)cachedCount;
@end

