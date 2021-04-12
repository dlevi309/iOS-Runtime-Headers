/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSDictionary, NSString, NSMutableArray, NSMapTable, NSArray, NSData, NSDate, NSSet;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _accountConfig;
	NSString* _serviceToken;
	NSString* _uniqueID;
	NSString* _service;
	NSMutableArray* _devices;
	NSMutableArray* _suppressedDevices;
	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSMapTable* _registrationDelegateToInfo;
	BOOL _devicesLoaded;
	BOOL _isEnabled;
	NSString* _loginID;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSString * loginID;                                       //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) NSString * pushTopic; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) BOOL isInTransientRegistrationState; 
@property (nonatomic,readonly) BOOL isTransientWhitelistedAccount; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
@property (nonatomic,readonly) NSArray * suppressedDevices; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * aliasesToRegister; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int registrationStatus; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,readonly) NSString * userUniqueIdentifier; 
@property (nonatomic,__weak,readonly) NSArray * registeredURIs; 
@property (nonatomic,__weak,readonly) NSArray * accountRegisteredURIs; 
@property (nonatomic,__weak,readonly) NSData * registrationCertificate; 
@property (nonatomic,__weak,readonly) NSDate * dateRegistered; 
@property (nonatomic,__weak,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,__weak,readonly) NSData * pushToken; 
@property (nonatomic,__weak,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,__weak,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSSet * activeAliases; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) long long profileValidationStatus; 
@property (nonatomic,readonly) int profileValidationErrorReason; 
@property (nonatomic,retain) NSString * regionID; 
@property (nonatomic,retain) NSString * regionBasePhoneNumber; 
@property (nonatomic,retain) NSString * displayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BOOL)isActive;
-(void)setPassword:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(NSString *)serviceName;
-(BOOL)_isEnabled;
-(NSArray *)handles;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)pushToken;
-(NSArray *)devices;
-(int)accountType;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAuthToken:(id)arg1 ;
-(void)_connect;
-(NSArray *)vettedAliases;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2 ;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2 ;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2 ;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerAccount;
-(void)authenticateAccount;
-(int)registrationStatus;
-(NSArray *)aliasesToRegister;
-(void)addAliases:(id)arg1 ;
-(NSString *)userUniqueIdentifier;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(NSString *)pushTopic;
-(NSString *)primaryServiceName;
-(NSData *)registrationCertificate;
-(NSArray *)suppressedDevices;
-(BOOL)isInTransientRegistrationState;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(NSString *)loginID;
-(NSDictionary *)accountInfo;
-(NSArray *)aliases;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(BOOL)isUserDisabled;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(NSDictionary *)profileInfo;
-(NSArray *)aliasStrings;
-(BOOL)isUsableForOuterMessaging;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(int)registrationError;
-(NSDictionary *)registrationAlertInfo;
-(long long)profileValidationStatus;
-(int)profileValidationErrorReason;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSArray *)registeredURIs;
-(NSArray *)accountRegisteredURIs;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(NSString *)regionID;
-(void)setRegionID:(NSString *)arg1 ;
-(NSString *)regionBasePhoneNumber;
-(void)setRegionBasePhoneNumber:(NSString *)arg1 ;
-(void)passwordUpdated;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)removeAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)unregisterAccount;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(NSSet *)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(void)_loadCachedDevices;
-(BOOL)_isiCloudPairingService;
-(BOOL)_isThumperService;
-(id)_objectForKey:(id)arg1 ;
-(BOOL)_isInvisibleAlias:(id)arg1 ;
-(id)registrationInfo;
-(void)_updateDependentDevicesWithDevicesInfo:(id)arg1 ;
-(void)_callDevicesChanged;
-(id)connectedDevices;
-(id)_keychainRegistration;
-(id)_registeredURIs;
-(void)_callRegistrationDelegatesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isTransientWhitelistedAccount;
-(void)_callConnectedDevicesChanged;
-(void)_callCloudConnectedDevicesChanged;
@end

