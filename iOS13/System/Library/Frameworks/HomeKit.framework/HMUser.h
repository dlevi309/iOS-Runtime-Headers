/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMSettingsContainer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMUserDelegatePrivate;
@class HMSettings, HMFUnfairLock, HMMutableArray, NSUUID, NSString, HMHomeAccessControl, HMAssistantAccessControl, HMMediaContentProfileAccessControl, HMHome, HMFPairingIdentity, _HMContext, HMSettingsController;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	HMMutableArray* _pendingAccessoryInvitations;
	BOOL _currentUser;
	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHomeAccessControl* _homeAccessControl;
	HMAssistantAccessControl* _assistantAccessControl;
	HMMediaContentProfileAccessControl* _mediaContentProfileAccessControl;
	NSString* _userID;
	HMHome* _home;
	HMFPairingIdentity* _pairingIdentity;
	HMSettings* _settings;
	HMSettings* _privateSettings;
	_HMContext* _context;
	id<HMUserDelegatePrivate> _delegate;
	HMSettingsController* _settingsController;
	HMSettingsController* _privateSettingsController;
	NSUUID* _uuid;

}

@property (retain) _HMContext * context;                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                        //@synthesize userID=_userID - In the implementation block
@property (copy) HMFPairingIdentity * pairingIdentity;                                               //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (__weak) id<HMUserDelegatePrivate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMSettingsController * settingsController;                                      //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) HMSettingsController * privateSettingsController;                               //@synthesize privateSettingsController=_privateSettingsController - In the implementation block
@property (nonatomic,retain) HMHomeAccessControl * homeAccessControl;                                //@synthesize homeAccessControl=_homeAccessControl - In the implementation block
@property (copy) HMAssistantAccessControl * assistantAccessControl;                                  //@synthesize assistantAccessControl=_assistantAccessControl - In the implementation block
@property (copy) HMMediaContentProfileAccessControl * mediaContentProfileAccessControl;              //@synthesize mediaContentProfileAccessControl=_mediaContentProfileAccessControl - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser;                                  //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) HMSettings * settings;                                                          //@synthesize settings=_settings - In the implementation block
@property (readonly) HMSettings * privateSettings;                                                   //@synthesize privateSettings=_privateSettings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMUserDelegatePrivate>)delegate;
-(void)setDelegate:(id<HMUserDelegatePrivate>)arg1 ;
-(NSString *)userID;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setContext:(_HMContext *)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(HMHome *)home;
-(HMSettings *)settings;
-(void)setCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(void)setHome:(HMHome *)arg1 ;
-(void)pairingIdentityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)assistantAccessControlForHome:(id)arg1 ;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)userSettingsForHome:(id)arg1 ;
-(HMSettings *)privateSettings;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(id)messageDestination;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 ;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2 ;
-(BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2 ;
-(void)updateHomeAccessControl:(BOOL)arg1 remoteAccess:(BOOL)arg2 camerasAccess:(id)arg3 ;
-(id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 homeAccessControl:(id)arg5 ;
-(void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 ;
-(HMHomeAccessControl *)homeAccessControl;
-(void)sendClientShareURL:(id)arg1 shareToken:(id)arg2 containerID:(id)arg3 fromUser:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchShareLookupInfo:(/*^block*/id)arg1 ;
-(HMSettingsController *)settingsController;
-(HMSettingsController *)privateSettingsController;
-(void)_handleUpdatedAssistantAccessControl:(id)arg1 ;
-(void)_handleMultiUserStatusChangedNotification:(id)arg1 ;
-(void)setAssistantAccessControl:(HMAssistantAccessControl *)arg1 ;
-(HMAssistantAccessControl *)assistantAccessControl;
-(HMMediaContentProfileAccessControl *)mediaContentProfileAccessControl;
-(void)setMediaContentProfileAccessControl:(HMMediaContentProfileAccessControl *)arg1 ;
-(id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1 ;
-(void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(id)pendingAccessoryInvitations;
-(void)setHomeAccessControl:(HMHomeAccessControl *)arg1 ;
-(id)mediaContentProfileAccessControlForHome:(id)arg1 ;
-(void)updateMediaContentProfileAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

