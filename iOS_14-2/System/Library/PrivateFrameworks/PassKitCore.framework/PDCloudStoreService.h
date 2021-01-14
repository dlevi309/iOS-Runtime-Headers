/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)serviceResumed;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)noteCloudSyncPassesSwitchChangedWithHandler:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)serviceSuspended;
-(void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptShareInvitation:(id)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)setCloudStoreNotificationCoordinator:(PDCloudStoreNotificationCoordinator *)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)recreateZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)noteAccountDeletedWithHandler:(/*^block*/id)arg1 ;
-(void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PDCloudStoreNotificationCoordinator *)cloudStoreNotificationCoordinator;
@end

