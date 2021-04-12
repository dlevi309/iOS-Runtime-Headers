/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _filteredAndSortedSyncedCloudTabDevicesFromCloudKit;
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
@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
@property (nonatomic,copy,readonly) NSDate * dateOfLastCloudTabDevicesUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithCode:(long long)arg1 ;
+(id)_debugErrorMessageForCode:(long long)arg1 ;
-(void)setWbsDelegate:(id<WBSCloudTabStoreDelegate>)arg1 ;
-(id<WBSCloudTabStoreDelegate>)wbsDelegate;
-(BOOL)atLeastOneOtherActiveDeviceIsRegistered;
-(BOOL)closeAllTabsOnDevice:(id)arg1 ;
-(void)_syncAgentProxyConnectionWasInvalidated:(id)arg1 ;
-(void)resetSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
-(void)deleteAllDevicesFromCloudKit;
-(id)init;
-(BOOL)syncAgentIsAvailable;
-(void)pruneExpiredDevicesFromKVS;
-(void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 closeRequestsForDevice:(id)arg2 ;
-(void)handleCloseTabRequestsFromKVS;
-(BOOL)closeTab:(id)arg1 onDevice:(id)arg2 ;
-(void)_tabWasClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4 ;
-(void)pruneExpiredDevicesFromCloudKit;
-(void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(void)_addDeviceDictionaryFromKVS:(id)arg1 deviceUUID:(id)arg2 ;
-(void)handleCloseTabRequestsFromCloudKit;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)dateOfLastCloudTabDevicesUpdate;
-(id)_devicesByFilteringAndSortingDevices:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentationOfCurrentDeviceInCloudKit;
-(void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 error:(id)arg3 ;
-(void)_didFetchDeviceDictionariesFromCloudKit:(id)arg1 fetchedCloseRequests:(id)arg2 fetchedDevicesBySyncing:(BOOL)arg3 error:(id)arg4 ;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
-(NSArray *)syncedCloudTabDevices;
-(BOOL)closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(BOOL)_deviceIsStoredInCloudKit:(id)arg1 ;
-(BOOL)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 ;
-(void)_addCloseRequestDictionary:(id)arg1 toDeviceUUIDsToCloseRequestsDictionary:(id)arg2 requestUUID:(id)arg3 ;
-(void)resetSyncedCloudTabDevicesAndCloseRequestsFromKVS;
-(void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(void)_pruneOrphanedCloseRequestsFromKVS;
-(void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg1 ;
-(unsigned long long)_indexOfDevice:(id)arg1 inSyncedCloudTabDevices:(id)arg2 ;
-(id)_keyValueStoreDictionaryRepresentation:(long long)arg1 ;
-(BOOL)_closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg1 ;
-(void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
-(id)_currentDeviceUUID;
-(NSError *)lastFetchError;
-(void)synchronizeCloudTabDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)currentDeviceIsRegisteredInCloudKit;
-(void)_tabsWereClosed:(id)arg1 onDevice:(id)arg2 deviceIsStoredInCloudKit:(BOOL)arg3 syncedCloudTabDevices:(id)arg4 ;
-(long long)uniqueDeviceMultiplicity;
@end

