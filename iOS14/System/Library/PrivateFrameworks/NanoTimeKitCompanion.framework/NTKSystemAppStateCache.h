/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/NTKSystemAppStateCache.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface NTKSystemAppStateCache : NSObject <LSApplicationWorkspaceObserverProtocol, NTKSystemAppStateCache> {

	NSMutableSet* _restrictedSystemApps;
	NSMutableSet* _removedSystemApps;
	NSMutableSet* _cachedAppStateBundleId;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _tinCanBundleID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(BOOL)isRestrictedSystemApp:(id)arg1 ;
-(BOOL)isRemovedSystemApp:(id)arg1 ;
-(void)_tinCanSettingsChanged;
-(void)_deviceDidPair;
-(id)_queue_removedSystemApps;
-(id)_queue_restrictedSystemApps;
-(id)_queue_cachedAppStateBundleId;
-(void)_queue_verifyStateForAppBundleId:(id)arg1 ;
-(void)_queue_applicationsDidChange:(id)arg1 state:(unsigned long long)arg2 ;
-(void)_queue_tinCanSettingsChanged;
-(void)_queue_deviceDidPair;
-(void)_queue_initializeRemovedSystemApps;
-(void)_queue_initializeRestrictedSystemApps;
-(void)prewarmGizmoDaemon;
-(id)restrictedSystemApps;
-(id)removedSystemApps;
@end

