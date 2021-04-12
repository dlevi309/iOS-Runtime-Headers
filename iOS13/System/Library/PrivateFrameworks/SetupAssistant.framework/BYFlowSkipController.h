/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol NSObject;
@class FLFollowUpController;

@interface BYFlowSkipController : NSObject {

	BOOL _basicFunctionalityEnabled_doNotAccessDirectly;
	FLFollowUpController* _followUpController_doNotAccessDirectly;
	id<NSObject> _wfNetworkChangeObserver;

}
+(id)sharedInstance;
+(id)_supportedIdentifiers;
+(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(id)_actionForFlowSkipIdentifiers:(id)arg1 ;
+(id)_localizedStringListingFlowSkipIdentifiers:(id)arg1 ;
+(id)_flowSkipIdentifierFromActionIdentifier:(id)arg1 ;
+(id)_actionIdentifierForFlowSkipIdentifier:(id)arg1 ;
+(id)_localizedStringListOfStrings:(id)arg1 ;
+(void)_setShouldObserveChangeFromNetworkSSID:(id)arg1 ;
+(BOOL)_shouldObserveChangeFromNetworkSSID:(id*)arg1 ;
+(void)_clearShouldObserveChangeFromNetworkSSID;
+(id)flowSkipIdentifiersFromFollowUpAction:(id)arg1 ;
-(id)init;
-(id)_followUpController;
-(void)observeFinishSetupTriggers;
-(BOOL)_isBasicFunctionalityEnabled;
-(id)_pendingFollowUpItem;
-(void)_postFollowUpItemForFlowSkipIdentifiers:(id)arg1 previousFollowUpItem:(id)arg2 forceNotification:(BOOL)arg3 ;
-(long long)_timeIntervalForNotifications;
-(long long)_timeIntervalForFrequentNotifications;
-(BOOL)_isPasscodeSet;
-(void)didCompleteFlow:(id)arg1 ;
-(void)_persistInitialNetworkSSID;
-(void)registerActivities;
-(void)_repostExistingFollowUpItemForcingNotification:(id)arg1 ;
-(long long)_timeoutForWifiObserver;
-(long long)_timeIntervalForWifiObserver;
-(void)_regsiterWiFiObserverActivityWithNeedsActivity:(BOOL)arg1 handlerQueue:(id)arg2 ;
-(void)revisePendingFollowUpsForcingRepost:(BOOL)arg1 ;
-(void)setBasicFunctionalityEnabled:(BOOL)arg1 ;
-(void)didSkipFlow:(id)arg1 ;
-(void)cancelPendingFlows;
-(void)passcodeDidChange;
-(id)getFlowSkipIdentifiers;
@end

