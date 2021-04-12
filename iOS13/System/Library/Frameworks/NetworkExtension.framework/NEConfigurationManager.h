/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue, NEConfigurationManagerDelegate;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NEHelper, NSObject, NSDictionary, NSMutableDictionary, NSKeyedUnarchiver, NSData, NSUUID;

@interface NEConfigurationManager : NSObject {

	NSString* _description;
	NEHelper* _helper;
	BOOL _hasReadPermission;
	BOOL _isVPNPublicAPI;
	BOOL _isVPNPrivateAPI;
	BOOL _isNEHelper;
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
	NSData* _SCPreferencesSignature;
	NSUUID* _userUUID;
	id<NEConfigurationManagerDelegate> _delegate;
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
@property (readonly) NEHelper * helper; 
@property (setter=CPreferencesSignature,retain) NSData * SCPreferencesSignature;              //@synthesize SCPreferencesSignature=_SCPreferencesSignature - In the implementation block
@property (assign) BOOL hasReadPermission;                                                    //@synthesize hasReadPermission=_hasReadPermission - In the implementation block
@property (assign) BOOL isVPNPublicAPI;                                                       //@synthesize isVPNPublicAPI=_isVPNPublicAPI - In the implementation block
@property (assign) BOOL isVPNPrivateAPI;                                                      //@synthesize isVPNPrivateAPI=_isVPNPrivateAPI - In the implementation block
@property (assign) BOOL isNEHelper;                                                           //@synthesize isNEHelper=_isNEHelper - In the implementation block
@property (assign) BOOL hasVPNAPIEntitlement;                                                 //@synthesize hasVPNAPIEntitlement=_hasVPNAPIEntitlement - In the implementation block
@property (readonly) NSUUID * userUUID;                                                       //@synthesize userUUID=_userUUID - In the implementation block
@property (retain) id<NEConfigurationManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (copy) id incomingMessageHandler; 
@property (assign) long long configurationChangeSource;                                       //@synthesize configurationChangeSource=_configurationChangeSource - In the implementation block
@property (readonly) NSString * pluginType;                                                   //@synthesize pluginType=_pluginType - In the implementation block
+(id)sharedManager;
+(void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2 ;
+(BOOL)configurationIsEnabled:(id)arg1 ;
+(long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2 sameTypeCount:(unsigned long long*)arg3 ;
+(void)disableConfiguration:(id)arg1 onDemandOnly:(BOOL)arg2 ;
+(id)sharedManagerForAllUsers;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerForChangeNotifications;
-(id<NEConfigurationManagerDelegate>)delegate;
-(void)setDelegate:(id<NEConfigurationManagerDelegate>)arg1 ;
-(long long)generation;
-(NEHelper *)helper;
-(NSDictionary *)currentIndex;
-(NSKeyedUnarchiver *)decoder;
-(void)setGeneration:(long long)arg1 ;
-(void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setCurrentIndex:(NSDictionary *)arg1 ;
-(void)postChangeNotification;
-(NSString *)pluginType;
-(void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithPluginType:(id)arg1 ;
-(id)initWithUserUUID:(id)arg1 ;
-(int)changedNotifyToken;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(id)incomingMessageHandler;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)loadedConfigurations;
-(void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2 onlyIfChanged:(BOOL)arg3 ;
-(void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)readIndexFromDiskWithError:(id*)arg1 ;
-(BOOL)hasReadPermission;
-(void)setDecoder:(NSKeyedUnarchiver *)arg1 ;
-(NSUUID *)userUUID;
-(id)filterIndexWithFilter:(id)arg1 ;
-(void)notifyChanges;
-(NSMutableDictionary *)loadedIndex;
-(void)clearLoadedConfigurationsWithIDs:(id)arg1 ;
-(id)decodeConfigurationWithIdentifier:(id)arg1 ;
-(void)didLoadConfiguration:(id)arg1 ;
-(BOOL)isVPNPublicAPI;
-(BOOL)reloadFromDisk;
-(BOOL)isNEHelper;
-(id)errorWithCode:(long long)arg1 specifics:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)changedQueue;
-(id)changedHandler;
-(id)copyChangedConfigurationIDs:(id)arg1 ;
-(void)getCurrentIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setChangedNotifyToken:(int)arg1 ;
-(void)setLoadedIndex:(NSMutableDictionary *)arg1 ;
-(void)setLoadedConfigurations:(NSMutableDictionary *)arg1 ;
-(void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2 ;
-(BOOL)configurationHasChanged:(id)arg1 ;
-(void)setHasReadPermission:(BOOL)arg1 ;
-(void)setSCPreferencesSignature:(NSData *)arg1 ;
-(BOOL)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2 ;
-(id)makeMutableCopyOfIndex:(id)arg1 ;
-(NSData *)SCPreferencesSignature;
-(NSObject*<OS_dispatch_queue>)outerQueue;
-(id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(BOOL)arg5 isUpgrade:(BOOL)arg6 ;
-(id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 ;
-(void)updateSCPreferencesSignatureOnDisk;
-(id)getConfigurationUserUUID:(id)arg1 ;
-(void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setChangedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangedHandler:(id)arg1 ;
-(id)initForAllUsers;
-(void)postGeneration;
-(void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(BOOL)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)syncConfigurationsWithSC:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)loadConfigurationAndUserWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setChangedQueue:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)handleFileRemovedWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(SCPreferencesRef)arg4 ;
-(void)handleApplicationsRemoved:(id)arg1 completionQueue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)showObsoleteAppAlert;
-(void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)upgradeLegacyPluginConfigurationsWithUpgradeInfo:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)getCurrentUserUUIDForConfigurationID:(id)arg1 fromIndex:(id)arg2 ;
-(void)setOuterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsVPNPublicAPI:(BOOL)arg1 ;
-(BOOL)isVPNPrivateAPI;
-(void)setIsVPNPrivateAPI:(BOOL)arg1 ;
-(void)setIsNEHelper:(BOOL)arg1 ;
-(BOOL)hasVPNAPIEntitlement;
-(void)setHasVPNAPIEntitlement:(BOOL)arg1 ;
-(long long)configurationChangeSource;
-(void)setConfigurationChangeSource:(long long)arg1 ;
@end

