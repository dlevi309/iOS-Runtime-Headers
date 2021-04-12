/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@protocol OS_dispatch_queue;
@class NSLock, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSArray;

@interface RTTSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableDictionary* _cachedSettings;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;
	NSObject*<OS_dispatch_queue> _nanoSynchronizeQueue;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;                         //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                          //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                             //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nanoSynchronizeQueue;              //@synthesize nanoSynchronizeQueue=_nanoSynchronizeQueue - In the implementation block
@property (assign,nonatomic) BOOL TTYHardwareEnabled; 
@property (assign,nonatomic) BOOL TTYSoftwareEnabled; 
@property (assign,nonatomic) BOOL incomingCallsTTY; 
@property (assign,nonatomic) BOOL ttyShouldBeRealtime; 
@property (nonatomic,retain) NSString * preferredRelayNumber; 
@property (nonatomic,retain) NSArray * cannedResponses; 
@property (assign,nonatomic) BOOL rttNotificationsEnabled; 
@property (assign,nonatomic) BOOL rttInlineAbbreviationBarEnabled; 
@property (assign,nonatomic) BOOL continuityRTTIsSupported; 
@property (assign,nonatomic) BOOL supportsRelayCalling; 
@property (assign,nonatomic) BOOL isRelayCallingEnabled; 
@property (assign,nonatomic) BOOL hasReceivedRTTCall; 
@property (assign,nonatomic) long long incomingTTYCallCount; 
@property (assign,nonatomic) long long outgoingTTYCallCount; 
@property (assign,nonatomic) double lastCallCountReset; 
@property (assign,nonatomic) double lastDBVacuum; 
@property (assign,nonatomic) BOOL internalOverrideTTYAvailability; 
+(void)initialize;
+(id)sharedInstance;
-(id)currentLocale;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(void)setPreferredRelayNumber:(id)arg1 forContext:(id)arg2 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableDictionary *)updateBlocks;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(NSMutableSet *)registeredNotifications;
-(void)resetCannedResponses;
-(NSObject*<OS_dispatch_queue>)nanoSynchronizeQueue;
-(void)setIncomingCallsTTY:(BOOL)arg1 ;
-(void)setLastCallCountReset:(double)arg1 ;
-(id)init;
-(BOOL)TTYHardwareEnabledForContext:(id)arg1 ;
-(id)objectValueForKey:(id)arg1 andContext:(id)arg2 withClass:(Class)arg3 andDefaultValue:(id)arg4 ;
-(BOOL)incomingCallsTTYForContext:(id)arg1 ;
-(void)clearAllServerSettingsCache;
-(BOOL)supportsRelayCalling;
-(BOOL)internalOverrideTTYAvailability;
-(id)_selectorMap;
-(SEL)selectorForPreferenceKey:(id)arg1 ;
-(BOOL)hasReceivedRTTCall;
-(void)setIncomingCallsTTY:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setLastDBVacuum:(double)arg1 ;
-(void)migrateSettings;
-(void)setRttInlineAbbreviationBarEnabled:(BOOL)arg1 ;
-(BOOL)ttyShouldBeRealtimeForContext:(id)arg1 ;
-(id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3 ;
-(void)setInternalOverrideTTYAvailability:(BOOL)arg1 ;
-(void)clearServerSettingsCacheForKey:(id)arg1 ;
-(void)setIncomingTTYCallCount:(long long)arg1 ;
-(void)setPreferredRelayNumber:(NSString *)arg1 ;
-(void)setRttNotificationsEnabled:(BOOL)arg1 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(BOOL)ttyShouldBeRealtime;
-(BOOL)incomingCallsTTY;
-(long long)incomingTTYCallCount;
-(long long)settingsVersion;
-(id)valueForPreferenceKey:(id)arg1 andContext:(id)arg2 ;
-(double)lastDBVacuum;
-(void)setIsRelayCallingEnabled:(BOOL)arg1 ;
-(double)lastCallCountReset;
-(BOOL)shouldMigrateSettings;
-(void)updateGizmoValueIfNeeded:(id)arg1 forPreferenceKey:(id)arg2 ;
-(BOOL)rttNotificationsEnabled;
-(BOOL)boolValueForKey:(id)arg1 andContext:(id)arg2 withDefaultValue:(BOOL)arg3 ;
-(void)setTTYShouldBeRealtime:(BOOL)arg1 forContext:(id)arg2 ;
-(BOOL)boolValueForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(long long)outgoingTTYCallCount;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 ;
-(BOOL)TTYHardwareEnabled;
-(id)uuidFromContext:(id)arg1 ;
-(NSArray *)cannedResponses;
-(void)setSupportsRelayCalling:(BOOL)arg1 ;
-(BOOL)rttInlineAbbreviationBarEnabled;
-(void)setHasReceivedRTTCall:(BOOL)arg1 ;
-(long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(void)setOutgoingTTYCallCount:(long long)arg1 ;
-(BOOL)continuityRTTIsSupported;
-(void)setTtyShouldBeRealtime:(BOOL)arg1 ;
-(BOOL)TTYSoftwareEnabled;
-(BOOL)TTYSoftwareEnabledForContext:(id)arg1 ;
-(id)preferredRelayNumberForContext:(id)arg1 ;
-(void)setSettingsVersion:(long long)arg1 ;
-(void)setCannedResponses:(NSArray *)arg1 ;
-(id)valueForPreferenceKey:(id)arg1 ;
-(BOOL)isRelayCallingEnabled;
-(void)setNanoSynchronizeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)preferredRelayNumber;
-(id)notificationForSelector:(SEL)arg1 ;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 ;
-(void)setContinuityRTTIsSupported:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 andContext:(id)arg3 ;
-(void)dealloc;
@end

