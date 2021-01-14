/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {

	NSLock* _stateLock;
	NSMutableDictionary* _storesKeyedByBundleIdentifier;

}
+(id)sharedManager;
-(void)invalidateCache;
-(void)saveSynchronously;
-(id)init;
-(id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2 ;
-(id)_stateLock_storeForBundleIdentifier:(id)arg1 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3 ;
-(void)dealloc;
@end

