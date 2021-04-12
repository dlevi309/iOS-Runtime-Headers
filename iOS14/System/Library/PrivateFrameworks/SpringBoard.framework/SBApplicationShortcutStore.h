/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class NSLock, NSObject, NSArray, FBSApplicationDataStore, NSString;

@interface SBApplicationShortcutStore : NSObject {

	NSLock* _stateLock;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSArray* _cachedApplicationShortcutItems;
	NSArray* _cachedLanguages;
	unsigned long long _cachedVersion;
	BOOL _isLoaded;
	BOOL _isDirty;
	FBSApplicationDataStore* _dataStore;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,copy,readonly) NSArray * languages; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)clearStore;
-(void)invalidateCache;
-(void)saveSynchronously;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)_stateLock_truncateIfNeeded:(id)arg1 ;
-(NSArray *)languages;
-(void)_stateLock_loadFromStoreIfNeeded;
-(NSString *)bundleIdentifier;
-(void)_saveQueue_save;
-(NSArray *)applicationShortcutItems;
-(void)truncateIfNecessary;
-(id)description;
-(id)_applicationShortcutItemsFromPlistArray:(id)arg1 ;
-(void)_stateLock_markDirty;
-(void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3 ;
-(id)_plistArrayFromApplicationShortcutItems:(id)arg1 ;
-(unsigned long long)version;
@end

