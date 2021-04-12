/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMMutableDictionaryProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSUbiquitousKeyValueStore, NSObject;

@interface EMUbiquitouslyPersistedDictionary : NSObject <EFLoggable, EMMutableDictionaryProtocol> {

	NSString* _plistPath;
	NSMutableDictionary* _storedObjects;
	NSString* _identifier;
	NSUbiquitousKeyValueStore* _kvStore;
	NSObject*<OS_dispatch_queue> _mutationQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * storedObjects;                              //@synthesize storedObjects=_storedObjects - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * kvStore;                              //@synthesize kvStore=_kvStore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> mutationQueue;                       //@synthesize mutationQueue=_mutationQueue - In the implementation block
@property (nonatomic,readonly) NSString * plistPath;                                             //@synthesize plistPath=_plistPath - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * ubiquitousKeyValueStore; 
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)sharedDictionaryWithIdentifier:(id)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)plistPath;
-(void)_synchronize;
-(id)initWithPlistPath:(id)arg1 identifier:(id)arg2 ;
-(void)_mergeKVStoreChangedKeys:(id)arg1 ;
-(void)_storeChangedExternally:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)mutationQueue;
-(NSMutableDictionary *)storedObjects;
-(NSUbiquitousKeyValueStore *)kvStore;
-(void)_resetKVStore;
-(void)_writeToPlist;
-(void)_ensureStoredObjectsAreInKVStore;
-(void)_purgeOldestEntries;
-(NSUbiquitousKeyValueStore *)ubiquitousKeyValueStore;
@end

