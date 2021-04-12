/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {

	NSLock* _stateLock;
	NSMutableDictionary* _storesKeyedByBundleIdentifier;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)invalidateCache;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)saveSynchronously;
-(id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2 ;
-(void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3 ;
-(id)_stateLock_storeForBundleIdentifier:(id)arg1 ;
@end

