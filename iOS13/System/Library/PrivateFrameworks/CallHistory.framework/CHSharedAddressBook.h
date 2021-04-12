/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)cachedCount;
-(void)insertAddressBookInfoDictionaryIntoCache:(id)arg1 ;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)registerForContactsNotifications;
-(void)revertAddressBook:(id)arg1 ;
-(NSMutableDictionary *)addressBookCache;
-(void)cleanUpAddressBookCache_sync;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
@end

