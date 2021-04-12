/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)ping;
-(void)shouldShowAddNewRemotePlanWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewPlanWithFlowType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRemoteProfiles:(id)arg1 ;
-(void)shouldShowPlanSetup:(/*^block*/id)arg1 ;
-(void)planLaunchInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)finishRemoteProvisioningForCSN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(BOOL)arg5 withCSN:(id)arg6 withContext:(id)arg7 userConsent:(long long)arg8 completion:(/*^block*/id)arg9 ;
-(void)startProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)addNewRemotePlan:(BOOL)arg1 withCSN:(id)arg2 withContext:(id)arg3 userConsent:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)resumePlanProvisioning:(BOOL)arg1 userConsent:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)setUserInPurchaseFlow:(BOOL)arg1 ;
-(void)danglingPlanItemsShouldUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)getRoamingSignupOverrideWithCompletion:(/*^block*/id)arg1 ;
-(id)getPlansPendingTransfer:(id*)arg1 ;
-(void)userSignupInitiatedOrFailed;
-(void)carrierItemsShouldUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_connect_sync;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 additionalParameters:(id)arg3 ;
-(void)setSelectedEnv:(long long)arg1 ;
-(void)deleteRemoteProfile:(id)arg1 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)didSelectPlanForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMcc:(long long)arg1 andMnc:(long long)arg2 ;
-(void)expirePlan;
-(id)setLabelForPlan:(id)arg1 label:(id)arg2 ;
-(void)enableVinylFlowTypeOverride:(BOOL)arg1 ;
-(void)_plansForRenewal:(BOOL)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 additionalParameters:(id)arg4 ;
-(void)exitSimSetupWithCompletion:(/*^block*/id)arg1 ;
-(id)danglingPlanItemsShouldUpdate:(BOOL)arg1 ;
-(void)getSupportedFlowTypes:(/*^block*/id)arg1 ;
-(void)setRoamingSignupOverride:(BOOL)arg1 ;
-(void)addNewPlanWithUserInWebsheetWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)getEnableVinylFlowTypeOverride;
-(void)isRemotePlanCapableWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(BOOL)arg3 withCSN:(id)arg4 withContext:(id)arg5 userConsent:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(id)remapSimLabel:(id)arg1 to:(id)arg2 ;
-(void)connectionSettings:(/*^block*/id)arg1 ;
-(void)setESimServerURL:(id)arg1 ;
-(void)setUseNewCellularPlanUI:(BOOL)arg1 ;
-(id)didSelectPlanForData:(id)arg1 ;
-(id)getSubscriptionContextUUIDforPlan:(id)arg1 ;
-(void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 withCSN:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadPlansWithUrl:(id)arg1 postData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldShowPlanList;
-(id)didSelectPlanForDefaultVoice:(id)arg1 ;
-(void)remotePlanLaunchInfoForEid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openInternalUrlId:(long long)arg1 ;
-(void)eraseAllRemotePlansWithCompletion:(/*^block*/id)arg1 ;
-(void)getIMEIPrefix:(/*^block*/id)arg1 ;
-(void)addNewPlanWithUserInWebsheetWithUserConsent:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)selectRemoteProfile:(id)arg1 ;
-(unsigned long long)getSupportedFlowTypes;
-(void)willDisplayPlanItems;
-(void)mccMncOverride:(/*^block*/id)arg1 ;
-(void)deleteAllRemoteProfiles;
-(void)getPhoneAuthTokenWithMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)resolveSimLabel:(id)arg1 ;
-(void)getESimServerURL:(/*^block*/id)arg1 ;
-(void)showUiIgnoringActivationFlags:(BOOL)arg1 ;
-(void)didSelectPlanForDefaultVoice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)launchSequoia;
-(void)didSelectPlansForIMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)latitudeLongitudeOverride:(/*^block*/id)arg1 ;
-(void)didCancelRemotePlan;
-(void)didTransferPlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3 state:(id)arg4 ;
-(BOOL)isAddButtonEnabled;
-(void)setSkipEligibilityCheck:(BOOL)arg1 ;
-(void)remotePlanItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)manageAccountForPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewAddonPlanDuringBuddy:(BOOL)arg1 userConsent:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscriptionDetailsForCompletion:(id)arg1 ;
-(void)didDeletePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 isRemote:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)didSelectRemotePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)plansForRenewalWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)installPendingRemotePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)planItemsShouldUpdate:(BOOL)arg1 ;
-(void)getAutoPlanSelectionWithCompletion:(/*^block*/id)arg1 ;
-(void)finishProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)enterSimSetupWithCompletion:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)carrierHandoffToken:(/*^block*/id)arg1 ;
-(void)setLatitude:(id)arg1 andLongitude:(id)arg2 ;
-(void)didDeleteRemotePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2 ;
-(void)didPurchasePlanForCsn:(id)arg1 iccid:(id)arg2 profileServer:(id)arg3 ;
-(void)planItemsShouldUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)launchDataActivationNextWithUrl:(id)arg1 ;
-(void)getRemoteInfo:(/*^block*/id)arg1 ;
-(void)deletePlanPendingTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewPlanWithCarrierItem:(id)arg1 triggerType:(long long)arg2 userConsent:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_reconnect;
-(id)getPredefinedLabels;
-(void)remapSimLabel:(id)arg1 to:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didTransferPlanForCsn:(id)arg1 iccid:(id)arg2 srcIccid:(id)arg3 profileServer:(id)arg4 state:(id)arg5 ;
-(void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setSelectedProxy:(long long)arg1 ;
-(void)resolveSimLabel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAutoPlanSelection:(BOOL)arg1 ;
-(void)addNewPlanWithCardData:(id)arg1 confirmationCode:(id)arg2 triggerType:(long long)arg3 userConsent:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)addNewPlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 triggerType:(long long)arg5 userConsent:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)setIMEIPrefix:(id)arg1 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)didSelectPlanItem:(id)arg1 isEnable:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSelectedProxy:(/*^block*/id)arg1 ;
-(void)pendingReleaseRemotePlan;
-(void)_ensureConnected_sync;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2 ;
-(void)activatePlanPendingTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)getSelectedEnv:(/*^block*/id)arg1 ;
-(void)getSkipEligibilityCheck:(/*^block*/id)arg1 ;
-(void)eraseAllRemotePlansWithCSN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)manageAccountForRemotePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)startRemoteProvisioningForCSN:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)cancelPlanActivation:(id)arg1 ;
-(void)userDidProvideResponse:(long long)arg1 confirmationCode:(id)arg2 forPlan:(id)arg3 isRemote:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)getShortLabelsForLabels:(id)arg1 ;
-(void)dealloc;
-(void)eraseAllPlans:(/*^block*/id)arg1 ;
@end

