/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@class NSLock, NSMutableDictionary, NSMutableSet, NSString, NSArray;

@interface RTTSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableDictionary* _serverCachedSettings;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;               //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (assign,nonatomic) BOOL TTYHardwareEnabled; 
@property (assign,nonatomic) BOOL TTYSoftwareEnabled; 
@property (assign,nonatomic) BOOL incomingCallsTTY; 
@property (assign,nonatomic) BOOL ttyShouldBeRealtime; 
@property (nonatomic,retain) NSString * preferredRelayNumber; 
@property (nonatomic,retain) NSArray * cannedResponses; 
@property (assign,nonatomic) BOOL continuityRTTIsSupported; 
@property (assign,nonatomic) BOOL hasReceivedRTTCall; 
@property (assign,nonatomic) long long incomingTTYCallCount; 
@property (assign,nonatomic) long long outgoingTTYCallCount; 
@property (assign,nonatomic) double lastCallCountReset; 
@property (assign,nonatomic) double lastDBVacuum; 
@property (assign,nonatomic) BOOL internalOverrideTTYAvailability; 
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)currentLocale;
-(BOOL)TTYSoftwareEnabled;
-(id)valueForPreferenceKey:(id)arg1 ;
-(NSMutableSet *)synchronizePreferences;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(NSMutableDictionary *)updateBlocks;
-(NSMutableSet *)registeredNotifications;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(BOOL)TTYHardwareEnabledForContext:(id)arg1 ;
-(BOOL)TTYHardwareEnabled;
-(BOOL)TTYSoftwareEnabledForContext:(id)arg1 ;
-(void)migrateSettings;
-(NSString *)preferredRelayNumber;
-(BOOL)incomingCallsTTY;
-(BOOL)ttyShouldBeRealtime;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 ;
-(BOOL)hasReceivedRTTCall;
-(void)setHasReceivedRTTCall:(BOOL)arg1 ;
-(SEL)selectorForPreferenceKey:(id)arg1 ;
-(BOOL)continuityRTTIsSupported;
-(BOOL)internalOverrideTTYAvailability;
-(BOOL)shouldMigrateSettings;
-(id)preferredRelayNumberForContext:(id)arg1 ;
-(void)setPreferredRelayNumber:(id)arg1 forContext:(id)arg2 ;
-(void)setContinuityRTTIsSupported:(BOOL)arg1 ;
-(void)clearAllServerSettingsCache;
-(void)clearServerSettingsCacheForKey:(id)arg1 ;
-(id)notificationForSelector:(SEL)arg1 ;
-(void)updateGizmoValueIfNeeded:(id)arg1 forPreferenceKey:(id)arg2 ;
-(long long)settingsVersion;
-(id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3 ;
-(BOOL)boolValueForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setIncomingCallsTTY:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setTTYShouldBeRealtime:(BOOL)arg1 forContext:(id)arg2 ;
-(void)setSettingsVersion:(long long)arg1 ;
-(NSArray *)cannedResponses;
-(id)_selectorMap;
-(id)uuidFromContext:(id)arg1 ;
-(id)objectValueForKey:(id)arg1 andContext:(id)arg2 withClass:(Class)arg3 andDefaultValue:(id)arg4 ;
-(id)valueForPreferenceKey:(id)arg1 andContext:(id)arg2 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(BOOL)incomingCallsTTYForContext:(id)arg1 ;
-(long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(BOOL)ttyShouldBeRealtimeForContext:(id)arg1 ;
-(BOOL)boolValueForKey:(id)arg1 andContext:(id)arg2 withDefaultValue:(BOOL)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 andContext:(id)arg3 ;
-(void)setCannedResponses:(NSArray *)arg1 ;
-(void)setIncomingCallsTTY:(BOOL)arg1 ;
-(long long)incomingTTYCallCount;
-(void)setIncomingTTYCallCount:(long long)arg1 ;
-(long long)outgoingTTYCallCount;
-(void)setOutgoingTTYCallCount:(long long)arg1 ;
-(double)lastCallCountReset;
-(void)setLastCallCountReset:(double)arg1 ;
-(double)lastDBVacuum;
-(void)setLastDBVacuum:(double)arg1 ;
-(void)setTtyShouldBeRealtime:(BOOL)arg1 ;
-(void)setPreferredRelayNumber:(NSString *)arg1 ;
-(void)resetCannedResponses;
-(void)setInternalOverrideTTYAvailability:(BOOL)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
@end

