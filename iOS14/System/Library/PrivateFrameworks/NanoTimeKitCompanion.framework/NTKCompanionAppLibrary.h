/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKCompanionAppDelegate.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/ACXDeviceConnectionDelegate.h>
#import <libobjc.A.dylib/NTKSystemAppStateCache.h>

@protocol OS_dispatch_queue;
@class NSArray, NSSet, NSHashTable, NSObject, NSMutableArray, CLKDevice, NSString;

@interface NTKCompanionAppLibrary : NSObject <NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol, ACXDeviceConnectionDelegate, NTKSystemAppStateCache> {

	NSArray* _allApps;
	NSArray* _firstPartyApps;
	NSArray* _watchSystemApps;
	NSSet* _installedSystemApplicationIdentifiers;
	NSArray* _thirdPartyApps;
	NSHashTable* _changeObservers;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _updateProcessingQueue;
	NSObject*<OS_dispatch_queue> _observerCallbackQueue;
	NSObject*<OS_dispatch_queue> _appProcessingQueue;
	os_unfair_lock_s* _prewarmLock;
	NSMutableArray* _prewarmCallbacks;
	CLKDevice* _device;

}

@property (nonatomic,retain) NSArray * allApps;                                               //@synthesize allApps=_allApps - In the implementation block
@property (nonatomic,retain) NSArray * firstPartyApps;                                        //@synthesize firstPartyApps=_firstPartyApps - In the implementation block
@property (nonatomic,retain) NSArray * watchSystemApps;                                       //@synthesize watchSystemApps=_watchSystemApps - In the implementation block
@property (nonatomic,retain) NSSet * installedSystemApplicationIdentifiers;                   //@synthesize installedSystemApplicationIdentifiers=_installedSystemApplicationIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * thirdPartyApps;                                        //@synthesize thirdPartyApps=_thirdPartyApps - In the implementation block
@property (nonatomic,retain) NSHashTable * changeObservers;                                   //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                      //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> updateProcessingQueue;              //@synthesize updateProcessingQueue=_updateProcessingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerCallbackQueue;              //@synthesize observerCallbackQueue=_observerCallbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> appProcessingQueue;                 //@synthesize appProcessingQueue=_appProcessingQueue - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s* prewarmLock;                                 //@synthesize prewarmLock=_prewarmLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * prewarmCallbacks;                               //@synthesize prewarmCallbacks=_prewarmCallbacks - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                              //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAppLibrary;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSArray *)allApps;
-(void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(id)init;
-(void)applicationStateDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1 ;
-(void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2 ;
-(CLKDevice *)device;
-(void)removeObserver:(id)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
-(void)_load;
-(NSHashTable *)changeObservers;
-(void)dealloc;
-(void)_activeDeviceChanged;
-(void)prewarmCompanionDaemonWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)thirdPartyApps;
-(BOOL)isRestrictedSystemApp:(id)arg1 ;
-(BOOL)isRemovedSystemApp:(id)arg1 ;
-(void)companionAppUpdatedIcon:(id)arg1 ;
-(void)setUpdateProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObserverCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAppProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_loadApps;
-(void)_notifyAppUpdated:(id)arg1 ;
-(void)_notifyAppIconUpdated:(id)arg1 ;
-(void)_queue_loadApps;
-(void)_loadWatchApps;
-(void)_notifyAppRemoved:(id)arg1 ;
-(void)_notifyAppAdded:(id)arg1 ;
-(void)companionAppWasUpdated:(id)arg1 ;
-(void)setAllApps:(NSArray *)arg1 ;
-(NSArray *)firstPartyApps;
-(void)setFirstPartyApps:(NSArray *)arg1 ;
-(NSArray *)watchSystemApps;
-(void)setWatchSystemApps:(NSArray *)arg1 ;
-(NSSet *)installedSystemApplicationIdentifiers;
-(void)setInstalledSystemApplicationIdentifiers:(NSSet *)arg1 ;
-(void)setThirdPartyApps:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)updateProcessingQueue;
-(NSObject*<OS_dispatch_queue>)observerCallbackQueue;
-(NSObject*<OS_dispatch_queue>)appProcessingQueue;
-(os_unfair_lock_s*)prewarmLock;
-(NSMutableArray *)prewarmCallbacks;
-(void)setPrewarmCallbacks:(NSMutableArray *)arg1 ;
@end

