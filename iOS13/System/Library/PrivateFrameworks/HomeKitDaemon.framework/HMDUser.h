/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSettingsControllerDelegate.h>
#import <libobjc.A.dylib/HMDCloudShareTrustManagerDataSource.h>
#import <libobjc.A.dylib/HMDCloudShareTrustManagerDelegate.h>
#import <libobjc.A.dylib/HMDUserDataControllerDelegate.h>
#import <libobjc.A.dylib/HMDUserSettingsBackingStoreControllerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSMutableArray, HMDAccountHandle, HMDAccountIdentifier, HMDHome, NSString, HMUserPresenceAuthorization, NSNumber, HAPPairingIdentity, HMDAssistantAccessControl, HMBShareUserID, NAFuture, NSObject, HMDSettingsControllerDependency, HMDUserSettingsBackingStoreController, HMDCloudShareMessenger, HMDUserDataController, HMDCloudShareTrustManager, AVOutputDeviceAuthorizedPeer, NSSet;

@interface HMDUser : HMFObject <HMDSettingsControllerDelegate, HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding> {

	NSUUID* _uuid;
	BOOL _remoteAccessAllowed;
	NSMutableArray* _relayAccessTokens;
	HMDAccountHandle* _accountHandle;
	HMDAccountIdentifier* _accountIdentifier;
	unsigned long long _privilege;
	HMDHome* _home;
	NSString* _userID;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	NSString* _relayIdentifier;
	NSNumber* _camerasAccessLevelValue;
	HAPPairingIdentity* _pairingIdentity;
	NSString* _displayName;
	HMDAssistantAccessControl* _assistantAccessControl;
	HMBShareUserID* _cloudShareID;
	NAFuture* _cloudShareIDFuture;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDSettingsControllerDependency* _sharedSettingsControllerDependency;
	HMDUserSettingsBackingStoreController* _sharedBackingStoreController;
	HMDCloudShareMessenger* _shareMessenger;
	HMDSettingsControllerDependency* _privateSettingsControllerDependency;
	HMDUserSettingsBackingStoreController* _privateBackingStoreController;
	HMDUserDataController* _userDataController;
	HMDCloudShareTrustManager* _cloudShareTrustManager;

}

