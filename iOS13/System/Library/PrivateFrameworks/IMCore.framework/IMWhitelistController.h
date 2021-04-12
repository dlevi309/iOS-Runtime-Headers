/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol OS_dispatch_queue;
@class TUCallProviderManager, NSObject, NSSet, IMCommLimitsPolicyCache, NSMutableDictionary, DMFApplicationPolicyMonitor, NSString;

@interface IMWhitelistController : NSObject <TUCallProviderManagerDelegate> {

	TUCallProviderManager* _callProviderManager;
	NSObject*<OS_dispatch_queue> _screenTimeDispatchQueue;
	NSSet* _emergencyNumbersSet;
	IMCommLimitsPolicyCache* _policyCache;
	NSMutableDictionary* _bundleIDPolicyMap;
	DMFApplicationPolicyMonitor* _appPolicyMonitor;

}

@property (nonatomic,retain) TUCallProviderManager * callProviderManager;                       //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> screenTimeDispatchQueue;              //@synthesize screenTimeDispatchQueue=_screenTimeDispatchQueue - In the implementation block
@property (nonatomic,retain) NSSet * emergencyNumbersSet;                                       //@synthesize emergencyNumbersSet=_emergencyNumbersSet - In the implementation block
@property (nonatomic,retain) IMCommLimitsPolicyCache * policyCache;                             //@synthesize policyCache=_policyCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDPolicyMap;                           //@synthesize bundleIDPolicyMap=_bundleIDPolicyMap - In the implementation block
@property (nonatomic,retain) DMFApplicationPolicyMonitor * appPolicyMonitor;                    //@synthesize appPolicyMonitor=_appPolicyMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isContactLimitsFeatureEnabled;
+(id)STConversation;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(IMCommLimitsPolicyCache *)policyCache;
-(TUCallProviderManager *)callProviderManager;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(BOOL)allowedToShowConversationWithHandleIDs:(id)arg1 sync:(BOOL)arg2 context:(id*)arg3 ;
-(id)conversationContextForChat:(id)arg1 ;
-(BOOL)allowedToShowAppExtensionWithBundleIdentifier:(id)arg1 ;
-(BOOL)allowedToShowConversationForChat:(id)arg1 sync:(BOOL)arg2 ;
-(void)setPolicyCache:(IMCommLimitsPolicyCache *)arg1 ;
-(void)reloadEmergencyNumbersSet;
-(void)fetchScreenTimeAppPolicy;
-(void)initializeContext:(id)arg1 participantIDsHash:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)screenTimeDispatchQueue;
-(void)_addObserversToChat:(id)arg1 ;
-(void)_participantsForChatDidChange:(id)arg1 ;
-(NSMutableDictionary *)bundleIDPolicyMap;
-(DMFApplicationPolicyMonitor *)appPolicyMonitor;
-(void)registerForScreenTimeNotifications;
-(void)setScreenTimeDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)emergencyNumbersSet;
-(void)setEmergencyNumbersSet:(NSSet *)arg1 ;
-(void)setBundleIDPolicyMap:(NSMutableDictionary *)arg1 ;
-(void)setAppPolicyMonitor:(DMFApplicationPolicyMonitor *)arg1 ;
@end

