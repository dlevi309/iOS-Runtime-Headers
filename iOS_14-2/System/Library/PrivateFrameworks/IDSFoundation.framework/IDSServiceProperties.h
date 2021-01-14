/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSArray;

@interface IDSServiceProperties : NSObject <NSCopying> {

	NSString* _launchNotification;
	NSSet* _allowedTrafficClassesIndices;
	NSSet* _duetIdentifiersIndices;
	unsigned _allowLocalDelivery : 1;
	unsigned _allowWiProxDelivery : 1;
	unsigned _allowMagnetDelivery : 1;
	unsigned _shouldShowUsageNotifications : 1;
	unsigned _allowPartialSendsToSucceed : 1;
	unsigned _canUseLargePayload : 1;
	unsigned _sendOnePerToken : 1;
	unsigned _wantsPhoneNumberAccount : 1;
	unsigned _iCloudBasedService : 1;
	unsigned _tunnelService : 1;
	unsigned _holdsMessagesUntilFirstUnlock : 1;
	unsigned _shouldAutoRegisterAllHandles : 1;
	unsigned _shouldRegisterUsingDSHandle : 1;
	unsigned _shouldSyncAccounts : 1;
	unsigned _shouldNotSyncPhoneNumberAccounts : 1;
	unsigned _shouldAllowProxyDelivery : 1;
	unsigned _wantsLocalReflectedSend : 1;
	unsigned _wantsCheckTransportLogHint : 1;
	unsigned _watchOnlyService : 1;
	unsigned _allowsDuplicates : 1;
	unsigned _useiMessageCallerID : 1;
	unsigned _useFaceTimeCallerID : 1;
	unsigned _allowPendingMessagesForInactiveDevice : 1;
	unsigned _allowSendingMessagesToInactiveDevice : 1;
	unsigned _shouldProtectTrafficUsingClassA : 1;
	unsigned _shouldSilentlyFailMessagesOnSwitch : 1;
	unsigned _shouldAllowCloudDelivery : 1;
	unsigned _shouldAllowLiveMessageDelivery : 1;
	unsigned _enabledOnlyWhenPaired : 1;
	unsigned _forceHTTPQueriesOnly : 1;
	unsigned _wantsRemoteErrors : 1;
	unsigned _useTransportZone : 1;
	unsigned _shouldFilterInactiveAliases : 1;
	unsigned _dontFilterSelfMessagesForUnknownDevice : 1;
	unsigned _passThroughMessagesFromStorage : 1;
	unsigned _pushToWakeDisabled : 1;
	unsigned _disableOnLowRAMDevice : 1;
	unsigned _wantsPendingMessageUpdates : 1;
	unsigned _disabledOnTinkerWatch : 1;
	unsigned _enabledOnlyOnStandaloneDevices : 1;
	unsigned _tinkerMessagingOnly : 1;
	unsigned _launchIsDarwin : 1;
	unsigned _allowCrossAccountMessages : 1;
	unsigned _blockRemoteTimeouts : 1;
	unsigned _allowWakingMessages : 1;
	unsigned _allowUrgentMessages : 1;
	unsigned _prototypingOnly : 1;
	unsigned char _minCompatibilityVersion;
	unsigned char _accountSyncMinCompatibilityVersion;
	unsigned _adHocServiceType;
	unsigned _dataProtectionClass;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _pushTopic;
	NSString* _serviceName;
	NSString* _queryService;
	NSString* _protocolName;
	NSString* _superService;
	NSString* _dataUsageBundleID;
	long long _linkedDeviceRelationships;
	NSString* _legacyIdentifier;
	NSArray* _linkedServiceNames;

}

