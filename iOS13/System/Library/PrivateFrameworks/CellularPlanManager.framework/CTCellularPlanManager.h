/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/


#import <CellularPlanManager/CellularPlanManager-Structs.h>
@class NSMutableArray, NSString, NSData, NSXPCConnection, CTCellularPlanManagerDelegate;

@interface CTCellularPlanManager : NSObject {

	NSMutableArray* _subscriptionCompletions;
	dispatch_queue_sRef _queue;
	NSString* _lastSessionId;
	NSData* _cookieData;
	NSXPCConnection* _connection;
	CTCellularPlanManagerDelegate* _delegate;

}
+(id)sharedManager;
+(long long)calculateInstallConsentTextTypeFor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)ping;
-(void)_connect_sync;
-(void)shouldShowPlanSetup:(/*^block*/id)arg1 ;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)getSupportedFlowTypes:(/*^block*/id)arg1 ;
-(void)startProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)finishProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)addNewPlanWithCarrierItem:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)addNewAddonPlanDuringBuddy:(BOOL)arg1 userConsent:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)manageAccountForPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planItemsShouldUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)danglingPlanItemsShouldUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)activatePlanPendingTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deletePlanPendingTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)carrierItemsShouldUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveSimLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remapSimLabel:(id)arg1 to:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didSelectPlanForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSelectPlanForDefaultVoice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSelectPlansForIMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didDeletePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planLaunchInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)didPurchasePlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3 ;
-(void)didTransferPlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3 state:(id)arg4 ;
-(void)carrierHandoffToken:(/*^block*/id)arg1 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)willDisplayPlanItems;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2 ;
-(void)setUserInPurchaseFlow:(BOOL)arg1 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)openInternalUrlId:(long long)arg1 ;
-(void)isRemotePlanCapableWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldShowAddNewRemotePlanWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewRemotePlan:(BOOL)arg1 withCSN:(id)arg2 withContext:(id)arg3 userConsent:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(BOOL)arg3 withCSN:(id)arg4 withContext:(id)arg5 userConsent:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(BOOL)arg5 withCSN:(id)arg6 withContext:(id)arg7 userConsent:(long long)arg8 completion:(/*^block*/id)arg9 ;
-(void)manageAccountForRemotePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSelectRemotePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didDeleteRemotePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAllRemotePlansWithCompletion:(/*^block*/id)arg1 ;
-(void)remotePlanLaunchInfoForEid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)pendingReleaseRemotePlan;
-(void)didCancelRemotePlan;
-(void)launchSequoia;
-(void)expirePlan;
-(void)launchDataActivationNextWithUrl:(id)arg1 ;
-(void)getIMEIPrefix:(/*^block*/id)arg1 ;
-(void)setIMEIPrefix:(id)arg1 ;
-(void)getESimServerURL:(/*^block*/id)arg1 ;
-(void)setESimServerURL:(id)arg1 ;
-(void)getSelectedEnv:(/*^block*/id)arg1 ;
-(void)setSelectedEnv:(long long)arg1 ;
-(void)getSelectedProxy:(/*^block*/id)arg1 ;
-(void)setSelectedProxy:(long long)arg1 ;
-(void)setUseNewCellularPlanUI:(BOOL)arg1 ;
-(void)showUiIgnoringActivationFlags:(BOOL)arg1 ;
-(void)enableVinylFlowTypeOverride:(BOOL)arg1 ;
-(void)mccMncOverride:(/*^block*/id)arg1 ;
-(void)setMcc:(long long)arg1 andMnc:(long long)arg2 ;
-(void)latitudeLongitudeOverride:(/*^block*/id)arg1 ;
-(void)setLatitude:(id)arg1 andLongitude:(id)arg2 ;
-(void)fetchRemoteProfiles:(id)arg1 ;
-(void)selectRemoteProfile:(id)arg1 ;
-(void)deleteRemoteProfile:(id)arg1 ;
-(void)deleteAllRemoteProfiles;
-(void)getAutoPlanSelectionWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutoPlanSelection:(BOOL)arg1 ;
-(void)getRoamingSignupOverrideWithCompletion:(/*^block*/id)arg1 ;
-(void)setRoamingSignupOverride:(BOOL)arg1 ;
-(void)getSkipEligibilityCheck:(/*^block*/id)arg1 ;
-(void)setSkipEligibilityCheck:(BOOL)arg1 ;
-(void)getRemoteInfo:(/*^block*/id)arg1 ;
-(void)getPhoneAuthTokenWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureConnected_sync;
-(id)synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 additionalParameters:(id)arg3 ;
-(void)_plansForRenewal:(BOOL)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 additionalParameters:(id)arg4 ;
-(void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 withCSN:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)userDidProvideResponse:(long long)arg1 confirmationCode:(id)arg2 forPlan:(id)arg3 isRemote:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_reconnect;
-(unsigned long long)getSupportedFlowTypes;
-(void)enterSimSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)exitSimSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)addNewPlanWithUserInWebsheetWithCompletion:(/*^block*/id)arg1 ;
-(void)connectionSettings:(/*^block*/id)arg1 ;
-(BOOL)getEnableVinylFlowTypeOverride;
-(void)loadPlansWithUrl:(id)arg1 postData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)plansForRenewalWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(BOOL)shouldShowPlanList;
-(BOOL)isAddButtonEnabled;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(id)planItemsShouldUpdate:(BOOL)arg1 ;
-(id)danglingPlanItemsShouldUpdate:(BOOL)arg1 ;
-(id)getPlansPendingTransfer:(id*)arg1 ;
-(id)cancelPlanActivation:(id)arg1 ;
-(id)resolveSimLabel:(id)arg1 ;
-(id)remapSimLabel:(id)arg1 to:(id)arg2 ;
-(void)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2 ;
-(id)didSelectPlanForData:(id)arg1 ;
-(id)setLabelForPlan:(id)arg1 label:(id)arg2 ;
-(id)didSelectPlanForDefaultVoice:(id)arg1 ;
-(void)eraseAllPlans:(/*^block*/id)arg1 ;
-(void)eraseAllRemotePlansWithCSN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startRemoteProvisioningForCSN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishRemoteProvisioningForCSN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remotePlanItemsWithCompletion:(/*^block*/id)arg1 ;
-(id)getPredefinedLabels;
-(void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 isRemote:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)getSubscriptionContextUUIDforPlan:(id)arg1 ;
-(id)getShortLabelsForLabels:(id)arg1 ;
-(void)subscriptionDetailsForCompletion:(id)arg1 ;
@end

