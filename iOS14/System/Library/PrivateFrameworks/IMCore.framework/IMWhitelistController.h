/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol OS_dispatch_queue;
@class STConversation, NSSet, TUCallProviderManager, NSObject, IMCommLimitsPolicyCache, NSMutableDictionary, DMFApplicationPolicyMonitor, NSString;

@interface IMWhitelistController : NSObject <TUCallProviderManagerDelegate> {

	os_unfair_lock_s _stateLock;
	BOOL _needsNotificationsRegistering;
	STConversation* _stateLock_STConversation;
	NSSet* _stateLock_emergencyNumbersSet;
	BOOL _isRunningFromMacMessagesApp;
	TUCallProviderManager* _callProviderManager;
	NSObject*<OS_dispatch_queue> _screenTimeDispatchQueue;
	NSObject*<OS_dispatch_queue> _setupDispatchQueue;
	IMCommLimitsPolicyCache* _policyCache;
	NSMutableDictionary* _bundleIDPolicyMap;
	DMFApplicationPolicyMonitor* _appPolicyMonitor;

}

@property (nonatomic,retain) TUCallProviderManager * callProviderManager;                       //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> screenTimeDispatchQueue;              //@synthesize screenTimeDispatchQueue=_screenTimeDispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> setupDispatchQueue;                   //@synthesize setupDispatchQueue=_setupDispatchQueue - In the implementation block
@property (nonatomic,retain) IMCommLimitsPolicyCache * policyCache;                             //@synthesize policyCache=_policyCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDPolicyMap;                           //@synthesize bundleIDPolicyMap=_bundleIDPolicyMap - In the implementation block
@property (nonatomic,retain) DMFApplicationPolicyMonitor * appPolicyMonitor;                    //@synthesize appPolicyMonitor=_appPolicyMonitor - In the implementation block
@property (assign,nonatomic) BOOL isRunningFromMacMessagesApp;                                  //@synthesize isRunningFromMacMessagesApp=_isRunningFromMacMessagesApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isContactLimitsFeatureEnabled;
+(id)fetchEmergencyNumbersSetWithProviderManager:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(BOOL)allowedToShowAppExtensionWithBundleIdentifier:(id)arg1 ;
-(id)conversationContextForChat:(id)arg1 ;
-(BOOL)isDowntimeLimited;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(TUCallProviderManager *)callProviderManager;
-(BOOL)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(BOOL)arg2 context:(id*)arg3 ;
-(BOOL)allowedToShowConversationForChat:(id)arg1 sync:(BOOL)arg2 ;
-(void)setPolicyCache:(IMCommLimitsPolicyCache *)arg1 ;
-(void)fetchScreenTimeAppPolicy;
-(void)setAppPolicyMonitor:(DMFApplicationPolicyMonitor *)arg1 ;
-(IMCommLimitsPolicyCache *)policyCache;
-(void)getSTConversation:(/*^block*/id)arg1 ;
-(BOOL)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(BOOL)arg2 context:(id*)arg3 participantIDsHash:(id)arg4 ;
-(void)_doRegisterForScreenTimeNotifications;
-(void)initializeContext:(id)arg1 participantIDsHash:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)screenTimeDispatchQueue;
-(id)emergencyNumbers;
-(id)STConversation;
-(void)_addObserversToChat:(id)arg1 ;
-(void)_participantsForChatDidChange:(id)arg1 ;
-(void)setEmergencyNumbers:(id)arg1 ;
-(NSMutableDictionary *)bundleIDPolicyMap;
-(DMFApplicationPolicyMonitor *)appPolicyMonitor;
-(BOOL)isEmergencyHandle:(id)arg1 ;
-(void)registerForScreenTimeNotifications;
-(void)setScreenTimeDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)setupDispatchQueue;
-(void)setSetupDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBundleIDPolicyMap:(NSMutableDictionary *)arg1 ;
-(BOOL)isRunningFromMacMessagesApp;
-(void)setIsRunningFromMacMessagesApp:(BOOL)arg1 ;
@end