@property (nonatomic,retain) NSString * queryService;                                              //@synthesize queryService=_queryService - In the implementation block
@property (nonatomic,retain) NSString * protocolName;                                              //@synthesize protocolName=_protocolName - In the implementation block
@property (nonatomic,retain) NSString * dataUsageBundleID;                                         //@synthesize dataUsageBundleID=_dataUsageBundleID - In the implementation block
@property (nonatomic,retain) NSString * legacyIdentifier;                                          //@synthesize legacyIdentifier=_legacyIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * linkedServiceNames;                                         //@synthesize linkedServiceNames=_linkedServiceNames - In the implementation block
@property (assign,nonatomic) unsigned dataProtectionClass;                                         //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) long long linkedDeviceRelationships;                                  //@synthesize linkedDeviceRelationships=_linkedDeviceRelationships - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * pushTopic;                                                 //@synthesize pushTopic=_pushTopic - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * launchDarwinNotification; 
@property (nonatomic,readonly) NSString * launchMachServiceNotification; 
@property (nonatomic,retain) NSString * superService;                                              //@synthesize superService=_superService - In the implementation block
@property (nonatomic,readonly) BOOL allowLocalDelivery; 
@property (nonatomic,readonly) BOOL allowWiProxDelivery;                                           //@synthesize allowWiProxDelivery=_allowWiProxDelivery - In the implementation block
@property (nonatomic,readonly) BOOL allowMagnetDelivery;                                           //@synthesize allowMagnetDelivery=_allowMagnetDelivery - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUsageNotifications;                                  //@synthesize shouldShowUsageNotifications=_shouldShowUsageNotifications - In the implementation block
@property (nonatomic,readonly) BOOL allowPartialSendsToSucceed;                                    //@synthesize allowPartialSendsToSucceed=_allowPartialSendsToSucceed - In the implementation block
@property (nonatomic,readonly) BOOL canUseLargePayload;                                            //@synthesize canUseLargePayload=_canUseLargePayload - In the implementation block
@property (nonatomic,readonly) BOOL sendOnePerToken;                                               //@synthesize sendOnePerToken=_sendOnePerToken - In the implementation block
@property (nonatomic,readonly) BOOL wantsPhoneNumberAccount;                                       //@synthesize wantsPhoneNumberAccount=_wantsPhoneNumberAccount - In the implementation block
@property (nonatomic,readonly) BOOL iCloudBasedService;                                            //@synthesize iCloudBasedService=_iCloudBasedService - In the implementation block
@property (nonatomic,readonly) BOOL tunnelService;                                                 //@synthesize tunnelService=_tunnelService - In the implementation block
@property (nonatomic,readonly) BOOL holdsMessagesUntilFirstUnlock;                                 //@synthesize holdsMessagesUntilFirstUnlock=_holdsMessagesUntilFirstUnlock - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoRegisterAllHandles;                                  //@synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles - In the implementation block
@property (nonatomic,readonly) BOOL shouldRegisterUsingDSHandle;                                   //@synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle - In the implementation block
@property (nonatomic,readonly) BOOL shouldSyncAccounts;                                            //@synthesize shouldSyncAccounts=_shouldSyncAccounts - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotSyncPhoneNumberAccounts;                              //@synthesize shouldNotSyncPhoneNumberAccounts=_shouldNotSyncPhoneNumberAccounts - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowProxyDelivery;                                      //@synthesize shouldAllowProxyDelivery=_shouldAllowProxyDelivery - In the implementation block
@property (nonatomic,readonly) BOOL wantsLocalReflectedSend;                                       //@synthesize wantsLocalReflectedSend=_wantsLocalReflectedSend - In the implementation block
@property (nonatomic,readonly) BOOL wantsCheckTransportLogHint;                                    //@synthesize wantsCheckTransportLogHint=_wantsCheckTransportLogHint - In the implementation block
@property (nonatomic,readonly) BOOL watchOnlyService;                                              //@synthesize watchOnlyService=_watchOnlyService - In the implementation block
@property (nonatomic,readonly) BOOL allowsDuplicates;                                              //@synthesize allowsDuplicates=_allowsDuplicates - In the implementation block
@property (nonatomic,readonly) BOOL useiMessageCallerID;                                           //@synthesize useiMessageCallerID=_useiMessageCallerID - In the implementation block
@property (nonatomic,readonly) BOOL useFaceTimeCallerID;                                           //@synthesize useFaceTimeCallerID=_useFaceTimeCallerID - In the implementation block
@property (nonatomic,readonly) BOOL allowPendingMessagesForInactiveDevice;                         //@synthesize allowPendingMessagesForInactiveDevice=_allowPendingMessagesForInactiveDevice - In the implementation block
@property (nonatomic,readonly) BOOL allowSendingMessagesToInactiveDevice;                          //@synthesize allowSendingMessagesToInactiveDevice=_allowSendingMessagesToInactiveDevice - In the implementation block
@property (nonatomic,readonly) BOOL shouldProtectTrafficUsingClassA;                               //@synthesize shouldProtectTrafficUsingClassA=_shouldProtectTrafficUsingClassA - In the implementation block
@property (nonatomic,readonly) BOOL shouldSilentlyFailMessagesOnSwitch;                            //@synthesize shouldSilentlyFailMessagesOnSwitch=_shouldSilentlyFailMessagesOnSwitch - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowCloudDelivery;                                      //@synthesize shouldAllowCloudDelivery=_shouldAllowCloudDelivery - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowLiveMessageDelivery; 
@property (nonatomic,readonly) BOOL enabledOnlyWhenPaired;                                         //@synthesize enabledOnlyWhenPaired=_enabledOnlyWhenPaired - In the implementation block
@property (nonatomic,readonly) BOOL forceHTTPQueriesOnly;                                          //@synthesize forceHTTPQueriesOnly=_forceHTTPQueriesOnly - In the implementation block
@property (nonatomic,readonly) BOOL wantsRemoteErrors;                                             //@synthesize wantsRemoteErrors=_wantsRemoteErrors - In the implementation block
@property (nonatomic,readonly) BOOL useTransportZone;                                              //@synthesize useTransportZone=_useTransportZone - In the implementation block
@property (nonatomic,readonly) BOOL shouldFilterInactiveAliases;                                   //@synthesize shouldFilterInactiveAliases=_shouldFilterInactiveAliases - In the implementation block
@property (nonatomic,readonly) BOOL dontFilterSelfMessagesForUnknownDevice;                        //@synthesize dontFilterSelfMessagesForUnknownDevice=_dontFilterSelfMessagesForUnknownDevice - In the implementation block
@property (nonatomic,readonly) BOOL passThroughMessagesFromStorage;                                //@synthesize passThroughMessagesFromStorage=_passThroughMessagesFromStorage - In the implementation block
@property (nonatomic,readonly) BOOL pushToWakeDisabled;                                            //@synthesize pushToWakeDisabled=_pushToWakeDisabled - In the implementation block
@property (nonatomic,readonly) BOOL disableOnLowRAMDevice;                                         //@synthesize disableOnLowRAMDevice=_disableOnLowRAMDevice - In the implementation block
@property (nonatomic,readonly) BOOL wantsPendingMessageUpdates;                                    //@synthesize wantsPendingMessageUpdates=_wantsPendingMessageUpdates - In the implementation block
@property (nonatomic,readonly) BOOL allowCrossAccountMessages;                                     //@synthesize allowCrossAccountMessages=_allowCrossAccountMessages - In the implementation block
@property (nonatomic,readonly) BOOL blockRemoteTimeouts;                                           //@synthesize blockRemoteTimeouts=_blockRemoteTimeouts - In the implementation block
@property (nonatomic,readonly) BOOL allowWakingMessages;                                           //@synthesize allowWakingMessages=_allowWakingMessages - In the implementation block
@property (nonatomic,readonly) BOOL allowUrgentMessages;                                           //@synthesize allowUrgentMessages=_allowUrgentMessages - In the implementation block
@property (nonatomic,readonly) BOOL prototypingOnly;                                               //@synthesize prototypingOnly=_prototypingOnly - In the implementation block
@property (nonatomic,readonly) BOOL wantsTinkerDevices; 
@property (nonatomic,readonly) BOOL enabledOnlyOnStandaloneDevices;                                //@synthesize enabledOnlyOnStandaloneDevices=_enabledOnlyOnStandaloneDevices - In the implementation block
@property (nonatomic,readonly) BOOL tinkerMessagingOnly;                                           //@synthesize tinkerMessagingOnly=_tinkerMessagingOnly - In the implementation block
@property (nonatomic,readonly) BOOL disabledOnTinkerWatch;                                         //@synthesize disabledOnTinkerWatch=_disabledOnTinkerWatch - In the implementation block
@property (nonatomic,readonly) NSString * preferencesDomain; 
@property (nonatomic,readonly) NSString * legacyPreferencesDomain; 
@property (nonatomic,readonly) unsigned adHocServiceType;                                          //@synthesize adHocServiceType=_adHocServiceType - In the implementation block
@property (nonatomic,readonly) NSArray * duetIdentifiers; 
@property (nonatomic,readonly) NSSet * allowedTrafficClasses; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long accountSyncMinCompatibilityVersion; 
-(NSString *)pushTopic;
-(void)setLinkedServiceNames:(NSArray *)arg1 ;
-(BOOL)allowLocalDelivery;
-(BOOL)shouldSilentlyFailMessagesOnSwitch;
-(BOOL)holdsMessagesUntilFirstUnlock;
-(NSSet *)allowedTrafficClasses;
-(BOOL)iCloudBasedService;
-(BOOL)enabledOnlyWhenPaired;
-(NSString *)legacyIdentifier;
-(BOOL)allowsDuplicates;
-(NSString *)launchMachServiceNotification;
-(id)initWithServiceDictionary:(id)arg1 ;
-(BOOL)shouldShowUsageNotifications;
-(BOOL)sendOnePerToken;
-(unsigned long long)accountSyncMinCompatibilityVersion;
-(BOOL)shouldNotSyncPhoneNumberAccounts;
-(BOOL)allowUrgentMessages;
-(id)initWithServiceIdentifier:(id)arg1 ;
-(BOOL)passThroughMessagesFromStorage;
-(BOOL)wantsPhoneNumberAccount;
-(BOOL)allowWakingMessages;
-(id)_resolveShouldUseMachNotification:(id)arg1 ;
-(BOOL)wantsPendingMessageUpdates;
-(BOOL)blockRemoteTimeouts;
-(BOOL)canUseLargePayload;
-(BOOL)watchOnlyService;
-(unsigned long long)minCompatibilityVersion;
-(BOOL)wantsTinkerDevices;
-(BOOL)wantsCheckTransportLogHint;
-(BOOL)allowPendingMessagesForInactiveDevice;
-(BOOL)allowWiProxDelivery;
-(unsigned)dataProtectionClass;
-(BOOL)shouldAllowProxyDelivery;
-(BOOL)shouldRegisterUsingDSHandle;
-(BOOL)shouldFilterInactiveAliases;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(BOOL)useiMessageCallerID;
-(BOOL)pushToWakeDisabled;
-(unsigned)adHocServiceType;
-(BOOL)allowSendingMessagesToInactiveDevice;
-(id)description;
-(BOOL)prototypingOnly;
-(BOOL)shouldAllowCloudDelivery;
-(NSString *)preferencesDomain;
-(void)setPushTopic:(NSString *)arg1 ;
-(NSString *)protocolName;
-(NSString *)dataUsageBundleID;
-(long long)linkedDeviceRelationships;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)shouldAllowLiveMessageDelivery;
-(BOOL)shouldAutoRegisterAllHandles;
-(BOOL)allowMagnetDelivery;
-(BOOL)useTransportZone;
-(BOOL)wantsRemoteErrors;
-(BOOL)useFaceTimeCallerID;
-(id)_resolveProtocolName:(id)arg1 ;
-(BOOL)wantsLocalReflectedSend;
-(void)setQueryService:(NSString *)arg1 ;
-(BOOL)tinkerMessagingOnly;
-(NSString *)serviceName;
-(void)setLegacyIdentifier:(NSString *)arg1 ;
-(NSArray *)linkedServiceNames;
-(void)setProtocolName:(NSString *)arg1 ;
-(BOOL)disableOnLowRAMDevice;
-(void)setLinkedDeviceRelationships:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)shouldProtectTrafficUsingClassA;
-(id)_identifierWithProtocolAndMachServiceSuffix;
-(NSString *)identifier;
-(BOOL)dontFilterSelfMessagesForUnknownDevice;
-(NSString *)superService;
-(NSString *)legacyPreferencesDomain;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)launchDarwinNotification;
-(BOOL)enabledOnlyOnStandaloneDevices;
-(BOOL)disabledOnTinkerWatch;
-(BOOL)shouldSyncAccounts;
-(BOOL)allowPartialSendsToSucceed;
-(id)_stringToUseGivenName:(id)arg1 ;
-(NSArray *)duetIdentifiers;
-(BOOL)forceHTTPQueriesOnly;
-(void)setDataUsageBundleID:(NSString *)arg1 ;
-(void)reloadAdHocServices;
-(BOOL)allowCrossAccountMessages;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)queryService;
-(void)setSuperService:(NSString *)arg1 ;
-(BOOL)tunnelService;
@end

