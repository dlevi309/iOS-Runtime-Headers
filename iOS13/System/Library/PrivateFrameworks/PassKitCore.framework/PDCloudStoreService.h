/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDCloudStoreServiceExportedInterface.h>

@class PKEntitlementWhitelist, PDCloudStoreNotificationCoordinator, NSString;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDCloudStoreNotificationCoordinator* _cloudStoreNotificationCoordinator;

}

@property (nonatomic,retain) PDCloudStoreNotificationCoordinator * cloudStoreNotificationCoordinator;              //@synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)noteAccountDeletedWithHandler:(/*^block*/id)arg1 ;
-(void)uploadTransaction:(id)arg1 forPassWithUniqueIdentifier:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PDCloudStoreNotificationCoordinator *)cloudStoreNotificationCoordinator;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)recreateZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetContainerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)copyDataFromZoneName:(id)arg1 toZoneName:(id)arg2 inContainerName:(id)arg3 passUniqueID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteCloudSyncPassesSwitchChangedWithHandler:(/*^block*/id)arg1 ;
-(void)setCloudStoreNotificationCoordinator:(PDCloudStoreNotificationCoordinator *)arg1 ;
@end

