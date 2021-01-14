/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, CNContactStore, CNDowntimeWhitelist, STManagementState, DMFCommunicationPolicyMonitor, DMFApplicationPolicyMonitor, NSString, DMFEmergencyModeMonitor;

@interface STConversation : NSObject {

	NSMapTable* _contextByHandles;
	NSObject*<OS_dispatch_queue> _stateChangeQueue;
	NSObject* _didFetchInitialStateLock;
	BOOL _isThirdPartyBundleIdentifier;
	BOOL _emergencyModeEnabled;
	BOOL _didFetchInitialScreenTimePolicyState;
	BOOL _didFetchInitialApplicationState;
	BOOL _didFetchInitialEmergencyModeState;
	BOOL _didFetchInitialThirdPartyApplicationState;
	int _policyNotifyToken;
	int _emergencyModeNotifyToken;
	CNContactStore* _contactStore;
	CNDowntimeWhitelist* _whitelist;
	STManagementState* _managementState;
	DMFCommunicationPolicyMonitor* _communicationPolicyMonitor;
	DMFApplicationPolicyMonitor* _thirdPartyApplicationPolicyMonitor;
	NSString* _bundleIdentifier;
	long long _generalScreenTimePolicy;
	long long _whileLimitedPolicy;
	unsigned long long _currentApplicationState;
	long long _currentThirdPartyApplicationState;
	DMFEmergencyModeMonitor* _emergencyModeMonitor;
	STConversation* _me;
	/*^block*/id _conversationCompletionHandler;

}