@property (copy,readonly) AVOutputDeviceAuthorizedPeer * av_authorizedPeer; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                               //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                             //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * encodingRemoteDisplayName; 
@property (retain) HMDAssistantAccessControl * assistantAccessControl;                                 //@synthesize assistantAccessControl=_assistantAccessControl - In the implementation block
@property (retain) HMDSettingsControllerDependency * sharedSettingsControllerDependency;               //@synthesize sharedSettingsControllerDependency=_sharedSettingsControllerDependency - In the implementation block
@property (retain) HMDUserSettingsBackingStoreController * sharedBackingStoreController;               //@synthesize sharedBackingStoreController=_sharedBackingStoreController - In the implementation block
@property (retain) HMDCloudShareMessenger * shareMessenger;                                            //@synthesize shareMessenger=_shareMessenger - In the implementation block
@property (retain) HMDSettingsControllerDependency * privateSettingsControllerDependency;              //@synthesize privateSettingsControllerDependency=_privateSettingsControllerDependency - In the implementation block
@property (retain) HMDUserSettingsBackingStoreController * privateBackingStoreController;              //@synthesize privateBackingStoreController=_privateBackingStoreController - In the implementation block
@property (retain) HMDUserDataController * userDataController;                                         //@synthesize userDataController=_userDataController - In the implementation block
@property (setter=setUUID:,copy) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (retain) HMBShareUserID * cloudShareID;                                                      //@synthesize cloudShareID=_cloudShareID - In the implementation block
@property (__weak) HMDHome * home;                                                                     //@synthesize home=_home - In the implementation block
@property (copy) HMUserPresenceAuthorization * presenceAuthStatus;                                     //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (assign) unsigned long long privilege;                                                       //@synthesize privilege=_privilege - In the implementation block
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;                                     //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,retain) NSNumber * camerasAccessLevelValue;                                       //@synthesize camerasAccessLevelValue=_camerasAccessLevelValue - In the implementation block
@property (copy) HAPPairingIdentity * pairingIdentity;                                                 //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (copy) HMDAccountIdentifier * accountIdentifier; 
@property (retain) HMDCloudShareTrustManager * cloudShareTrustManager;                                 //@synthesize cloudShareTrustManager=_cloudShareTrustManager - In the implementation block
@property (copy) NSString * relayIdentifier;                                                           //@synthesize relayIdentifier=_relayIdentifier - In the implementation block
@property (copy) NSString * userID;                                                                    //@synthesize userID=_userID - In the implementation block
@property (readonly) NAFuture * cloudShareIDFuture;                                                    //@synthesize cloudShareIDFuture=_cloudShareIDFuture - In the implementation block
@property (copy,readonly) NSString * displayName;                                                      //@synthesize displayName=_displayName - In the implementation block
@property (getter=isAdministrator,readonly) BOOL administrator; 
@property (getter=isOwner,readonly) BOOL owner; 
@property (getter=isRemoteGateway,readonly) BOOL remoteGateway; 
@property (getter=isCurrentUser,readonly) BOOL currentUser; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) NSUUID * assistantAccessControlModelUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isUserSettingsPrefEnabled; 
@property (readonly) NSUUID * userUUID; 
@property (readonly) BOOL isRunningOnHomeOwnersDevice; 
@property (readonly) BOOL isCurrentUser; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2 ;
+(id)userWithDictionary:(id)arg1 forHome:(id)arg2 ;
+(id)userIDForAccountHandle:(id)arg1 ;
+(id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4 ;
+(id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userID;
-(NSUUID *)uuid;
-(void)setUUID:(id)arg1 ;
-(NSString *)displayName;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)publicKey;
-(id)account;
-(void)setUserID:(NSString *)arg1 ;
-(HMDAccountIdentifier *)accountIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(HMDHome *)home;
-(id)shortDescription;
-(void)setAccountIdentifier:(HMDAccountIdentifier *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isCurrentUser;
-(void)setHome:(HMDHome *)arg1 ;
-(BOOL)isOwner;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(HAPPairingIdentity *)pairingIdentity;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithModelObject:(id)arg1 ;
-(NSUUID *)userUUID;
-(id)dumpState;
-(BOOL)isAdministrator;
-(id)messageDispatcher;
-(BOOL)isRemoteAccessAllowed;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(unsigned long long)camerasAccessLevel;
-(id)messageDestination;
-(void)registerForMessages;
-(void)setAssistantAccessControl:(HMDAssistantAccessControl *)arg1 ;
-(HMDAssistantAccessControl *)assistantAccessControl;
-(void)setPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(HMBShareUserID *)cloudShareID;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)backingStoreObjects:(long long)arg1 ;
-(id)pairingUsername;
-(BOOL)refreshDisplayName;
-(BOOL)isRemoteGateway;
-(id)dictionaryEncoding;
-(void)configureWithHome:(id)arg1 ;
-(void)unconfigure;
-(id)relayAccessTokenForAccessory:(id)arg1 ;
-(void)_handleAssistantAccessControlUpdate:(id)arg1 ;
-(void)_handleMediaContentProfileAccessControlUpdate:(id)arg1 ;
-(void)handleAssistantAccessControlUpdate:(id)arg1 ;
-(void)handleMediaContentProfileAccessControlUpdate:(id)arg1 ;
-(void)removeCloudData;
-(void)addRelayAccessToken:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(unsigned long long)privilege;
-(id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 ;
-(void)setCamerasAccessLevelValue:(NSNumber *)arg1 ;
-(void)setPrivilege:(unsigned long long)arg1 ;
-(NSString *)relayIdentifier;
-(void)updateRelayIdentifier:(id)arg1 ;
-(BOOL)updateAdministrator:(BOOL)arg1 ;
-(BOOL)requiresMakoSupport;
-(id)privateSettingValuesByKeyPathForAWD;
-(id)sharedSettingValuesByKeyPathForAWD;
-(void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAccessoriesFromAssistantAccessControlList:(id)arg1 ;
-(id)accountHandle;
-(void)setAccountHandle:(id)arg1 ;
-(BOOL)isRunningOnHomeOwnersDevice;
-(id)ownerForUserSettingsBackingStoreController:(id)arg1 ;
-(HMDCloudShareMessenger *)shareMessenger;
-(id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2 ;
-(void)didStartBackingStoreController:(id)arg1 ;
-(void)didStopBackingStoreController:(id)arg1 ;
-(id)homeForCloudShareTrustManager:(id)arg1 ;
-(id)zoneNameForCloudShareTrustManager:(id)arg1 ;
-(BOOL)isOwnerCapableForTrustManager:(id)arg1 ;
-(id)ownerForCloudShareTrustManager:(id)arg1 ;
-(void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2 ;
-(void)didFinishConfiguringForCloudShareTrustManager:(id)arg1 ;
-(void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1 ;
-(void)updateCloudShareID:(id)arg1 ;
-(void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2 ;
-(BOOL)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2 ;
-(AVOutputDeviceAuthorizedPeer *)av_authorizedPeer;
-(void)setRelayIdentifier:(NSString *)arg1 ;
-(id)settingsController:(id)arg1 willUpdateSettingAtKeyPath:(id)arg2 withValue:(id)arg3 ;
-(void)settingsController:(id)arg1 didUpdateWithCompletion:(/*^block*/id)arg2 ;
-(NSUUID *)assistantAccessControlModelUUID;
-(void)__handleAddedAccount:(id)arg1 ;
-(NAFuture *)cloudShareIDFuture;
-(void)__handleRemovedAccount:(id)arg1 ;
-(void)removeRelayAccessToken:(id)arg1 ;
-(id)sharedZoneControllerForUserDataController:(id)arg1 ;
-(id)privateZoneControllerForUserDataController:(id)arg1 ;
-(BOOL)isUserSettingsPrefEnabled;
-(BOOL)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2 ;
-(BOOL)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2 ;
-(void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1 ;
-(void)userDataControllerDidUpdateMediaContentProfile:(id)arg1 ;
-(HMDUserDataController *)userDataController;
-(id)relayAccessTokens;
-(void)configureCloudShareTrustManager;
-(void)initializeUserSettingsWithHome:(id)arg1 ;
-(void)registerIdentity;
-(void)setPrivateBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1 ;
-(void)setPrivateSettingsControllerDependency:(HMDSettingsControllerDependency *)arg1 ;
-(HMDSettingsControllerDependency *)privateSettingsControllerDependency;
-(HMDUserSettingsBackingStoreController *)privateBackingStoreController;
-(void)setShareMessenger:(HMDCloudShareMessenger *)arg1 ;
-(void)setSharedBackingStoreController:(HMDUserSettingsBackingStoreController *)arg1 ;
-(void)setSharedSettingsControllerDependency:(HMDSettingsControllerDependency *)arg1 ;
-(HMDSettingsControllerDependency *)sharedSettingsControllerDependency;
-(HMDUserSettingsBackingStoreController *)sharedBackingStoreController;
-(void)setUserDataController:(HMDUserDataController *)arg1 ;
-(void)recoverUserSettingsDueToUUIDChange;
-(void)recoverTrustManagerDueToUUIDChange;
-(HMDCloudShareTrustManager *)cloudShareTrustManager;
-(void)setCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 ;
-(void)deregisterForMessages;
-(void)_handlePairingIdentityRequest:(id)arg1 ;
-(void)_handleShareLookupInfoRequest:(id)arg1 ;
-(void)_handleShareClientPayloadRequest:(id)arg1 ;
-(void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)camerasAccessLevelValue;
-(BOOL)isCurrentUserAndOwner;
-(unsigned long long)_compatiblePrivilege;
-(NSString *)encodingRemoteDisplayName;
-(void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(id)_relayAccessTokenForIdentifier:(id)arg1 ;
-(void)_addRelayAccessToken:(id)arg1 ;
-(void)recoverUserCloudDataDueToUUIDChange;
-(void)_removeRelayAccessToken:(id)arg1 ;
-(void)_fixupRelayAccessTokens;
-(void)setCloudShareID:(HMBShareUserID *)arg1 ;
-(id)trustTargetUUID;
-(void)deregisterIdentity;
-(BOOL)containsRelayAccessToken:(id)arg1 ;
-(void)_migrateRelayAccessTokensCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)userDataController:(id)arg1 participantManagerForCloudZone:(id)arg2 ;
-(void)removeCloudShareID;
@end

