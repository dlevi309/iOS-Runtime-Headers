/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMDResidentDeviceManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryBrowserDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMDRelayManagerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDUserManagementOperationDelegate.h>
#import <libobjc.A.dylib/HMDMediaActionRouterDataSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMFLocking, OS_dispatch_queue, HMDAccessoryBrowserProtocol;
@class NSArray, NSUUID, HMFMessageDispatcher, NSMutableArray, HMDUser, NSString, HMFTimer, HMDNetworkRouterClientManager, HMDAccessoryNetworkProtectionGroupRegistry, NSMutableDictionary, HMDBackingStore, HMDHomeKitVersion, HMDHomeObjectLookup, HMDHomeManager, HMDHomeLocationHandler, HMUserPresenceAuthorization, HMUserPresenceCompute, HMDHomeAdministratorHandler, NSDate, NSMutableSet, HMDHomeRemoteNotificationHandler, HMDHomePresenceMonitor, HMDUserPresenceFeeder, HMDHomeMediaSystemHandler, HMDHomePeriodicReader, NSHashTable, HMDApplicationData, NSMapTable, HMDHomeReprovisionHandler, HMDHomeObjectChangeHandler, NSObject, HMDRelayManager, HMDRoom, HMDNotificationRegistry, HMDResidentDeviceManager, HMDSharedHomeUpdateHandler, HMDResidentDevice, HMDPredicateUtilities, HMDMediaActionRouter, HMDHAPAccessory, HMFMessageDestination, NSSet;

@interface HMDHome : HMFObject <HMDBulletinIdentifiers, HMDResidentDeviceManagerDelegate, HMFLogging, HMDAccessoryBrowserDelegate, HMDHomeMessageReceiver, HMDRelayManagerDelegate, HMFTimerDelegate, HMFDumpState, HMDUserManagementOperationDelegate, HMDMediaActionRouterDataSource, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	id<HMFLocking> _lock;
	NSMutableArray* _accessories;
	NSMutableArray* _mediaSessions;
	NSMutableArray* _mediaSessionStates;
	NSMutableArray* _users;
	HMDUser* _owner;
	HMDUser* _currentUser;
	BOOL _automaticSoftwareUpdateEnabled;
	long long _minimumMediaUserPrivilege;
	BOOL _mediaPeerToPeerEnabled;
	NSString* _mediaPassword;
	BOOL _ownerUser;
	HMFTimer* _homeLocationTimer;
	BOOL _anyBTLEAccessoryReachable;
	BOOL _watchSkipVersionCheck;
	BOOL _ownerTrustZoneCapable;
	BOOL _migrationNeeded;
	BOOL _multiUserEnabled;
	BOOL _hasAnyUserAcknowledgedCameraRecordingOnboarding;
	BOOL _remoteAccessIsEnabled;
	BOOL _adminUser;
	BOOL _sharedAdmin;
	BOOL _registeredNotificationWithRemoteGateway;
	BOOL _allowsRemoteAccess;
	BOOL _migratingAfterResidentChange;
	BOOL _currentRemoteReachabilityRegistration;
	int _regionState;
	long long _atHomeLevel;
	long long _homeLocation;
	long long _protectionMode;
	HMDNetworkRouterClientManager* _routerClientManager;
	HMDAccessoryNetworkProtectionGroupRegistry* _networkProtectionGroupRegistry;
	NSUUID* _activeNetworkRouterUUID;
	NSMutableDictionary* _newlyConfiguredAccessories;
	NSUUID* _primaryNetworkRouterManagingDeviceUUID;
	HMDBackingStore* _backingStore;
	HMDHomeKitVersion* _minimumNetworkRouterSupportHomeKitVersion;
	HMDHomeKitVersion* _minHomeKitVersionForAccessoryNetworkProtectionChange;
	unsigned long long _networkRouterSupport;
	unsigned long long _networkRouterSupportDisableReason;
	NSString* _name;
	HMDHomeObjectLookup* _lookup;
	HMDHomeManager* _homeManager;
	NSUUID* _uuid;
	NSUUID* _zoneID;
	HMDHomeLocationHandler* _homeLocationHandler;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;
	HMDHomeAdministratorHandler* _administratorHandler;
	NSDate* _notificationsUpdatedTime;
	NSMutableSet* _notificationRegistrations;
	NSMutableSet* _notificationDeregistrations;
	HMDHomeRemoteNotificationHandler* _remoteNotificationHandler;
	HMDHomePresenceMonitor* _presenceMonitor;
	HMDUserPresenceFeeder* _presenceFeeder;
	HMDHomeMediaSystemHandler* _mediaSystemHandler;
	HMDHomePeriodicReader* _periodicReader;
	NSHashTable* _removeAccessoryInProgressForHMDAccessories;
	HMDApplicationData* _appData;
	unsigned long long _homeHubState;
	NSMutableDictionary* _addPendingAccessorySetupCodeHandlers;
	NSMutableDictionary* _addPendingAccessorySetupCodes;
	NSMapTable* _addPendingAccessories;
	NSMutableDictionary* _addAccessoryRequestMap;
	NSMapTable* _retrievalCompletionTuplesForAccessories;
	NSMutableDictionary* _notificationHandlerMap;
	HMDHomeReprovisionHandler* _homeReprovisionHandler;
	unsigned long long _stateHandle;
	NSHashTable* _connectionsDiscoveringSymptomsForNearbyDevices;
	HMDHomeObjectChangeHandler* _homeObjectChangeHandler;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	id<HMDAccessoryBrowserProtocol> _accessoryBrowser;
	HMDRelayManager* _relayManager;
	NSMutableArray* _rooms;
	NSMutableArray* _zones;
	NSMutableArray* _discoveredAccessories;
	NSMutableArray* _services;
	NSMutableArray* _serviceGroups;
	NSMutableArray* _actionSets;
	NSMutableArray* _triggers;
	NSMutableArray* _triggerOwnedActionSets;
	NSMutableArray* _outgoingInvitations;
	NSMutableArray* _pendingUsers;
	NSMutableArray* _removedUsers;
	NSMutableArray* _unconfiguredResidentDevices;
	HMDRoom* _roomForEntireHome;
	long long _lastKnownReachableAccessoryCount;
	long long _configurationVersion;
	long long _lastSyncedConfigurationVersion;
	long long _expectedConfigurationVersion;
	NSString* _ownerName;
	NSDate* _creationDate;
	HMDNotificationRegistry* _notificationRegistry;
	NSMutableSet* _heartbeatPingMessagesQueuedWithServer;
	NSMutableSet* _pendingResponsesForRemoteAccessSetup;
	NSMutableArray* _assistantOperations;
	NSMutableDictionary* _enableNotificationPayload;
	NSMutableDictionary* _disableNotificationPayload;
	HMFTimer* _modifyNotificationsCoalesceTimer;
	NSHashTable* _unpairedSecondaryHAPAccessories;
	HMDResidentDeviceManager* _residentDeviceManager;
	HMDSharedHomeUpdateHandler* _sharedHomeUpdateHandler;
	HMDResidentDevice* _resident;
	HMFTimer* _reachabilityDeregistrationTimer;
	NSMutableArray* _reachabilityRegisteredDevices;
	HMFTimer* _reachabilityNotificationTimer;
	NSMutableArray* _remoteReachabilityNotificationPendingAccessories;
	HMFTimer* _disableNotificationTimer;
	NSMutableDictionary* _pendingResponses;
	HMFTimer* _pendingResponsesTimer;
	NSMutableArray* _ownedTriggers;
	NSMapTable* _uuidToHAPAccessoryConfigTable;
	HMDPredicateUtilities* _predicateUtility;
	HMDHomeKitVersion* _sharedHomeSourceVersion;
	HMDMediaActionRouter* _mediaActionRouter;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,copy,readonly) NSArray * mediaSystems; 