@property (readonly) CNContactStore * contactStore;                                               //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) CNDowntimeWhitelist * whitelist;                                             //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) STManagementState * managementState;                                           //@synthesize managementState=_managementState - In the implementation block
@property (retain) DMFCommunicationPolicyMonitor * communicationPolicyMonitor;                    //@synthesize communicationPolicyMonitor=_communicationPolicyMonitor - In the implementation block
@property (retain) DMFApplicationPolicyMonitor * thirdPartyApplicationPolicyMonitor;              //@synthesize thirdPartyApplicationPolicyMonitor=_thirdPartyApplicationPolicyMonitor - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) BOOL isThirdPartyBundleIdentifier;                                           //@synthesize isThirdPartyBundleIdentifier=_isThirdPartyBundleIdentifier - In the implementation block
@property (assign) long long generalScreenTimePolicy;                                             //@synthesize generalScreenTimePolicy=_generalScreenTimePolicy - In the implementation block
@property (assign) long long whileLimitedPolicy;                                                  //@synthesize whileLimitedPolicy=_whileLimitedPolicy - In the implementation block
@property (assign) unsigned long long currentApplicationState;                                    //@synthesize currentApplicationState=_currentApplicationState - In the implementation block
@property (assign) long long currentThirdPartyApplicationState;                                   //@synthesize currentThirdPartyApplicationState=_currentThirdPartyApplicationState - In the implementation block
@property (retain) DMFEmergencyModeMonitor * emergencyModeMonitor;                                //@synthesize emergencyModeMonitor=_emergencyModeMonitor - In the implementation block
@property (assign) BOOL emergencyModeEnabled;                                                     //@synthesize emergencyModeEnabled=_emergencyModeEnabled - In the implementation block
@property (assign) BOOL didFetchInitialScreenTimePolicyState;                                     //@synthesize didFetchInitialScreenTimePolicyState=_didFetchInitialScreenTimePolicyState - In the implementation block
@property (assign) BOOL didFetchInitialApplicationState;                                          //@synthesize didFetchInitialApplicationState=_didFetchInitialApplicationState - In the implementation block
@property (assign) BOOL didFetchInitialEmergencyModeState;                                        //@synthesize didFetchInitialEmergencyModeState=_didFetchInitialEmergencyModeState - In the implementation block
@property (assign) BOOL didFetchInitialThirdPartyApplicationState;                                //@synthesize didFetchInitialThirdPartyApplicationState=_didFetchInitialThirdPartyApplicationState - In the implementation block
@property (readonly) int policyNotifyToken;                                                       //@synthesize policyNotifyToken=_policyNotifyToken - In the implementation block
@property (readonly) int emergencyModeNotifyToken;                                                //@synthesize emergencyModeNotifyToken=_emergencyModeNotifyToken - In the implementation block
@property (retain) STConversation * me;                                                           //@synthesize me=_me - In the implementation block
@property (copy) id conversationCompletionHandler;                                                //@synthesize conversationCompletionHandler=_conversationCompletionHandler - In the implementation block
+(void)requestConversationWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(STConversation *)me;
-(CNDowntimeWhitelist *)whitelist;
-(CNContactStore *)contactStore;
-(void)_screenTimePolicyDidChange;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(long long)currentThirdPartyApplicationState;
-(id)initSynchronouslyWithThirdPartyBundleIdentifier:(id)arg1 ;
-(id)initWithThirdPartyBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDidFetchInitialThirdPartyApplicationState:(BOOL)arg1 ;
-(BOOL)didFetchInitialScreenTimePolicyState;
-(id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 ;
-(void)setEmergencyModeMonitor:(DMFEmergencyModeMonitor *)arg1 ;
-(unsigned long long)currentApplicationState;
-(void)_stConversationCommonInitSetupObservationOfStateChanges;
-(void)setMe:(STConversation *)arg1 ;
-(void)setEmergencyModeEnabled:(BOOL)arg1 ;
-(void)setManagementState:(STManagementState *)arg1 ;
-(void)_updateThirdPartyContext:(id)arg1 forHandles:(id)arg2 ;
-(BOOL)_shouldGeneralScreenTimeAllowHandles:(id)arg1 context:(id)arg2 ;
-(DMFApplicationPolicyMonitor *)thirdPartyApplicationPolicyMonitor;
-(NSString *)bundleIdentifier;
-(void)setDidFetchInitialEmergencyModeState:(BOOL)arg1 ;
-(void)callCompletionHandlerIfNeededWithConversation:(id)arg1 error:(id)arg2 ;
-(void)_populateAllowedContactsByHandlesForContactHandles:(id)arg1 context:(id)arg2 ;
-(void)setConversationCompletionHandler:(id)arg1 ;
-(void)setDidFetchInitialApplicationState:(BOOL)arg1 ;
-(id)allowableByContactsHandles:(id)arg1 ;
-(int)emergencyModeNotifyToken;
-(void)_currentThirdPartyApplicationStateDidChange;
-(STManagementState *)managementState;
-(void)setCurrentApplicationState:(unsigned long long)arg1 ;
-(void)_updateAllThirdPartyContexts;
-(DMFCommunicationPolicyMonitor *)communicationPolicyMonitor;
-(void)setThirdPartyApplicationPolicyMonitor:(DMFApplicationPolicyMonitor *)arg1 ;
-(id)_contactsByHandle:(id)arg1 error:(id*)arg2 ;
-(void)setWhileLimitedPolicy:(long long)arg1 ;
-(void)setCommunicationPolicyMonitor:(DMFCommunicationPolicyMonitor *)arg1 ;
-(void)_stConversationCommonInitWithThirdPartyBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
-(void)_updateContext:(id)arg1 forHandles:(id)arg2 updateGeneral:(BOOL)arg3 updateLimited:(BOOL)arg4 updateCurrentApplicationState:(BOOL)arg5 updateAllowedByContactsHandle:(BOOL)arg6 refreshContacts:(BOOL)arg7 refreshWhitelist:(BOOL)arg8 updateEmergencyMode:(BOOL)arg9 ;
-(void)setGeneralScreenTimePolicy:(long long)arg1 ;
-(DMFEmergencyModeMonitor *)emergencyModeMonitor;
-(void)_updateAllContextsUpdateGeneral:(BOOL)arg1 updateLimited:(BOOL)arg2 updateCurrentApplicationState:(BOOL)arg3 updateAllowedByContactsHandle:(BOOL)arg4 refreshContacts:(BOOL)arg5 refreshWhitelist:(BOOL)arg6 updateEmergencyMode:(BOOL)arg7 ;
-(void)_emergencyModeDidChange;
-(id)initSynchronouslyWithBundleIdentifier:(id)arg1 ;
-(long long)whileLimitedPolicy;
-(id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isThirdPartyBundleIdentifier;
-(BOOL)didFetchInitialApplicationState;
-(void)_populateThirdPartyAllowedContactsByHandlesForContactHandles:(id)arg1 context:(id)arg2 ;
-(BOOL)didFetchInitialEmergencyModeState;
-(void)_currentApplicationStateDidChange;
-(id)conversationCompletionHandler;
-(BOOL)didFetchInitialThirdPartyApplicationState;
-(long long)generalScreenTimePolicy;
-(void)setCurrentThirdPartyApplicationState:(long long)arg1 ;
-(BOOL)emergencyModeEnabled;
-(void)_stConversationCommonInitWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_filteredArrayForKnownHandlesInArray:(id)arg1 ;
-(void)_contactStoreDidChange;
-(void)callCompletionHandlerIfNeededWithThirdPartyConversation:(id)arg1 error:(id)arg2 ;
-(BOOL)_doesContainAtLeastOneContactInHandles:(id)arg1 contactsByHandle:(id)arg2 ;
-(int)policyNotifyToken;
-(void)dealloc;
-(BOOL)_shouldWhileLimitedAllowHandles:(id)arg1 context:(id)arg2 ;
-(void)setDidFetchInitialScreenTimePolicyState:(BOOL)arg1 ;
@end

