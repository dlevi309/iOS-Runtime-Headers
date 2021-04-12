/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
*/

#import <libobjc.A.dylib/NPHSIMChoiceViewControllerDelegate.h>

@class CoreTelephonyClient, CTXPCServiceSubscriptionInfo, NSMutableDictionary, NSArray, NSMutableSet, UIViewController, CTRemotePlan, CTDeviceIdentifier, NSString;

@interface NPHCellularBridgeUIManager : NSObject <NPHSIMChoiceViewControllerDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	CTXPCServiceSubscriptionInfo* _serviceSubscriptionInfo;
	NSMutableDictionary* _serviceSubscriptionInfoList;
	NSArray* _proxyPlanItems;
	long long _outstandingPlanFlowsIdentified;
	NSMutableSet* _outstandingRemotePlanItemsRequestedForCSN;
	UIViewController* _hostViewController;
	/*^block*/id _hostCompletionBlock;
	BOOL LTEMayImpactService;
	BOOL _shouldOfferSignupCompletion;
	CTRemotePlan* _transferableRemotePlan;
	CTDeviceIdentifier* _transferableRemoteDeviceID;

}

@property (nonatomic,retain) CTRemotePlan * transferableRemotePlan;                                   //@synthesize transferableRemotePlan=_transferableRemotePlan - In the implementation block
@property (nonatomic,retain) CTDeviceIdentifier * transferableRemoteDeviceID;                         //@synthesize transferableRemoteDeviceID=_transferableRemoteDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL cellularPlanIsSetUp; 
@property (nonatomic,readonly) BOOL isAnyCellularPlanActivating; 
@property (nonatomic,readonly) NSArray * serviceSubscriptionsInUse; 
@property (nonatomic,readonly) NSArray * serviceSubscriptionsToOfferUser; 
@property (nonatomic,readonly) NSArray * serviceSubscriptionsShouldShowAddNewRemotePlan; 
@property (nonatomic,readonly) NSArray * serviceSubscriptionsOfferingRemotePlan; 
@property (nonatomic,readonly) NSArray * serviceSubscriptionsOfferingTrialPlan; 
@property (nonatomic,readonly) BOOL shouldShowAddNewRemotePlan; 
@property (nonatomic,readonly) BOOL shouldOfferRemotePlan; 
@property (nonatomic,readonly) BOOL shouldOfferTrialPlan; 
@property (nonatomic,readonly) BOOL LTEMayImpactService; 
@property (nonatomic,readonly) BOOL shouldOfferSignupCompletion;                                      //@synthesize shouldOfferSignupCompletion=_shouldOfferSignupCompletion - In the implementation block
@property (nonatomic,readonly) NSString * trialPlanType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)carrierName;
+(id)carrierPhoneNumber;
+(void)presentCellularError:(id)arg1 onViewController:(id)arg2 ;
+(BOOL)_isSubscriptionInUse:(id)arg1 ;
+(void)_presentAirplaneModeOnAlertOnViewController:(id)arg1 ;
+(void)_presentCellularRequiredModeAlertOnViewController:(id)arg1 ;
+(void)_presentErrorTitled:(id)arg1 withMessage:(id)arg2 onViewController:(id)arg3 ;
+(void)_presentErrorTitle:(id)arg1 onViewController:(id)arg2 withActionTitle:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)subscriptionInfoDidChange;
-(void)activeSubscriptionsDidChange;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)_currentDeviceCSN;
-(id)carrierNameForSubscription:(id)arg1 ;
-(BOOL)shouldShowAddNewRemotePlan;
-(BOOL)shouldOfferRemotePlan;
-(BOOL)shouldOfferTrialPlan;
-(BOOL)shouldOfferSignupCompletion;
-(NSString *)trialPlanType;
-(void)_ctCellularPlanInfoDidChange:(id)arg1 ;
-(void)_localPlanInfoDidChange:(id)arg1 ;
-(void)_ctCellularRemoteProvisioningDidBecomeAvailable:(id)arg1 ;
-(void)setTransferableRemotePlan:(CTRemotePlan *)arg1 ;
-(void)setTransferableRemoteDeviceID:(CTDeviceIdentifier *)arg1 ;
-(void)_updateCoreTelephonyClientInfo;
-(void)_updateSIMStatusForSubscriptionContext:(id)arg1 withStatus:(id)arg2 ;
-(id)_serviceSubscriptionInfoForSubscriptionContext:(id)arg1 ;
-(void)_updateServiceSubscriptionInfo:(id)arg1 ;
-(void)_prePromptForUserConsentIfNecessary:(/*^block*/id)arg1 ;
-(BOOL)shouldAllowUserToTransferPlanFromDeviceWithCSN:(id)arg1 ;
-(void)_promptUserToPickSubscriptionContextOnViewController:(id)arg1 andIsTransferFlow:(BOOL)arg2 ;
-(void)setUpCellularPlanOnViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)serviceSubscriptionsInUse;
-(void)setUpCellularPlanOnViewController:(id)arg1 withContext:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updateTransferableCellularPlanFromDeviceWithCSN:(id)arg1 ;
-(CTDeviceIdentifier *)transferableRemoteDeviceID;
-(CTRemotePlan *)transferableRemotePlan;
-(BOOL)allCompanionSIMsMissing;
-(BOOL)_isCarrierSetupFlowUnsupportedForServiceSubscription:(id)arg1 ;
-(void)_setUpCellularPlanDirectWithContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setUpCellularPlanWithActivationCodeOnViewController:(id)arg1 withContext:(id)arg2 withCompletion:(/*^block*/id)arg3 codelessActivationBlock:(/*^block*/id)arg4 ;
-(void)_prePromptUserForConsentTextType:(long long)arg1 relevantPlanItem:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)userConsentMessageForConsentType:(long long)arg1 relevantPlanItem:(id)arg2 ;
-(id)selectedCellularPlan;
-(id)_activeDeviceCSNList;
-(void)_updateCellularPlansWithFetch:(BOOL)arg1 forCSN:(id)arg2 ;
-(void)_updateShouldShowAddNewRemotePlan;
-(void)_updateIsRemotePlanCapable;
-(void)_updateShouldWarnAboutLTEMayImpactService;
-(BOOL)_isPersistentError:(id)arg1 ;
-(BOOL)_isSetupBlockingError:(id)arg1 ;
-(NSArray *)serviceSubscriptionsShouldShowAddNewRemotePlan;
-(NSArray *)serviceSubscriptionsOfferingRemotePlan;
-(NSArray *)serviceSubscriptionsOfferingTrialPlan;
-(id)cellularPlans;
-(void)updateCellularPlansWithFetch:(BOOL)arg1 ;
-(void)_updateSIMStatusForAllSubscriptionContexts;
-(BOOL)isGeminiSetup;
-(id)_trialPlanTypeForContext:(id)arg1 ;
-(NSArray *)serviceSubscriptionsToOfferUser;
-(BOOL)cellularPlanIsSetUp;
-(id)cellularUseErrors;
-(void)userTappedSetUp:(id)arg1 ;
-(void)userTappedCancel;
-(void)setUpOrTransferCellularPlanOnViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)transferCellularPlanOnViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isAnyCellularPlanActivating;
-(long long)consentRequiredRelevantCellularPlanItem:(id*)arg1 ;
-(void)startRemoteProvisioning;
-(void)finishRemoteProvisioning;
-(id)displayNameForCellularPlan:(id)arg1 ;
-(BOOL)shouldAllowUserToAddOrSetUpPlan;
-(id)cellularUseError;
-(BOOL)isCarrierSetupFlowUnsupported;
-(BOOL)LTEMayImpactService;
@end