@property (readonly) long long protectionMode; 
@property (readonly) unsigned long long networkRouterSupport; 
@property (readonly) HMDNetworkRouterClientManager * routerClientManager; 
@property (readonly) NSArray * wiFiRouterAccessories; 
@property (readonly) HMDHAPAccessory * activeNetworkRouterAccessory; 
@property (readonly) BOOL supportsRouterManagement; 
@property (nonatomic,retain) NSHashTable * removeAccessoryInProgressForHMDAccessories;                                   //@synthesize removeAccessoryInProgressForHMDAccessories=_removeAccessoryInProgressForHMDAccessories - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                                               //@synthesize appData=_appData - In the implementation block
@property (assign,nonatomic) long long atHomeLevel;                                                                      //@synthesize atHomeLevel=_atHomeLevel - In the implementation block
@property (getter=isResidentSupported,nonatomic,readonly) BOOL residentSupported; 
@property (assign,nonatomic) unsigned long long homeHubState;                                                            //@synthesize homeHubState=_homeHubState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * newlyConfiguredAccessories;                                         //@synthesize newlyConfiguredAccessories=_newlyConfiguredAccessories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addPendingAccessorySetupCodeHandlers;                                 //@synthesize addPendingAccessorySetupCodeHandlers=_addPendingAccessorySetupCodeHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addPendingAccessorySetupCodes;                                        //@synthesize addPendingAccessorySetupCodes=_addPendingAccessorySetupCodes - In the implementation block
@property (nonatomic,retain) NSMapTable * addPendingAccessories;                                                         //@synthesize addPendingAccessories=_addPendingAccessories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addAccessoryRequestMap;                                               //@synthesize addAccessoryRequestMap=_addAccessoryRequestMap - In the implementation block
@property (nonatomic,retain) NSMapTable * retrievalCompletionTuplesForAccessories;                                       //@synthesize retrievalCompletionTuplesForAccessories=_retrievalCompletionTuplesForAccessories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationHandlerMap;                                               //@synthesize notificationHandlerMap=_notificationHandlerMap - In the implementation block
@property (nonatomic,retain) NSArray * mediaSessions;                                                                    //@synthesize mediaSessions=_mediaSessions - In the implementation block
@property (nonatomic,retain) NSArray * mediaSessionStates;                                                               //@synthesize mediaSessionStates=_mediaSessionStates - In the implementation block
@property (nonatomic,retain) HMDHomeReprovisionHandler * homeReprovisionHandler;                                         //@synthesize homeReprovisionHandler=_homeReprovisionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                                             //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,readonly) NSHashTable * connectionsDiscoveringSymptomsForNearbyDevices;                             //@synthesize connectionsDiscoveringSymptomsForNearbyDevices=_connectionsDiscoveringSymptomsForNearbyDevices - In the implementation block
@property (assign,getter=isMultiUserEnabled,nonatomic) BOOL multiUserEnabled;                                            //@synthesize multiUserEnabled=_multiUserEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding;                                       //@synthesize hasAnyUserAcknowledgedCameraRecordingOnboarding=_hasAnyUserAcknowledgedCameraRecordingOnboarding - In the implementation block
@property (assign,getter=isOwnerTrustZoneCapable,nonatomic) BOOL ownerTrustZoneCapable;                                  //@synthesize ownerTrustZoneCapable=_ownerTrustZoneCapable - In the implementation block
@property (nonatomic,readonly) HMDHomeObjectChangeHandler * homeObjectChangeHandler;                                     //@synthesize homeObjectChangeHandler=_homeObjectChangeHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                                       //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) id<HMDAccessoryBrowserProtocol> accessoryBrowser;                                           //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (nonatomic,retain) HMDBackingStore * backingStore;                                                             //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,retain) HMDRelayManager * relayManager;                                                             //@synthesize relayManager=_relayManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * rooms;                                                                     //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,retain) NSMutableArray * zones;                                                                     //@synthesize zones=_zones - In the implementation block
@property (nonatomic,retain) NSMutableArray * discoveredAccessories;                                                     //@synthesize discoveredAccessories=_discoveredAccessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * services;                                                                  //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceGroups;                                                             //@synthesize serviceGroups=_serviceGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionSets;                                                                //@synthesize actionSets=_actionSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * triggers;                                                                  //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) NSMutableArray * triggerOwnedActionSets;                                                    //@synthesize triggerOwnedActionSets=_triggerOwnedActionSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * outgoingInvitations;                                                       //@synthesize outgoingInvitations=_outgoingInvitations - In the implementation block
@property (copy,readonly) NSArray * usersSupportingPresence; 
@property (nonatomic,retain) NSMutableArray * pendingUsers;                                                              //@synthesize pendingUsers=_pendingUsers - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedUsers;                                                              //@synthesize removedUsers=_removedUsers - In the implementation block
@property (nonatomic,retain) NSMutableArray * unconfiguredResidentDevices;                                               //@synthesize unconfiguredResidentDevices=_unconfiguredResidentDevices - In the implementation block
@property (nonatomic,retain) HMDRoom * roomForEntireHome;                                                                //@synthesize roomForEntireHome=_roomForEntireHome - In the implementation block
@property (assign,nonatomic) long long lastKnownReachableAccessoryCount;                                                 //@synthesize lastKnownReachableAccessoryCount=_lastKnownReachableAccessoryCount - In the implementation block
@property (assign,nonatomic) long long configurationVersion;                                                             //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (assign,nonatomic) long long lastSyncedConfigurationVersion;                                                   //@synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion - In the implementation block
@property (assign,nonatomic) long long expectedConfigurationVersion;                                                     //@synthesize expectedConfigurationVersion=_expectedConfigurationVersion - In the implementation block
@property (nonatomic,retain) NSString * ownerName;                                                                       //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,nonatomic) int regionState;                                                                            //@synthesize regionState=_regionState - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) HMDNotificationRegistry * notificationRegistry;                                             //@synthesize notificationRegistry=_notificationRegistry - In the implementation block
@property (assign,nonatomic) BOOL remoteAccessIsEnabled;                                                                 //@synthesize remoteAccessIsEnabled=_remoteAccessIsEnabled - In the implementation block
@property (nonatomic,retain) NSMutableSet * heartbeatPingMessagesQueuedWithServer;                                       //@synthesize heartbeatPingMessagesQueuedWithServer=_heartbeatPingMessagesQueuedWithServer - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingResponsesForRemoteAccessSetup;                                        //@synthesize pendingResponsesForRemoteAccessSetup=_pendingResponsesForRemoteAccessSetup - In the implementation block
@property (assign,getter=isAdminUser,nonatomic) BOOL adminUser;                                                          //@synthesize adminUser=_adminUser - In the implementation block
@property (assign,getter=isSharedAdmin,nonatomic) BOOL sharedAdmin;                                                      //@synthesize sharedAdmin=_sharedAdmin - In the implementation block
@property (assign,nonatomic) BOOL watchSkipVersionCheck;                                                                 //@synthesize watchSkipVersionCheck=_watchSkipVersionCheck - In the implementation block
@property (assign,nonatomic) BOOL registeredNotificationWithRemoteGateway;                                               //@synthesize registeredNotificationWithRemoteGateway=_registeredNotificationWithRemoteGateway - In the implementation block
@property (assign,nonatomic) BOOL allowsRemoteAccess;                                                                    //@synthesize allowsRemoteAccess=_allowsRemoteAccess - In the implementation block
@property (assign,getter=isMigratingAfterResidentChange,nonatomic) BOOL migratingAfterResidentChange;                    //@synthesize migratingAfterResidentChange=_migratingAfterResidentChange - In the implementation block
@property (nonatomic,retain) NSMutableArray * assistantOperations;                                                       //@synthesize assistantOperations=_assistantOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * enableNotificationPayload;                                          //@synthesize enableNotificationPayload=_enableNotificationPayload - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * disableNotificationPayload;                                         //@synthesize disableNotificationPayload=_disableNotificationPayload - In the implementation block
@property (nonatomic,retain) HMFTimer * modifyNotificationsCoalesceTimer;                                                //@synthesize modifyNotificationsCoalesceTimer=_modifyNotificationsCoalesceTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * unpairedSecondaryHAPAccessories;                                            //@synthesize unpairedSecondaryHAPAccessories=_unpairedSecondaryHAPAccessories - In the implementation block
@property (nonatomic,readonly) HMDResidentDeviceManager * residentDeviceManager;                                         //@synthesize residentDeviceManager=_residentDeviceManager - In the implementation block
@property (nonatomic,readonly) HMDSharedHomeUpdateHandler * sharedHomeUpdateHandler;                                     //@synthesize sharedHomeUpdateHandler=_sharedHomeUpdateHandler - In the implementation block
@property (nonatomic,retain) HMDResidentDevice * resident;                                                               //@synthesize resident=_resident - In the implementation block
@property (getter=isCurrentDevicePrimaryResident,readonly) BOOL currentDevicePrimaryResident; 
@property (assign,nonatomic) BOOL currentRemoteReachabilityRegistration;                                                 //@synthesize currentRemoteReachabilityRegistration=_currentRemoteReachabilityRegistration - In the implementation block
@property (assign) BOOL migrationNeeded;                                                                                 //@synthesize migrationNeeded=_migrationNeeded - In the implementation block
@property (nonatomic,retain) HMFTimer * reachabilityDeregistrationTimer;                                                 //@synthesize reachabilityDeregistrationTimer=_reachabilityDeregistrationTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * reachabilityRegisteredDevices;                                             //@synthesize reachabilityRegisteredDevices=_reachabilityRegisteredDevices - In the implementation block
@property (nonatomic,retain) HMFTimer * reachabilityNotificationTimer;                                                   //@synthesize reachabilityNotificationTimer=_reachabilityNotificationTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteReachabilityNotificationPendingAccessories;                          //@synthesize remoteReachabilityNotificationPendingAccessories=_remoteReachabilityNotificationPendingAccessories - In the implementation block
@property (nonatomic,retain) HMFTimer * disableNotificationTimer;                                                        //@synthesize disableNotificationTimer=_disableNotificationTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingResponses;                                                     //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,retain) HMFTimer * pendingResponsesTimer;                                                           //@synthesize pendingResponsesTimer=_pendingResponsesTimer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * residentCapableDevices; 
@property (nonatomic,copy,readonly) NSArray * residentEnabledDevices; 
@property (nonatomic,retain) NSMutableArray * ownedTriggers;                                                             //@synthesize ownedTriggers=_ownedTriggers - In the implementation block
@property (nonatomic,retain) NSMapTable * uuidToHAPAccessoryConfigTable;                                                 //@synthesize uuidToHAPAccessoryConfigTable=_uuidToHAPAccessoryConfigTable - In the implementation block
@property (copy) NSArray * accessories;                                                                                  //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,readonly) NSArray * hapAccessories; 
@property (nonatomic,readonly) HMDPredicateUtilities * predicateUtility;                                                 //@synthesize predicateUtility=_predicateUtility - In the implementation block
@property (nonatomic,retain) HMDHomeKitVersion * sharedHomeSourceVersion;                                                //@synthesize sharedHomeSourceVersion=_sharedHomeSourceVersion - In the implementation block
@property (nonatomic,readonly) NSUUID * spiClientIdentifier; 
@property (nonatomic,retain) HMDMediaActionRouter * mediaActionRouter;                                                   //@synthesize mediaActionRouter=_mediaActionRouter - In the implementation block
@property (assign) long long protectionMode;                                                                             //@synthesize protectionMode=_protectionMode - In the implementation block
@property (assign) unsigned long long networkRouterSupportDisableReason;                                                 //@synthesize networkRouterSupportDisableReason=_networkRouterSupportDisableReason - In the implementation block
@property (assign) unsigned long long networkRouterSupport;                                                              //@synthesize networkRouterSupport=_networkRouterSupport - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterClientManager * routerClientManager;                                        //@synthesize routerClientManager=_routerClientManager - In the implementation block
@property (nonatomic,retain) HMDAccessoryNetworkProtectionGroupRegistry * networkProtectionGroupRegistry;                //@synthesize networkProtectionGroupRegistry=_networkProtectionGroupRegistry - In the implementation block
@property (retain) NSUUID * activeNetworkRouterUUID;                                                                     //@synthesize activeNetworkRouterUUID=_activeNetworkRouterUUID - In the implementation block
@property (nonatomic,retain) NSUUID * primaryNetworkRouterManagingDeviceUUID;                                            //@synthesize primaryNetworkRouterManagingDeviceUUID=_primaryNetworkRouterManagingDeviceUUID - In the implementation block
@property (nonatomic,retain) HMDHomeKitVersion * minimumNetworkRouterSupportHomeKitVersion;                              //@synthesize minimumNetworkRouterSupportHomeKitVersion=_minimumNetworkRouterSupportHomeKitVersion - In the implementation block
@property (nonatomic,retain) HMDHomeKitVersion * minHomeKitVersionForAccessoryNetworkProtectionChange;                   //@synthesize minHomeKitVersionForAccessoryNetworkProtectionChange=_minHomeKitVersionForAccessoryNetworkProtectionChange - In the implementation block
@property (readonly) HMFMessageDestination * messageDestination; 
@property (nonatomic,retain) NSString * name;                                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) HMDHomeObjectLookup * lookup;                                                             //@synthesize lookup=_lookup - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                                        //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * zoneID;                                                                          //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) HMDHomeLocationHandler * homeLocationHandler;                                               //@synthesize homeLocationHandler=_homeLocationHandler - In the implementation block
@property (nonatomic,retain) HMUserPresenceAuthorization * presenceAuthStatus;                                           //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,retain) HMUserPresenceCompute * presenceComputeStatus;                                              //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
@property (readonly) HMDHomeAdministratorHandler * administratorHandler;                                                 //@synthesize administratorHandler=_administratorHandler - In the implementation block
@property (getter=isAnyBTLEAccessoryReachable,nonatomic,readonly) BOOL anyBTLEAccessoryReachable;                        //@synthesize anyBTLEAccessoryReachable=_anyBTLEAccessoryReachable - In the implementation block
@property (nonatomic,copy) NSDate * notificationsUpdatedTime;                                                            //@synthesize notificationsUpdatedTime=_notificationsUpdatedTime - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationRegistrations;                                                   //@synthesize notificationRegistrations=_notificationRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationDeregistrations;                                                 //@synthesize notificationDeregistrations=_notificationDeregistrations - In the implementation block
@property (nonatomic,readonly) long long homeLocation;                                                                   //@synthesize homeLocation=_homeLocation - In the implementation block
@property (nonatomic,readonly) HMDHomeRemoteNotificationHandler * remoteNotificationHandler;                             //@synthesize remoteNotificationHandler=_remoteNotificationHandler - In the implementation block
@property (nonatomic,readonly) HMDHomePresenceMonitor * presenceMonitor;                                                 //@synthesize presenceMonitor=_presenceMonitor - In the implementation block
@property (nonatomic,readonly) HMDUserPresenceFeeder * presenceFeeder;                                                   //@synthesize presenceFeeder=_presenceFeeder - In the implementation block
@property (nonatomic,readonly) HMDHomeMediaSystemHandler * mediaSystemHandler;                                           //@synthesize mediaSystemHandler=_mediaSystemHandler - In the implementation block
@property (nonatomic,readonly) HMDHomePeriodicReader * periodicReader;                                                   //@synthesize periodicReader=_periodicReader - In the implementation block
@property (nonatomic,copy,readonly) NSArray * enabledResidents; 
@property (getter=isCurrentDeviceAvailableResident,nonatomic,readonly) BOOL currentDeviceAvailableResident; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (__weak,readonly) HMDHome * home; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(void)_initialize;
+(BOOL)hasMessageReceiverChildren;
+(id)zoneIDFromHomeUUID:(id)arg1 ;
+(id)getBuiltinActionSets;
+(id)filterUsersSupportingPresence:(id)arg1 ;
+(id)notificationPayloadForChangedCharacterisitics:(id)arg1 destinationIsXPCTransport:(BOOL)arg2 ;
+(BOOL)isCarPlayPaired;
+(void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteWrite:(id)arg3 message:(id)arg4 ;
+(void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteRead:(id)arg3 ;
+(id)supportedAccessoryClasses;
+(BOOL)isObjectContainedInHome:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(id)owner;
-(NSDate *)creationDate;
-(NSString *)contextID;
-(NSUUID *)zoneID;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)ownerName;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(HMDHome *)home;
-(id)users;
-(id)currentUser;
-(id)shortDescription;
-(void)_removeService:(id)arg1 ;
-(id)accessoryWithIdentifier:(id)arg1 ;
-(void)_registerForNotifications;
-(HMDBackingStore *)backingStore;
-(NSMutableArray *)services;
-(unsigned long long)stateHandle;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(id)addName:(id)arg1 ;
-(NSArray *)mediaSystems;
-(NSArray *)accessories;
-(id)mediaPassword;
-(long long)minimumMediaUserPrivilege;
-(BOOL)isMediaPeerToPeerEnabled;
-(id)urlString;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setServices:(NSMutableArray *)arg1 ;
-(HMDRoom *)roomForEntireHome;
-(NSMutableArray *)rooms;
-(void)addAccessory:(id)arg1 ;
-(NSMutableArray *)actionSets;
-(NSMutableArray *)serviceGroups;
-(NSMutableArray *)triggers;
-(NSMutableArray *)zones;
-(void)removeService:(id)arg1 ;
-(void)setBackingStore:(HMDBackingStore *)arg1 ;
-(BOOL)evaluatePredicate:(id)arg1 ;
-(long long)configurationVersion;
-(void)setConfigurationVersion:(long long)arg1 ;
-(BOOL)migrationNeeded;
-(void)setOwnerName:(NSString *)arg1 ;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(void)setTriggers:(NSMutableArray *)arg1 ;
-(id)dumpState;
-(void)setZones:(NSMutableArray *)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)accessoryWithUUID:(id)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(void)setPresenceComputeStatus:(HMUserPresenceCompute *)arg1 ;
-(NSMutableArray *)triggerOwnedActionSets;
-(HMFMessageDestination *)messageDestination;
-(id)mediaProfileWithUUID:(id)arg1 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSMutableArray *)outgoingInvitations;
-(long long)homeLocation;
-(void)setMultiUserEnabled:(BOOL)arg1 ;
-(BOOL)hasAnyUserAcknowledgedCameraRecordingOnboarding;
-(void)setHasAnyUserAcknowledgedCameraRecordingOnboarding:(BOOL)arg1 ;
-(unsigned long long)homeHubState;
-(BOOL)isAdminUser;
-(void)setAdminUser:(BOOL)arg1 ;
-(BOOL)isOwnerUser;
-(void)setOwnerUser:(BOOL)arg1 ;
-(NSDate *)notificationsUpdatedTime;
-(void)setNotificationsUpdatedTime:(NSDate *)arg1 ;
-(BOOL)isAutomaticSoftwareUpdateEnabled;
-(void)setAutomaticSoftwareUpdateEnabled:(BOOL)arg1 ;
-(void)setMinimumMediaUserPrivilege:(long long)arg1 ;
-(void)setMediaPeerToPeerEnabled:(BOOL)arg1 ;
-(void)setMediaPassword:(id)arg1 ;
-(long long)protectionMode;
-(void)setProtectionMode:(long long)arg1 ;
-(unsigned long long)networkRouterSupportDisableReason;
-(void)setNetworkRouterSupportDisableReason:(unsigned long long)arg1 ;
-(unsigned long long)networkRouterSupport;
-(void)setNetworkRouterSupport:(unsigned long long)arg1 ;
-(id)roomWithUUID:(id)arg1 ;
-(id)triggerOwnedActionSetWithUUID:(id)arg1 ;
-(id)actionSetWithUUID:(id)arg1 ;
-(id)zoneWithUUID:(id)arg1 ;
-(id)serviceGroupWithUUID:(id)arg1 ;
-(id)triggerWithUUID:(id)arg1 ;
-(void)removeAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isMultiUserEnabled;
-(id)roomWithName:(id)arg1 ;
-(id)zoneWithName:(id)arg1 ;
-(id)serviceGroupWithName:(id)arg1 ;
-(id)actionSetWithName:(id)arg1 ;
-(id)triggerWithName:(id)arg1 ;
-(void)_removeAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeCharacteristic:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(NSMutableArray *)discoveredAccessories;
-(void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4 ;
-(NSMutableDictionary *)pendingResponses;
-(void)removeCharacteristic:(id)arg1 ;
-(void)executeActionSet:(id)arg1 ;
-(void)setAccessoryBrowser:(id<HMDAccessoryBrowserProtocol>)arg1 ;
-(id<HMDAccessoryBrowserProtocol>)accessoryBrowser;
-(void)_registerForMessages;
-(HMDResidentDeviceManager *)residentDeviceManager;
-(id)replaceName:(id)arg1 withNewName:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)isSharedAdmin;
-(HMDHomeAdministratorHandler *)administratorHandler;
-(HMDResidentDevice *)resident;
-(NSSet *)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(NSUUID *)contextSPIUniqueIdentifier;
-(id)firmwareUpdateBulletinContext;
-(BOOL)isCurrentDevicePrimaryResident;
-(HMDHomePresenceMonitor *)presenceMonitor;
-(void)handleXPCConnectionInvalidated:(id)arg1 ;
-(void)_handleAddRoomModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddZoneModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddServiceGroupModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddActionSetModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddTimerTriggerModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddEventTriggerModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddAccessoryModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddUserModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddOutgoingHomeInvitationModel:(id)arg1 message:(id)arg2 ;
-(HMDHomeMediaSystemHandler *)mediaSystemHandler;
-(HMDAccessoryNetworkProtectionGroupRegistry *)networkProtectionGroupRegistry;
-(void)_handleRemoveRoomModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveZoneModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveServiceGroupModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveActionSetModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveAccessoryModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveUserModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveTriggerModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveOutgoingHomeInvitationModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2 ;
-(id)outgoingInvitationWithUUID:(id)arg1 ;
-(void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2 ;
-(id)mediaSystemWithUUID:(id)arg1 ;
-(id)emptyModelObjectWithChangeType:(unsigned long long)arg1 ;
-(HMDHomeLocationHandler *)homeLocationHandler;
-(void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2 ;
-(void)configureBulletinNotification;
-(void)_updateCurrentUserForSharedHome;
-(unsigned long long)deriveNetworkRouterSupport:(unsigned long long)arg1 ;
-(void)_deregisterStateHandler;
-(void)unconfigure;
-(NSUUID *)spiClientIdentifier;
-(int)regionState;
-(long long)atHomeLevel;
-(NSMutableArray *)removedUsers;
-(NSHashTable *)unpairedSecondaryHAPAccessories;
-(NSMutableSet *)notificationRegistrations;
-(NSMutableSet *)notificationDeregistrations;
-(HMDSharedHomeUpdateHandler *)sharedHomeUpdateHandler;
-(HMDHomeKitVersion *)sharedHomeSourceVersion;
-(NSMutableDictionary *)addAccessoryRequestMap;
-(BOOL)_hasPairedReachableBTLEAccessories;
-(void)setAnyBTLEAccessoryReachable:(BOOL)arg1 ;
-(NSMapTable *)addPendingAccessories;
-(NSMutableDictionary *)addPendingAccessorySetupCodeHandlers;
-(NSMutableDictionary *)addPendingAccessorySetupCodes;
-(void)saveToCurrentAccountWithReason:(id)arg1 ;
-(HMFTimer *)disableNotificationTimer;
-(void)setDisableNotificationTimer:(HMFTimer *)arg1 ;
-(void)_cleanAddAccessoryOperations;
-(void)_handleAppTermination:(id)arg1 ;
-(void)_startHomeNotificationDeregistrationTimer;
-(void)_disableNotificationsForClient:(id)arg1 ;
-(NSHashTable *)removeAccessoryInProgressForHMDAccessories;
-(void)setRemoveAccessoryInProgressForHMDAccessories:(NSHashTable *)arg1 ;
-(NSMapTable *)retrievalCompletionTuplesForAccessories;
-(void)setRetrievalCompletionTuplesForAccessories:(NSMapTable *)arg1 ;
-(void)setAddPendingAccessories:(NSMapTable *)arg1 ;
-(void)setAddPendingAccessorySetupCodeHandlers:(NSMutableDictionary *)arg1 ;
-(id)filterBuiltinActionSets:(id)arg1 ;
-(id)createActionSetWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 ;
-(void)addMediaSession:(id)arg1 ;
-(void)addMediaSessionState:(id)arg1 ;
-(void)__addMediaSession:(id)arg1 ;
-(id)mediaSessionStateWithIdentifier:(id)arg1 ;
-(id)mediaSessionWithIdentifier:(id)arg1 ;
-(void)removeMediaSession:(id)arg1 ;
-(NSUUID *)activeNetworkRouterUUID;
-(void)_evaluateNetworkProtectionAndRouterManagement;
-(void)_addTransactionForActiveNetworkRouterAccessory:(id)arg1 ;
-(HMDHomePeriodicReader *)periodicReader;
-(HMDUserPresenceFeeder *)presenceFeeder;
-(HMDHomeReprovisionHandler *)homeReprovisionHandler;
-(void)setupBackingStore;
-(void)updateHomeLocation;
-(void)_purgeResidentUsers;
-(NSArray *)mediaSessions;
-(void)_registerPairedAccessory:(id)arg1 btleTransport:(BOOL)arg2 airPlay:(BOOL)arg3 ;
-(id)_createBuiltinActionSets;
-(void)_addUserToIdentityRegistry:(id)arg1 ;
-(void)_removeUser:(id)arg1 ;
-(void)addUser:(id)arg1 ;
-(id)_addMediaSessionForCurrentAccessory:(id)arg1 ;
-(void)resubscribeForNotificationsOnResident:(id)arg1 ;
-(void)_evaluateShouldRelaunchAndSetRelaunch;
-(void)reEvaluateHomeHubState;
-(void)migrateAfterResidentChange;
-(void)_updateWoWState:(id)arg1 ;
-(void)_updateConfigurationVersion;
-(void)setMediaActionRouter:(HMDMediaActionRouter *)arg1 ;
-(void)setRelayManager:(HMDRelayManager *)arg1 ;
-(HMDRelayManager *)relayManager;
-(void)_updateCloudRelaySupport;
-(void)_addUserToContainer:(id)arg1 ;
-(void)_subscribeForNotificationFromRemoteGateway:(BOOL)arg1 ;
-(void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 viaDevice:(id)arg4 ;
-(void)_modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3 ;
-(NSMutableDictionary *)enableNotificationPayload;
-(NSMutableDictionary *)disableNotificationPayload;
-(HMFTimer *)modifyNotificationsCoalesceTimer;
-(void)setModifyNotificationsCoalesceTimer:(HMFTimer *)arg1 ;
-(id)_notificationPayloadsForRemoteGateway:(BOOL)arg1 ;
-(void)_modifyCharacteristicNotificationsOnResident:(id)arg1 mediaNotifications:(id)arg2 enableNotification:(BOOL)arg3 ;
-(BOOL)registeredNotificationWithRemoteGateway;
-(void)_subscribeForHomeNotificationsFromRemoteGateway:(BOOL)arg1 ;
-(void)setRegisteredNotificationWithRemoteGateway:(BOOL)arg1 ;
-(void)_enableMediaNotifications:(BOOL)arg1 forMediaAccessory:(id)arg2 ;
-(void)_modifyCharacteristicNotifications:(id)arg1 mediaNotifications:(id)arg2 enableNotification:(BOOL)arg3 withDevice:(id)arg4 ;
-(id)_characteristicNotificationPayloadsOnDirectTransports:(BOOL)arg1 ;
-(NSArray *)residentEnabledDevices;
-(void)_modifyCharacteristicNotificationsOnRemoteGateways:(id)arg1 mediaNotifications:(id)arg2 enableNotification:(BOOL)arg3 ;
-(id)_residentUsers;
-(void)_enableNotificationsForDevices:(id)arg1 ;
-(HMDNotificationRegistry *)notificationRegistry;
-(void)_disableNotificationsForDevices:(id)arg1 ;
-(void)_resubscribeForNotificationsOnResident:(id)arg1 ;
-(void)_handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2 ;
-(id)_populateCharacteristicsThatNeedNotificationsFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_populatePropertiesThatNeedNotificationsFromDictionary:(id)arg1 ;
-(id)homeConfigurationModelObjectWithChangeType:(unsigned long long)arg1 ;
-(void)__saveConfigurationVersionTransaction;
-(long long)expectedConfigurationVersion;
-(void)setExpectedConfigurationVersion:(long long)arg1 ;
-(void)_saveSharedHomeToAccountWithReason:(id)arg1 postSyncNotification:(BOOL)arg2 options:(id)arg3 ;
-(id)sharedHomeModel;
-(void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3 ;
-(void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3 objectChange:(id)arg4 incrementGenerationCounter:(BOOL)arg5 ;
-(void)_updateExpectConfigurationVersion;
-(BOOL)_shouldIncrementGenerationCounterForReason:(id)arg1 ;
-(void)_configureBulletinNotification;
-(BOOL)_isSharedHomeVersionTrustZoneCapable;
-(void)setOwnerTrustZoneCapable:(BOOL)arg1 ;
-(BOOL)isOwnerTrustZoneCapable;
-(void)_removeAllHomeContentsAndAccessoryPairings:(BOOL)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)validateName:(id)arg1 ;
-(void)_reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2 ;
-(NSMutableArray *)reachabilityRegisteredDevices;
-(void)_updateReachabilityChangeToRegisteredDevices:(id)arg1 ;
-(void)setRegionState:(int)arg1 ;
-(void)_updateHomeLocation;
-(void)_writeCharacteristicValues:(id)arg1 requestMessage:(id)arg2 source:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(NSMutableArray *)ownedTriggers;
-(void)_getRunTimeStateUpdateWithOptions:(unsigned long long)arg1 includeMediaAccessoryState:(BOOL)arg2 includeResidentDeviceState:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_residentDeviceForResidentUser:(id)arg1 ;
-(id)residentDevicesIncludingRemoteGateways;
-(void)_readProfileState:(id)arg1 viaDevice:(id)arg2 message:(id)arg3 ;
-(void)redispatchMediaReadRequests:(id)arg1 viaDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)hapAccessoriesForServer:(id)arg1 linkType:(long long)arg2 ;
-(id)hapAccessoriesForServer:(id)arg1 ;
-(id)_discoveredAccessoriesForServer:(id)arg1 linkType:(long long)arg2 ;
-(HMFTimer *)reachabilityDeregistrationTimer;
-(void)setReachabilityDeregistrationTimer:(HMFTimer *)arg1 ;
-(void)_registerForReachabilityChangeNotifications:(id)arg1 mode:(BOOL)arg2 ;
-(BOOL)currentRemoteReachabilityRegistration;
-(void)_updateRemoteReachability:(BOOL)arg1 accessories:(id)arg2 ;
-(void)setCurrentRemoteReachabilityRegistration:(BOOL)arg1 ;
-(void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 ;
-(void)_notifyClientsOfAccessoryInfoUpdatedForAccessories:(id)arg1 shouldRefreshBadge:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_handleRename:(id)arg1 ;
-(void)_handleAddRoom:(id)arg1 ;
-(void)_handleRemoveRoom:(id)arg1 ;
-(void)_handleAddZone:(id)arg1 ;
-(void)_handleRemoveZone:(id)arg1 ;
-(void)_handleAddServiceGroup:(id)arg1 ;
-(void)_handleRemoveServiceGroup:(id)arg1 ;
-(void)_handleAddActionSet:(id)arg1 ;
-(void)_handleRemoveActionSet:(id)arg1 ;
-(void)_handleRemoveTrigger:(id)arg1 ;
-(void)_handleUpdateUserAccess:(id)arg1 ;
-(void)_handleUpdateUserCamerasAccessLevel:(id)arg1 ;
-(void)_handleRemoveUser:(id)arg1 ;
-(void)_handleSetAppData:(id)arg1 ;
-(void)_handleUpdateMinimumMediaUserPrivilege:(id)arg1 ;
-(void)_handleUpdateMediaPeerToPeerEnabled:(id)arg1 ;
-(void)_handleUpdateMediaPassword:(id)arg1 ;
-(void)_handleEnableMultiUserRequest:(id)arg1 ;
-(void)_handleSetHasAnyUserAcknowledgedCameraRecordingOnboardingRequest:(id)arg1 ;
-(void)_handleUpdateNetworkProtection:(id)arg1 ;
-(void)_handleUpdateOutgoingInvitationState:(id)arg1 ;
-(void)_handleAddEventTrigger:(id)arg1 ;
-(void)_handleAddTimerTrigger:(id)arg1 ;
-(void)_handleAddTriggers:(id)arg1 ;
-(void)_handleAddAccessory:(id)arg1 ;
-(void)_handleAddAccessories:(id)arg1 ;
-(void)_handleUserConsentResponseForAccessory:(id)arg1 ;
-(void)_handleContinuePairingAccessory:(id)arg1 ;
-(void)_handleCancelPairingAccessory:(id)arg1 ;
-(void)_handleRemoveAccessory:(id)arg1 ;
-(void)_handleUserInvitations:(id)arg1 ;
-(void)_handleOutgoingInvitations:(id)arg1 ;
-(void)_handleCreateUniquePSKClientConfiguration:(id)arg1 ;
-(void)_handleRemoveClientConfiguration:(id)arg1 ;
-(void)_handleHomeLocationUpdateFromSharedAdmin:(id)arg1 ;
-(void)_handleSetMinimumNetworkRouterHomeKitVersion:(id)arg1 ;
-(void)_handleSetMinHomeKitVersionForAccessoryNetworkProtectionChange:(id)arg1 ;
-(void)_handleUpdatePresenceConsent:(id)arg1 ;
-(void)_handleExecuteActionSet:(id)arg1 ;
-(void)_handleMultipleCharacteristicWrite:(id)arg1 ;
-(void)_handleMultipleCharacteristicRead:(id)arg1 ;
-(void)_handleCharacteristicEnableNotification:(id)arg1 ;
-(void)_handleModifyCharacteristicNotifications:(id)arg1 ;
-(void)_handleAccessoryReachabilityRegistrationAndEnable:(id)arg1 ;
-(void)_handleAccessoryReachabilityRegistration:(id)arg1 ;
-(void)_handleRequestHomeDataSync:(id)arg1 ;
-(void)_handleCharacterisiticsChangedNotification:(id)arg1 ;
-(void)_handleAddUserToRelayAccessories:(id)arg1 ;
-(void)_handleAddRelayAccessTokens:(id)arg1 ;
-(void)_handleQueryUserIsAdmin:(id)arg1 ;
-(void)_handleAccessoryReachabilityChange:(id)arg1 ;
-(void)_handleExecuteConfirmationOfTrigger:(id)arg1 ;
-(void)handleEvaluatePredicateMessage:(id)arg1 ;
-(void)_handleUpdateAutomaticSoftwareUpdate:(id)arg1 ;
-(void)_handleFetchAccessories:(id)arg1 ;
-(void)executeActionsFromMessage:(id)arg1 ;
-(void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg1 ;
-(void)_handleEnableNotifications:(id)arg1 ;
-(void)_handleMediaPropertiesWrite:(id)arg1 ;
-(void)_handleMediaPropertiesRead:(id)arg1 ;
-(void)_handleStartDiscoveringSymptomsForNearbyDevicesMessage:(id)arg1 ;
-(void)_handleStopDiscoveringSymptomsForNearbyDevicesMessage:(id)arg1 ;
-(void)_handleAssistantAccessControlUpdate:(id)arg1 ;
-(void)_handleMediaContentProfileAccessControlUpdate:(id)arg1 ;
-(void)_handleRemoteUserClientCloudShareRequest:(id)arg1 ;
-(void)_registerStateHandler;
-(void)handleNetworkRouterProfileAdded:(id)arg1 ;
-(void)handleNetworkRouterProfileRemoved:(id)arg1 ;
-(void)handleCurrentUserPrivilegeChanged:(id)arg1 ;
-(void)handleActiveAccountChanged:(id)arg1 ;
-(void)handleAccountHandlesUpdated:(id)arg1 ;
-(void)handleHomeUIServiceTermination:(id)arg1 ;
-(void)handleAppTermination:(id)arg1 ;
-(void)handleAccessoryReachabilityChangeNotification:(id)arg1 ;
-(void)handleRemovedMediaSessions:(id)arg1 ;
-(void)handleDidReceiveIDSMessageWithNoListener:(id)arg1 ;
-(id)userWithUUID:(id)arg1 ;
-(id)removeName:(id)arg1 ;
-(void)_notifyRetrievalError:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3 accessoryOperationBlock:(/*^block*/id)arg4 ;
-(void)_handleAddAccessoryWithDescription:(id)arg1 ;
-(void)_handleLegacyAddAccessory:(id)arg1 ;
-(BOOL)checkForNetworkRouterSupport:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSArray *)wiFiRouterAccessories;
-(void)removeAddAccessoryRequestWithIdentifier:(id)arg1 ;
-(BOOL)__shouldAllowAddingWiFiRouterAccessoryWithRequestMessage:(id)arg1 error:(id*)arg2 ;
-(void)saveAddAccessoryRequest:(id)arg1 ;
-(BOOL)_shouldAllowAddingAccessoryOfCategory:(id)arg1 requestMessage:(id)arg2 error:(id*)arg3 ;
-(void)_continuePairingAfterUserConsentWithAccessoryUUID:(id)arg1 message:(id)arg2 ;
-(/*^block*/id)_setupCodeProviderForMessage:(id)arg1 ;
-(void)_removePendingAccessoryAdd:(id)arg1 ;
-(void)_pairAccessoryWithAccessoryDescription:(id)arg1 unpairedAccessory:(id)arg2 configuration:(id)arg3 pairingEvent:(id)arg4 requestMessage:(id)arg5 ;
-(void)_createUniquePSKClientConfigurationWithRequestMessage:(id)arg1 pairingEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_primaryAccessoryForServer:(id)arg1 ;
-(void)_processAccessoriesToAddForUnpairedAccessory:(id)arg1 certificationStatus:(long long)arg2 accessoryServer:(id)arg3 networkCredential:(id)arg4 message:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_setupDescriptionFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldAllowAddingAccessoryWithDescription:(id)arg1 requestMessage:(id)arg2 error:(id*)arg3 ;
-(void)_continuePairingAfterUserConsentWithAccessoryDescription:(id)arg1 message:(id)arg2 ;
-(void)_pairAccessoryWithAccessoryDescription:(id)arg1 configuration:(id)arg2 pairingEvent:(id)arg3 progressHandler:(/*^block*/id)arg4 requestMessage:(id)arg5 ;
-(id)retrieveAndResetNewlyConfiguredAccessoriesForAddSessionIdentifier:(id)arg1 ;
-(void)_setupActiveNetworkRouterAccessory:(id)arg1 replacedAccessories:(id)arg2 ;
-(void)_cancelPairingWithAccessoryDescription:(id)arg1 ;
-(void)_handleUserConsentForAccessoryReplacement:(id)arg1 consent:(BOOL)arg2 message:(id)arg3 ;
-(void)__handleAddHAPAccessoryModel:(id)arg1 message:(id)arg2 ;
-(void)__handleAddMediaAccessoryModel:(id)arg1 message:(id)arg2 ;
-(NSMapTable *)uuidToHAPAccessoryConfigTable;
-(void)addNewlyConfiguredAccessories:(id)arg1 addSessionIdentifier:(id)arg2 ;
-(id)_getTunnelAccessoryUpdate:(id)arg1 ;
-(BOOL)remoteAccessIsEnabled;
-(void)remoteAccessEnabled:(BOOL)arg1 ;
-(void)_addAllUsersToAccessory:(id)arg1 ;
-(void)notifyOfNewlyAddedAccessoryByThisOwnerDevice:(id)arg1 ;
-(void)notifyOfAddedAccessory:(id)arg1 ;
-(void)reevaluateAccessoryInfo;
-(void)_notifyClientOfNewlyAddedAccessories:(id)arg1 requestMessage:(id)arg2 ;
-(void)_handleRemoveAccessoryAfterUserConsent:(id)arg1 message:(id)arg2 ;
-(void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2 ;
-(void)_handleRemovedPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2 ;
-(void)notifyOfRemovedAccessory:(id)arg1 source:(unsigned long long)arg2 ;
-(void)_removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reevaluateAccessoryInfoWithBadgeRefresh:(BOOL)arg1 ;
-(id)prepareUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 type:(unsigned long long)arg3 model:(id)arg4 error:(id*)arg5 ;
-(void)_removeClientConfigurationWithIdentifier:(id)arg1 ;
-(void)_removeAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3 ;
-(void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg1 withCompletion:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)_deregisterPairedAccessory:(id)arg1 ;
-(void)removeMediaSessionState:(id)arg1 ;
-(void)_removeAccessoriesForPrimaryAccessory:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeAccessoriesFromContainers:(id)arg1 ;
-(id)_removeAccessoriesCommon:(id)arg1 message:(id)arg2 ;
-(void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDPredicateUtilities *)predicateUtility;
-(void)dispatchRequestToEvaluateCondition:(id)arg1 forCharacteristics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1 ;
-(void)_handleUpdatedCharacteristics:(id)arg1 accessoryServer:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4 ;
-(void)_deregisterDeviceForReachabilityNotification:(id)arg1 ;
-(NSMutableArray *)remoteReachabilityNotificationPendingAccessories;
-(id)getReachabilityTupleForAccessoryUUID:(id)arg1 ;
-(HMFTimer *)reachabilityNotificationTimer;
-(void)setReachabilityNotificationTimer:(HMFTimer *)arg1 ;
-(long long)reachableAccessories;
-(long long)lastKnownReachableAccessoryCount;
-(void)setLastKnownReachableAccessoryCount:(long long)arg1 ;
-(void)getReachableIPAccessories:(unsigned long long*)arg1 btleAccessories:(unsigned long long*)arg2 mediaAccessories:(unsigned long long*)arg3 ;
-(void)_presentPairingPasswordDialogForAccessory:(id)arg1 setupCodeAvailable:(/*^block*/id)arg2 ;
-(void)_processPairingRequestForMessage:(id)arg1 cancelPairing:(BOOL)arg2 ;
-(void)_processLegacyPairingRequestForMessage:(id)arg1 cancelPairing:(BOOL)arg2 ;
-(void)_cancelPairingWithAccessoryUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)getTransactionFromHAPAccessory:(id)arg1 hmdAccessory:(id)arg2 uuid:(id)arg3 bridgeUUID:(id)arg4 configurationAppIdentifier:(id)arg5 objectChangeType:(unsigned long long)arg6 ;
-(BOOL)getUpdateTransactionForAccessory:(id)arg1 hapAccessory:(id)arg2 accessoryTransaction:(id)arg3 addSvcTransactions:(id*)arg4 updateSvcTransactions:(id*)arg5 removeSvcTransactions:(id*)arg6 ;
-(void)_processProductDataForNewlyAddedAccessory:(id)arg1 transaction:(id)arg2 ;
-(BOOL)_addOwnerToPrimaryAccessory:(id)arg1 error:(id*)arg2 ;
-(void)_notifyOwnerOfAddedAccessories:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sharedAdminDidFailToAddAccessories:(id)arg1 ;
-(void)_handleAddTriggerOwnedActionSet:(id)arg1 ;
-(void)_handleAddHomeOwnedActionSet:(id)arg1 ;
-(id)addActionSetName:(id)arg1 ;
-(void)_handleAddTriggerOwnedActionSetModel:(id)arg1 message:(id)arg2 ;
-(void)_handleAddHomeOwnedActionSetModel:(id)arg1 message:(id)arg2 ;
-(BOOL)_shouldWaitForAccessoriesToBeReachable;
-(void)_performOperation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleAddEventTrigger:(id)arg1 eventTriggerModel:(id)arg2 ;
-(BOOL)_validateAddingNewTriggerWithName:(id)arg1 message:(id)arg2 ;
-(void)_relayAddTriggerToResident:(id)arg1 ;
-(void)_addNewTrigger:(id)arg1 message:(id)arg2 notification:(id)arg3 payloadAnnex:(id)arg4 triggerModel:(id)arg5 ;
-(void)_removeTrigger:(id)arg1 message:(id)arg2 ;
-(void)removeTriggerNoNotification:(id)arg1 ;
-(id)_getContainerForAppData:(id)arg1 keyName:(id*)arg2 ;
-(BOOL)isResidentSupported;
-(NSArray *)residentCapableDevices;
-(BOOL)_verifyUserManagementPermissionForAccessory:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isUserValid:(id)arg1 error:(id*)arg2 ;
-(void)_addUsersWithIDs:(id)arg1 message:(id)arg2 ;
-(void)_cleanRemovedUsers:(id)arg1 ;
-(void)__handleCompletedOutgoingInvitation:(id)arg1 ;
-(void)__handleCancelledOutgoingInvitation:(id)arg1 ;
-(void)_addOutgoingInvitations:(id)arg1 message:(id)arg2 ;
-(void)_sendInvitation:(id)arg1 message:(id)arg2 ;
-(void)_sendAccessTokensToUser:(id)arg1 user:(id)arg2 error:(id)arg3 ;
-(void)_removeUser:(id)arg1 message:(id)arg2 ;
-(void)removeUser:(id)arg1 ;
-(id)prepareUserManagementOperationForUser:(id)arg1 accessories:(id)arg2 type:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_refreshUserDisplayNames;
-(void)_sendInvitationCancelationRequestToInvitee:(id)arg1 ;
-(void)__handleAcceptedOutgoingInvitationResponse:(id)arg1 destinationAddress:(id)arg2 publicKey:(id)arg3 username:(id)arg4 presenceAuthStatus:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_updateConfigurationStateForResidentDevice:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3 ;
-(void)_removeUserFromContainer:(id)arg1 ;
-(NSMutableArray *)pendingUsers;
-(void)_sendUserRemovedNotificationForUser:(id)arg1 message:(id)arg2 response:(id)arg3 ;
-(id)_splitCharacteristicChanges:(id)arg1 changedAccessories:(id)arg2 ;
-(void)_sendClientCharacteristicsChangedNotification:(id)arg1 identifier:(id)arg2 entitledClientsOnly:(BOOL)arg3 multiPartResponse:(BOOL)arg4 moreMessagesInMultipart:(BOOL)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(BOOL)shouldRelayNotificationToRegisteredDevicesForSource:(id)arg1 ;
-(void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg1 message:(id)arg2 ;
-(void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedCharacteristics:(id)arg2 modifiedAccessories:(id)arg3 changedByThisDevice:(BOOL)arg4 residentShouldNotifyPeers:(BOOL)arg5 message:(id)arg6 ;
-(BOOL)isCurrentDeviceAvailableResident;
-(BOOL)_shouldSendToDestination:(id)arg1 ;
-(void)_notifyChangedCharacteristics:(id)arg1 withRequestIdentifier:(id)arg2 toUserDeviceAddress:(id)arg3 ;
-(NSMutableDictionary *)notificationHandlerMap;
-(HMDHomeRemoteNotificationHandler *)remoteNotificationHandler;
-(void)_notifyRemoteUsersOfChangedProperties:(id)arg1 message:(id)arg2 ;
-(void)_notifyChangedProperties:(id)arg1 withRequestIdentifier:(id)arg2 toUserDeviceAddress:(id)arg3 ;
-(void)_notifyChangedCharacteristics:(id)arg1 message:(id)arg2 modifiedCharacteristics:(id)arg3 ;
-(BOOL)_shouldRegisterForNotificationsWithDevice:(id)arg1 ;
-(void)disableNotificationsForDevices:(id)arg1 ;
-(void)_updateBulletinBoardOfChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2 homePresence:(id)arg3 ;
-(void)evaluateNotificationConditionForCharacteristics:(id)arg1 homePresence:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_applyDeviceLockCheck:(id)arg1 forSource:(unsigned long long)arg2 ;
-(BOOL)isCarPlayAllowedActionOnService:(id)arg1 ;
-(id)_getLogEventsForOperation:(BOOL)arg1 accessories:(id)arg2 requestMap:(id)arg3 identifier:(id)arg4 source:(unsigned long long)arg5 ;
-(void)_addResponseTuplesFromDictionary:(id)arg1 accessoryRequestMapTable:(id)arg2 responseTuples:(id)arg3 completedGroup:(id)arg4 logEvents:(id)arg5 ;
-(void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 multiPartResponse:(BOOL)arg3 moreMessagesInMultipart:(BOOL)arg4 requestMessage:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)_addAccessoryToBalancedResidentMap:(id)arg1 residentDevice:(id)arg2 balancedResidentMap:(id)arg3 ;
-(id)__residentDeviceForAccesory:(id)arg1 fromMap:(id)arg2 ;
-(void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_writeCharacteristicValuesForAccessories:(id)arg1 writeRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 source:(unsigned long long)arg6 logEventSession:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_loadBalancedRedispatchForAccessories:(id)arg1 source:(unsigned long long)arg2 dispatchGroup:(id)arg3 writeRequestMap:(id)arg4 requestMessage:(id)arg5 responseTuples:(id)arg6 ;
-(void)_redispatchWriteForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 source:(unsigned long long)arg5 responseTuples:(id)arg6 ;
-(id)writeRequestTuplesFromMessage:(id)arg1 ;
-(BOOL)applyDeviceLockStatus:(id)arg1 ;
-(NSMutableArray *)assistantOperations;
-(void)setAssistantOperations:(NSMutableArray *)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 source:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValuesForAccessories:(id)arg1 readRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 logEventSession:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)setPendingResponsesTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)pendingResponsesTimer;
-(void)_redispatchReadForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5 errorResponseTuples:(id)arg6 ;
-(id)_prepareMultipleCharacteristicRead:(id)arg1 ;
-(BOOL)isMigratingAfterResidentChange;
-(void)setMigratingAfterResidentChange:(BOOL)arg1 ;
-(void)_handleResidentChange;
-(void)_remoteAccessEnabled:(BOOL)arg1 ;
-(void)setRemoteAccessIsEnabled:(BOOL)arg1 ;
-(void)_notifyClientsOfUpdatedResidentUser:(id)arg1 ;
-(NSMutableSet *)heartbeatPingMessagesQueuedWithServer;
-(void)_removeOutgoingInvitationForUser:(id)arg1 ;
-(BOOL)allowsRemoteAccess;
-(id)hapAccessoryUniqueIdentifiers;
-(NSMutableSet *)pendingResponsesForRemoteAccessSetup;
-(void)_sendResidentInviteWithDestination:(id)arg1 ;
-(void)_addResidentWithUsername:(id)arg1 publicKey:(id)arg2 destination:(id)arg3 ;
-(NSMutableArray *)unconfiguredResidentDevices;
-(void)_subscribeForHomeNotificationsOnDirectTransports:(BOOL)arg1 ;
-(void)_refreshCharacteristicValuesOnHomeNotificationEnable;
-(void)setHomeLocation:(long long)arg1 ;
-(void)setAtHomeLevel:(long long)arg1 ;
-(void)updateAppData:(id)arg1 identifierKey:(id)arg2 lookup:(id)arg3 ;
-(void)computeBridgedAccessoriesForAllBridges;
-(id)initWithName:(id)arg1 uuid:(id)arg2 defaultRoomUUID:(id)arg3 owner:(id)arg4 homeManager:(id)arg5 presenceAuth:(id)arg6 ;
-(long long)lastSyncedConfigurationVersion;
-(id)_residentUserForResidentDevice:(id)arg1 ;
-(void)_encodeObjectsWithAcessoriesWithCoder:(id)arg1 ;
-(NSUUID *)primaryNetworkRouterManagingDeviceUUID;
-(HMDHomeKitVersion *)minimumNetworkRouterSupportHomeKitVersion;
-(HMDHomeKitVersion *)minHomeKitVersionForAccessoryNetworkProtectionChange;
-(void)__encodeAccessoriesWithCoder:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_encodeActionSets:(id)arg1 coder:(id)arg2 ;
-(void)_updateOwnedTriggers;
-(void)_retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isRetrievalInProgressForLinkType:(long long)arg1 accessory:(id)arg2 ;
-(void)_enqueueRetrievalCompletionTuple:(id)arg1 forAccessory:(id)arg2 ;
-(void)_removeMediaSessionWithIdentifier:(id)arg1 ;
-(id)hapAccessoryWithIdentifier:(id)arg1 ;
-(BOOL)_isRegisteredForNotificationsWithRemoteGateway:(id)arg1 ;
-(BOOL)_isEventTriggerOnRemoteGatewayForAccessory:(id)arg1 ;
-(BOOL)_isRegisteredForNotificationsForClients:(id)arg1 ;
-(BOOL)_isEventTriggerOnLocalDeviceForAccessory:(id)arg1 ;
-(void)_unconfigurePairedAccessoriesForServer:(id)arg1 updateReachability:(BOOL)arg2 ;
-(id)_dequeueAllRetrievalCompletionTuplesForLinkType:(long long)arg1 accessory:(id)arg2 ;
-(void)_configurePairedAccessoriesForServer:(id)arg1 reAddServices:(BOOL)arg2 ;
-(id)_createMediaSessionWithEndpoint:(id)arg1 ;
-(id)_hmdCharacteristicsForUpdatedHAPcharacteristics:(id)arg1 accessoryServer:(id)arg2 ;
-(BOOL)_isSecureClassTriggeredByCharactersitics:(id)arg1 ;
-(id)_changedHMDCharacteristicsForHAPCharacteristics:(id)arg1 stateNumber:(id)arg2 broadcast:(BOOL)arg3 accessoryServer:(id)arg4 ;
-(id)getServiceTransaction:(id)arg1 parentUUID:(id)arg2 changeType:(unsigned long long)arg3 ;
-(void)__updateServiceTransaction:(id)arg1 accessoryTransaction:(id)arg2 service:(id)arg3 accessory:(id)arg4 hapService:(id)arg5 ;
-(id)_vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 productData:(id)arg3 ;
-(id)_productDataFromHAPAccessory:(id)arg1 ;
-(id)_discoveredAccessoriesForServer:(id)arg1 ;
-(void)_processUpdatedProductDataForAccessory:(id)arg1 hapAccessory:(id)arg2 transaction:(id)arg3 ;
-(void)_processUpdatedAccessoryServer:(id)arg1 reAddServices:(BOOL)arg2 ;
-(void)_evaluateOwnerTrustZoneCapabilityAndNotify;
-(void)_updateOutgoingInviationsWithCompleteUserManagementOperation:(id)arg1 ;
-(void)_handleCoalescedModifyNotifications;
-(void)_handleDisableNotificationsTimerFired;
-(void)_handleRemoteReachabilityNotificationTimerFired;
-(void)_handleRemoteReachabilityDeregistrationTimerFired;
-(void)_handlePendingResponserTimerFired:(BOOL)arg1 ;
-(void)_handleAddActivityRequestTimerFiredForInfo:(id)arg1 ;
-(void)_configureUnconfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2 ;
-(void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg1 ;
-(BOOL)_residentDeviceAvailable;
-(void)_remoteAccessHealthMonitorTimerDidFire;
-(void)_handleResponseForElectMessageToResident:(id)arg1 error:(id)arg2 ;
-(BOOL)_isValidEventIdentifier:(id)arg1 ;
-(NSArray *)mediaSessionStates;
-(int)keyPathValuesToWhitelistedEnum:(id)arg1 ;
-(BOOL)awdPrimaryReportingDevice;
-(id)_handleRenameHomeModel:(id)arg1 message:(id)arg2 ;
-(void)_handleMultiUserEnabledChange:(id)arg1 message:(id)arg2 ;
-(void)_handleHasAnyUserAcknowledgedCameraRecordingOnboardingChange:(id)arg1 message:(id)arg2 ;
-(BOOL)_handleUpdateNetworkProtectionWithHomeModel:(id)arg1 message:(id)arg2 ;
-(void)_handleReceivedNonCloudSourcedSharedHomeModel;
-(void)setSharedHomeSourceVersion:(HMDHomeKitVersion *)arg1 ;
-(void)setLastSyncedConfigurationVersion:(long long)arg1 ;
-(void)setActiveNetworkRouterUUID:(NSUUID *)arg1 ;
-(void)_addTransactionForMinimumNetworkRouterHomeKitVersion:(id)arg1 message:(id)arg2 ;
-(void)setMinimumNetworkRouterSupportHomeKitVersion:(HMDHomeKitVersion *)arg1 ;
-(void)setMinHomeKitVersionForAccessoryNetworkProtectionChange:(HMDHomeKitVersion *)arg1 ;
-(void)setPrimaryNetworkRouterManagingDeviceUUID:(NSUUID *)arg1 ;
-(id)updateHomeWithModel:(id)arg1 message:(id)arg2 ;
-(void)updateHomeConfigurationWithModel:(id)arg1 message:(id)arg2 ;
-(void)updateNetworkRouterSettingsWithModel:(id)arg1 message:(id)arg2 ;
-(void)updateNetworkRouterManagingDeviceSettingsWithModel:(id)arg1 message:(id)arg2 ;
-(HMDHomeObjectChangeHandler *)homeObjectChangeHandler;
-(id)homeConfigurationUUID;
-(void)dropAllChangesWithArrayOfObjectIDs:(id)arg1 ;
-(void)cleanChangesIfNoAddChangeObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateHomeObjectCloudZone:(id)arg1 defaultModel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMigrationNeeded:(BOOL)arg1 ;
-(void)_migrateResidentDevicesCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_migrateHomeSettingsCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_migrateHomeMediaSettingsCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_migrateHomeUsersCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_migrateHomeAllObjectsCloudZone:(id)arg1 migrationGroup:(id)arg2 migrationQueue:(id)arg3 saveModels:(id)arg4 runModels:(id)arg5 ;
-(void)evaluateIfMediaPlaybackStateChanged:(id)arg1 ;
-(void)_handleReadMediaProperties:(id)arg1 source:(unsigned long long)arg2 message:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleWriteMediaProperties:(id)arg1 source:(unsigned long long)arg2 requestMessage:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_ensureDevicesSymptomDiscoveryMessageCanBeHandled:(id)arg1 ;
-(void)_removeConnectionFromConnectionsDiscoveringSymptomsForNearbyDevices:(id)arg1 ;
-(void)residentDeviceManager:(id)arg1 didUpdateResidentAvailable:(BOOL)arg2 ;
-(void)residentDeviceManager:(id)arg1 didUpdatePrimaryResident:(id)arg2 ;
-(void)residentDeviceManagerDidUpdateResidents:(id)arg1 ;
-(void)accessoryBrowser:(id)arg1 didAddAccessoryAdvertisement:(id)arg2 ;
-(void)accessoryBrowser:(id)arg1 didRemoveAccessoryAdvertisement:(id)arg2 ;
-(void)accessoryBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)accessoryBrowser:(id)arg1 didTombstoneAccessoryServer:(id)arg2 ;
-(void)accessoryBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 didUpdateReachability:(BOOL)arg2 forBTLEAccessoriesWithServerIdentifier:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didStopPairingWithError:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didDiscoverAccessories:(id)arg3 transaction:(id)arg4 error:(id)arg5 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 isBlockedWithCompletionHandler:(/*^block*/id)arg3 ;
-(void)accessoryBrowser:(id)arg1 setupID:(id)arg2 serverIdentifier:(id)arg3 isPairedWithCompletionHandler:(/*^block*/id)arg4 ;
-(void)accessoryBrowser:(id)arg1 identifier:(id)arg2 reachable:(BOOL)arg3 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(BOOL)arg5 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateHasPairings:(BOOL)arg3 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateCategory:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateName:(id)arg3 ;
-(void)accessoryBrowser:(id)arg1 discoveryFailedWithError:(id)arg2 accessoryServer:(id)arg3 linkType:(long long)arg4 ;
-(void)accessoryBrowser:(id)arg1 didUpdateEndpoint:(id)arg2 ;
-(void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2 ;
-(void)userManagementOperationDidFinish:(id)arg1 ;
-(NSArray *)enabledResidents;
-(BOOL)isAnyBTLEAccessoryReachable;
-(id)allNewlyConfiguredAccessories;
-(HMDNetworkRouterClientManager *)routerClientManager;
-(void)setRouterClientManager:(HMDNetworkRouterClientManager *)arg1 ;
-(void)takeOwnershipOfAccessories:(id)arg1 ;
-(void)takeOwnershipOfAppData:(id)arg1 ;
-(BOOL)takeOwnershipOfBuiltinActionSets:(id)arg1 ;
-(void)updateActionSetExecutionDates:(id)arg1 ;
-(BOOL)_doesResidentExistInMyCircleWithAddress:(id)arg1 homeManager:(id)arg2 ;
-(BOOL)watchSkipVersionCheck;
-(void)setWatchSkipVersionCheck:(BOOL)arg1 ;
-(BOOL)configure:(id)arg1 accessoriesPresent:(id)arg2 source:(unsigned long long)arg3 ;
-(void)configureWithRelayManager:(id)arg1 ;
-(void)addCompanionAsResidentUser:(id)arg1 ;
-(void)modifyNotificationOnResident:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 forCharacteristics:(id)arg3 ;
-(void)subscribeForNotificationsFromRemoteGateway;
-(void)enableHomeNotificationsForMediaAccessory:(id)arg1 ;
-(void)enableNotificationsForDevices:(id)arg1 ;
-(void)modifyCharacteristicNotifications:(id)arg1 mediaNotifications:(id)arg2 enableNotification:(BOOL)arg3 withDevice:(id)arg4 ;
-(void)auditUsersForNotifications:(id)arg1 ;
-(void)saveSharedHomeToAccountWithReason:(id)arg1 postSyncNotification:(BOOL)arg2 options:(id)arg3 ;
-(void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2 objectChange:(id)arg3 ;
-(BOOL)ownerTrustZoneCapable;
-(void)reEvaluateTriggers;
-(void)removeAllHomeContentsAndAccessoryPairings:(BOOL)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 ;
-(void)reachabilityChangedForAccessory:(id)arg1 reachable:(BOOL)arg2 ;
-(void)regionStateUpdated:(int)arg1 ;
-(void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 transactionId:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)migrateOwnedTriggers;
-(void)checkTimerTriggers;
-(void)handleBackgroundTaskAgentJob:(id)arg1 ;
-(void)getRunTimeStateUpdateWithOptions:(unsigned long long)arg1 includeMediaAccessoryState:(BOOL)arg2 includeResidentDeviceState:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerForRemoteAccessoryReachabilityNotifications:(BOOL)arg1 ;
-(id)namesOfServicesWithNewFirmwareAvailableInHome;
-(void)evaluateResidentUpdate;
-(void)evaluateShouldRelaunchAndSetRelaunch;
-(void)resetConfiguration;
-(void)notifyClientOfVendorInfoUpdatedForManufacturers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)assistantAccessCapableAccessoryCount;
-(id)addAccessoryRequestsForMessage:(id)arg1 ;
-(void)_accessoryPairingDidComplete:(id)arg1 configuration:(id)arg2 pairingEvent:(id)arg3 accessoryServer:(id)arg4 certificationStatus:(long long)arg5 requestMessage:(id)arg6 ;
-(void)handleRemoveAccessory:(id)arg1 ;
-(void)removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)hapAccessoryWithIdentifier:(id)arg1 instanceID:(id)arg2 ;
-(void)scheduleRemoval;
-(unsigned long long)accessoryCountForRoom:(id)arg1 ;
-(id)hapAccessoryServerIdentifiers;
-(void)_removeReachableAccessory:(id)arg1 hapAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAccessoriesFromContainers:(id)arg1 ;
-(void)notifyClientsOfAccessoryInfoUpdatedForAccessories:(id)arg1 ;
-(void)_registerDeviceForReachabilityNotification:(id)arg1 accessoryList:(id)arg2 ;
-(long long)reachableMediaAccessories;
-(unsigned long long)reachableIPAccessories;
-(id)builtInActionSetInfo;
-(void)removeTrigger:(id)arg1 ;
-(NSArray *)usersSupportingPresence;
-(id)userWithPairingIdentity:(id)arg1 ;
-(void)addUserToRelayAccessoriesWithConsentTokens:(id)arg1 ;
-(void)sendAccessTokensToUser:(id)arg1 user:(id)arg2 ;
-(void)removeUserWithUserID:(id)arg1 ;
-(void)refreshUserDisplayNames;
-(BOOL)containsRemovedUser:(id)arg1 ;
-(void)notifyRemoteUsersOfChangedProperties:(id)arg1 message:(id)arg2 ;
-(void)notifyOfChangedCharacteristic:(id)arg1 changedByThisDevice:(BOOL)arg2 residentShouldNotifyPeers:(BOOL)arg3 message:(id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 identifier:(id)arg3 logEventSession:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)readCharacteristicValues:(id)arg1 identifier:(id)arg2 isSPIEntitled:(BOOL)arg3 source:(unsigned long long)arg4 logEventSession:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 source:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)addResidentCapableDevice:(id)arg1 ;
-(void)removeResidentCapableDevice:(id)arg1 ;
-(void)updateNetworkConnectivity:(BOOL)arg1 companionReachable:(BOOL)arg2 ;
-(void)notifyNewRemotePeersFound:(BOOL)arg1 remoteUsersRemoved:(id)arg2 forceRemoteNotificationRegistration:(BOOL)arg3 ;
-(void)_configureConfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3 ;
-(void)fixupHomeAfterDecoding;
-(void)_removeCorruptAccessories;
-(void)retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addUnconfiguredResidentDevice:(id)arg1 ;
-(void)removeUnconfiguredResidentDeviceWithUserID:(id)arg1 ;
-(void)remoteAccessHealthMonitorTimerDidFire;
-(void)validateDuetEventIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dumpUnpairedSecondaryAccessories;
-(id)dumpActionSetDescription;
-(id)dumpCharacteristicNotificationRegistry;
-(id)dumpMediaSessionDescription;
-(id)getHomeConfigurationForAWD;
-(id)deletedBackingStoreObject;
-(void)dropAllChangesWithObjectID:(id)arg1 ;
-(void)migrateCloudZone:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)migrateAfterCloudMerge:(id)arg1 ;
-(id)mediaSessionWithUUID:(id)arg1 ;
-(void)redispatchMediaWriteRequests:(id)arg1 viaDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)hapAccessories;
-(void)userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2 ;
-(void)removeAccessoriesFromAssistantAccessControl:(id)arg1 accessories:(id)arg2 ;
-(void)setMediaSessions:(NSArray *)arg1 ;
-(void)setMediaSessionStates:(NSArray *)arg1 ;
-(void)setNetworkProtectionGroupRegistry:(HMDAccessoryNetworkProtectionGroupRegistry *)arg1 ;
-(NSMutableDictionary *)newlyConfiguredAccessories;
-(HMDHomeObjectLookup *)lookup;
-(void)setHomeLocationHandler:(HMDHomeLocationHandler *)arg1 ;
-(void)setNotificationRegistrations:(NSMutableSet *)arg1 ;
-(void)setNotificationDeregistrations:(NSMutableSet *)arg1 ;
-(void)setHomeHubState:(unsigned long long)arg1 ;
-(void)setAddPendingAccessorySetupCodes:(NSMutableDictionary *)arg1 ;
-(void)setAddAccessoryRequestMap:(NSMutableDictionary *)arg1 ;
-(void)setNotificationHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setHomeReprovisionHandler:(HMDHomeReprovisionHandler *)arg1 ;
-(NSHashTable *)connectionsDiscoveringSymptomsForNearbyDevices;
-(void)setRooms:(NSMutableArray *)arg1 ;
-(void)setDiscoveredAccessories:(NSMutableArray *)arg1 ;
-(void)setServiceGroups:(NSMutableArray *)arg1 ;
-(void)setActionSets:(NSMutableArray *)arg1 ;
-(void)setTriggerOwnedActionSets:(NSMutableArray *)arg1 ;
-(void)setOutgoingInvitations:(NSMutableArray *)arg1 ;
-(void)setPendingUsers:(NSMutableArray *)arg1 ;
-(void)setRemovedUsers:(NSMutableArray *)arg1 ;
-(void)setUnconfiguredResidentDevices:(NSMutableArray *)arg1 ;
-(void)setRoomForEntireHome:(HMDRoom *)arg1 ;
-(void)setNotificationRegistry:(HMDNotificationRegistry *)arg1 ;
-(void)setHeartbeatPingMessagesQueuedWithServer:(NSMutableSet *)arg1 ;
-(void)setPendingResponsesForRemoteAccessSetup:(NSMutableSet *)arg1 ;
-(void)setSharedAdmin:(BOOL)arg1 ;
-(void)setAllowsRemoteAccess:(BOOL)arg1 ;
-(void)setResident:(HMDResidentDevice *)arg1 ;
-(void)setReachabilityRegisteredDevices:(NSMutableArray *)arg1 ;
-(void)setRemoteReachabilityNotificationPendingAccessories:(NSMutableArray *)arg1 ;
-(void)setPendingResponses:(NSMutableDictionary *)arg1 ;
-(void)setOwnedTriggers:(NSMutableArray *)arg1 ;
-(void)setUuidToHAPAccessoryConfigTable:(NSMapTable *)arg1 ;
-(HMDMediaActionRouter *)mediaActionRouter;
-(id)assistantObject;
-(id)actionWithDictionaryRepresentation:(id)arg1 ;
-(void)evaluateNetworkProtectionAndRouterManagement;
-(id)playbackArchiveWithSessionIdentifier:(id)arg1 ;
-(BOOL)supportsRouterManagement;
-(id)assistantUniqueIdentifier;
-(HMDHAPAccessory *)activeNetworkRouterAccessory;
-(BOOL)_isNetworkRouterSupportEnabledForCurrentDevice;
-(id)_currentDeviceCapabilities;
-(void)_addTransactionWithProtectionMode:(id)arg1 message:(id)arg2 ;
-(void)_addTransactionForMinimumHomeKitVersionForAccessoryNetworkProtectionChange:(id)arg1 message:(id)arg2 ;
-(void)_removeClientConfigurationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_evaluateNetworkProtectionSupport;
-(void)_configureNetworkRouterClientManager:(id)arg1 ;
-(void)_unconfigureNetworkRouterClientManager;
-(void)_requestUniquePSKClientConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestRemoveClientConfigurationWithIdentifier:(id)arg1 ;
@end

