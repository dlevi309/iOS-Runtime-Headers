/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PDPushNotificationConsumer.h>
#import <libobjc.A.dylib/PDCloudStoreContainerDelegate.h>
#import <libobjc.A.dylib/PDScheduledActivityClient.h>
#import <libobjc.A.dylib/PKCloudStoreCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, PDPushNotificationManager, NSObject, NSSet, NSMutableArray, PDApplePayCloudStoreContainer, PDPassCloudStoreContainer, NSString;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreContainerDelegate, PDScheduledActivityClient, PKCloudStoreCoordinatorDelegate> {

	NSHashTable* _observers;
	PDPushNotificationManager* _pushNotificationManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _pushTopics;
	NSMutableArray* _containers;
	PDApplePayCloudStoreContainer* _applePayContainer;
	PDPassCloudStoreContainer* _passContainer;

}

@property (nonatomic,retain) PDApplePayCloudStoreContainer * applePayContainer;              //@synthesize applePayContainer=_applePayContainer - In the implementation block
@property (nonatomic,retain) PDPassCloudStoreContainer * passContainer;                      //@synthesize passContainer=_passContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)noteAccountDeleted;
-(void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2 ;
-(void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(id)arg1 ;
-(id)cloudStoreSpecificKeysForItem:(id)arg1 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recreateZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetContainerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PDApplePayCloudStoreContainer *)applePayContainer;
-(void)copyDataFromZoneName:(id)arg1 toZoneName:(id)arg2 inContainerName:(id)arg3 passUniqueID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)noteCloudSyncPassesSwitchChanged;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_containerWithIdentifier:(id)arg1 ;
-(void)_initialCloudDatabaseSetupForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 shouldScheduleBackgroundActivity:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_registerForPushNotifications;
-(void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
-(void)_unregisterForPushNotifications;
-(id)_errorWithCode:(long long)arg1 description:(id)arg2 ;
-(id)_containerForItemType:(unsigned long long)arg1 ;
-(id)_containerWithZoneName:(id)arg1 ;
-(void)_unscheduleBackgroundContainerSetupActivities;
-(void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2 ;
-(void)_syncOriginatingTransactionsToCloudStore;
-(void)_recordAggdCloudStoreBackgroundContainerSetupResult:(BOOL)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2 ;
-(void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1 ;
-(id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1 ;
-(double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1 ;
-(BOOL)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
-(void)_processCloudStorePushNotificationForContainer:(id)arg1 zoneName:(id)arg2 ;
-(id)pushNotificationTopics;
-(void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)applyPushNotificationToken:(id)arg1 ;
-(void)cloudStoreContainer:(id)arg1 createdZoneWithName:(id)arg2 forContainerName:(id)arg3 ;
-(void)cloudStoreContainer:(id)arg1 didChangeContainerState:(unsigned long long)arg2 ;
-(id)initWithPushNotificationManager:(id)arg1 ;
-(void)setPassContainer:(PDPassCloudStoreContainer *)arg1 ;
-(void)setApplePayContainer:(PDApplePayCloudStoreContainer *)arg1 ;
-(void)scheduleTransactionDeviceDataSyncBackgroundActivity;
-(PDPassCloudStoreContainer *)passContainer;
@end

