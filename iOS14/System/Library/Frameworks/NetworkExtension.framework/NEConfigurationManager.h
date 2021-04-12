/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NSObject, NSDictionary, NSMutableDictionary, NSKeyedUnarchiver, NEHelper, NSData, NSUUID;

@interface NEConfigurationManager : NSObject {

	NSString* _description;
	BOOL _hasReadPermission;
	BOOL _isVPNPublicAPI;
	BOOL _isVPNPrivateAPI;
	BOOL _isNEHelper;
	BOOL _isSynchronous;
	BOOL _hasVPNAPIEntitlement;
	int _changedNotifyToken;
	NSString* _pluginType;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _outerQueue;
	NSDictionary* _currentIndex;
	NSObject*<OS_dispatch_queue> _changedQueue;
	/*^block*/id _changedHandler;
	NSMutableDictionary* _loadedIndex;
	NSMutableDictionary* _loadedConfigurations;
	NSKeyedUnarchiver* _decoder;
	long long _generation;
	NEHelper* _helper;
	NSData* _SCPreferencesSignature;
	NSUUID* _userUUID;
	long long _configurationChangeSource;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> outerQueue;                         //@synthesize outerQueue=_outerQueue - In the implementation block
@property (assign) int changedNotifyToken;                                                    //@synthesize changedNotifyToken=_changedNotifyToken - In the implementation block
@property (retain) NSDictionary * currentIndex;                                               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> changedQueue;                                 //@synthesize changedQueue=_changedQueue - In the implementation block
@property (copy) id changedHandler;                                                           //@synthesize changedHandler=_changedHandler - In the implementation block
@property (retain) NSMutableDictionary * loadedIndex;                                         //@synthesize loadedIndex=_loadedIndex - In the implementation block
@property (retain) NSMutableDictionary * loadedConfigurations;                                //@synthesize loadedConfigurations=_loadedConfigurations - In the implementation block
@property (retain) NSKeyedUnarchiver * decoder;                                               //@synthesize decoder=_decoder - In the implementation block
@property (assign) long long generation;                                                      //@synthesize generation=_generation - In the implementation block
@property (retain) NEHelper * helper;                                                         //@synthesize helper=_helper - In the implementation block
@property (setter=CPreferencesSignature,retain) NSData * SCPreferencesSignature;              //@synthesize SCPreferencesSignature=_SCPreferencesSignature - In the implementation block
@property (assign) BOOL hasReadPermission;                                                    //@synthesize hasReadPermission=_hasReadPermission - In the implementation block
@property (assign) BOOL isVPNPublicAPI;                                                       //@synthesize isVPNPublicAPI=_isVPNPublicAPI - In the implementation block
@property (assign) BOOL isVPNPrivateAPI;                                                      //@synthesize isVPNPrivateAPI=_isVPNPrivateAPI - In the implementation block
@property (assign) BOOL isNEHelper;                                                           //@synthesize isNEHelper=_isNEHelper - In the implementation block
@property (assign,nonatomic) BOOL isSynchronous;                                              //@synthesize isSynchronous=_isSynchronous - In the implementation block
@property (assign) BOOL hasVPNAPIEntitlement;                                                 //@synthesize hasVPNAPIEntitlement=_hasVPNAPIEntitlement - In the implementation block
@property (readonly) NSUUID * userUUID;                                                       //@synthesize userUUID=_userUUID - In the implementation block
@property (copy) id incomingMessageHandler; 
@property (assign) long long configurationChangeSource;                                       //@synthesize configurationChangeSource=_configurationChangeSource - In the implementation block
@property (readonly) NSString * pluginType;                                                   //@synthesize pluginType=_pluginType - In the implementation block
+(long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2 sameTypeCount:(unsigned long long*)arg3 ;
+(id)sharedManager;
+(BOOL)configurationIsEnabled:(id)arg1 ;
+(void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2 ;
+(id)sharedManagerForAllUsers;
+(void)disableConfiguration:(id)arg1 onDemandOnly:(BOOL)arg2 ;
-(NSDictionary *)currentIndex;
-(void)setGeneration:(long long)arg1 ;
-(long long)generation;
-(NEHelper *)helper;
-(void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 query:(id)arg3 hasEntitlement:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)postGeneration;
-(id)initWithPluginType:(id)arg1 ;
-(void)upgradeLegacyPluginConfigurations:(id)arg1 withUpgradeInfo:(id)arg2 completionQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)handleFileRemovedWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isSystemConfiguration:(id)arg1 ;
-(id)getConfigurationUserUUID:(id)arg1 ;
-(void)setLoadedIndex:(NSMutableDictionary *)arg1 ;
-(void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(SCPreferencesRef)arg4 ;
-(NSData *)SCPreferencesSignature;
-(id)init;
-(void)setDecoder:(NSKeyedUnarchiver *)arg1 ;
-(NSMutableDictionary *)loadedConfigurations;
-(BOOL)hasVPNAPIEntitlement;
-(void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)didLoadConfiguration:(id)arg1 ;
-(void)setIsVPNPrivateAPI:(BOOL)arg1 ;
-(void)showLocalNetworkAlertForApp:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)pluginType;
-(id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 ;
-(void)executeCallbackOnQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setConfigurationChangeSource:(long long)arg1 ;
-(void)notifyChanges;
-(BOOL)isNEHelper;
-(id)readIndexFromDiskWithError:(id*)arg1 ;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)decodeConfigurationWithIdentifier:(id)arg1 ;
-(void)setLoadedConfigurations:(NSMutableDictionary *)arg1 ;
-(void)setHasReadPermission:(BOOL)arg1 ;
-(void)clearLoadedConfigurationsWithIDs:(id)arg1 ;
-(void)repopulateNetworkPrivacyConfigurationResetAll:(BOOL)arg1 ;
-(id)filterIndexWithFilter:(id)arg1 ;
-(void)setOuterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)copyChangedConfigurationIDs:(id)arg1 ;
-(BOOL)isSynchronous;
-(void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2 onlyIfChanged:(BOOL)arg3 ;
-(void)registerForChangeNotifications;
-(id)changedHandler;
-(void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initForAllUsers;
-(id)initWithUserUUID:(id)arg1 ;
-(void)handleApplicationsRemoved:(id)arg1 completionQueue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(int)changedNotifyToken;
-(void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setIsSynchronous:(BOOL)arg1 ;
-(void)setChangedHandler:(id)arg1 ;
-(id)description;
-(void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(BOOL)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSKeyedUnarchiver *)decoder;
-(id)errorWithCode:(long long)arg1 specifics:(id)arg2 ;
-(BOOL)hasReadPermission;
-(BOOL)isVPNPublicAPI;
-(void)setCurrentIndex:(NSDictionary *)arg1 ;
-(void)updateSCPreferencesSignatureOnDisk;
-(NSUUID *)userUUID;
-(void)setHelper:(NEHelper *)arg1 ;
-(id)getCurrentUserUUIDForConfigurationID:(id)arg1 fromIndex:(id)arg2 ;
-(BOOL)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2 ;
-(void)setChangedQueue:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)loadLegacyPluginConfigurationsWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadConfigurationAndUserWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setChangedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2 ;
-(long long)configurationChangeSource;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)configurationHasChanged:(id)arg1 ;
-(NSMutableDictionary *)loadedIndex;
-(void)setSCPreferencesSignature:(NSData *)arg1 ;
-(void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setIsNEHelper:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)changedQueue;
-(NSObject*<OS_dispatch_queue>)outerQueue;
-(void)executeBlock:(/*^block*/id)arg1 ;
-(void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setIsVPNPublicAPI:(BOOL)arg1 ;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(void)getCurrentIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)makeMutableCopyOfIndex:(id)arg1 ;
-(id)initSynchronous;
-(void)syncConfigurationsWithSC:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)incomingMessageHandler;
-(void)setHasVPNAPIEntitlement:(BOOL)arg1 ;
-(BOOL)reloadFromDisk;
-(void)setChangedNotifyToken:(int)arg1 ;
-(id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(BOOL)arg5 isUpgrade:(BOOL)arg6 ;
-(void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)isVPNPrivateAPI;
-(void)dealloc;
-(void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)postChangeNotification;
@end

