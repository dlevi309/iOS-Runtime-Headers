/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKCloudStoreCoordinatorDelegate.h>

@class PKXPCService, NSString;

@interface PKCloudStoreService : NSObject <PKCloudStoreCoordinatorDelegate> {

	PKXPCService* _remoteService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setupCloudDatabaseForContainerName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)sendShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)noteAccountDeleted;
-(void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)noteCloudSyncPassesSwitchChanged;
-(void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxy;
-(void)cloudStoreStatusForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptShareInvitation:(id)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)recreateZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

