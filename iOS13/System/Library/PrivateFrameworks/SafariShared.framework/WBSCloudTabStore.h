/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCloudTabDeviceProvider.h>

@protocol OS_dispatch_queue, WBSCloudTabStoreDelegate;
@class NSArray, NSDate, NSObject, NSMutableArray, NSMutableDictionary, WBSCloudTabDevice, NSError, NSDictionary, NSString;

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _syncedCloudTabDevicesFromKVS;
	NSMutableDictionary* _deviceUUIDsToCloseRequestsFromKVS;
	BOOL _hasAttemptedToRemoveCurrentDeviceFromKVS;
	BOOL _isFetchingDataFromCloudKit;
	BOOL _hasAttemptedToFetchDevicesAtLeastOnce;
	NSMutableArray* _syncedCloudTabDevicesFromCloudKit;
	WBSCloudTabDevice* _currentDevice;
	NSMutableDictionary* _deviceUUIDsToCloseRequestsFromCloudKit;
	NSError* _lastFetchError;
	BOOL _syncAgentIsAvailable;
	id<WBSCloudTabStoreDelegate> _wbsDelegate;

}

@property (nonatomic,readonly) BOOL atLeastOneOtherActiveDeviceIsRegistered; 
@property (assign,nonatomic,__weak) id<WBSCloudTabStoreDelegate> wbsDelegate;                                      //@synthesize wbsDelegate=_wbsDelegate - In the implementation block
@property (nonatomic,readonly) BOOL syncAgentIsAvailable;                                                          //@synthesize syncAgentIsAvailable=_syncAgentIsAvailable - In the implementation block
@property (nonatomic,readonly) long long uniqueDeviceMultiplicity; 
@property (nonatomic,readonly) BOOL currentDeviceIsRegisteredInCloudKit; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentationOfCurrentDeviceInCloudKit; 
@property (nonatomic,readonly) NSError * lastFetchError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
@property (nonatomic,copy,readonly) NSDate * dateOfLastCloudTabDevicesUpdate; 
+(id)errorWithCode:(long long)arg1 ;
+(id)_debugErrorMessageForCode:(long long)arg1 ;
-(id)init;
-(NSDate *)dateOfLastCloudTabDevicesUpdate;
-(NSArray *)syncedCloudTabDevices;
-(void)synchronizeCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_syncAgentProxyConnectionWasInvalidated:(id)arg1 ;
-(void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
-(id)_devicesByRemovingThisDeviceAndDevicesWithNoTabs:(id)arg1 ;
-(id)_keyValueStoreDictionaryRepresentation:(long long)arg1 ;
-(void)_addDeviceDictionaryFromKVS:(id)arg1 deviceUUID:(id)arg2 ;
-(void)_addCloseRequestDictionary:(id)arg1 toDeviceUUIDsToCloseRequestsDictionary:(id)arg2 requestUUID:(id)arg3 ;
-(void)_pruneOrphanedCloseRequestsFromKVS;
-(id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg1 ;
-(void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(long long)uniqueDeviceMultiplicity;
-(id)_currentDeviceUUID;
-(BOOL)_deviceIsStoredInCloudKit:(id)arg1 ;
-(BOOL)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 ;
-(void)_tabWasClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4 ;
-(BOOL)_closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 error:(id)arg3 ;
-(void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 fetchedDevicesBySyncing:(BOOL)arg3 error:(id)arg4 ;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
-(void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(void)_tabsWereClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4 ;
-(unsigned long long)_indexOfDevice:(id)arg1 inSyncedCloudTabDevices:(id)arg2 ;
-(id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 closeRequestsForDevice:(id)arg2 ;
-(void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
-(void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
-(void)pruneExpiredDevicesFromKVS;
-(BOOL)atLeastOneOtherActiveDeviceIsRegistered;
-(BOOL)closeTab:(id)arg1 onDevice:(id)arg2 ;
-(BOOL)closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(BOOL)closeAllTabsOnDevice:(id)arg1 ;
-(void)handleCloseTabRequestsFromKVS;
-(void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSError *)lastFetchError;
-(BOOL)currentDeviceIsRegisteredInCloudKit;
-(NSDictionary *)dictionaryRepresentationOfCurrentDeviceInCloudKit;
-(void)pruneExpiredDevicesFromCloudKit;
-(void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1 ;
-(void)handleCloseTabRequestsFromCloudKit;
-(void)deleteAllDevicesFromCloudKit;
-(id<WBSCloudTabStoreDelegate>)wbsDelegate;
-(void)setWbsDelegate:(id<WBSCloudTabStoreDelegate>)arg1 ;
-(BOOL)syncAgentIsAvailable;
@end

