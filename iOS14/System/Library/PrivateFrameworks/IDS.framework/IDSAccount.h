/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSAccount, NSString, NSSet, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;
	NSString* _loginID;

}

@property (nonatomic,readonly) NSSet * activeAliases; 
@property (nonatomic,readonly) NSString * userUniqueIdentifier; 
@property (nonatomic,retain,readonly) _IDSAccount * _internal; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * aliasesToRegister; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) long long profileValidationStatus; 
@property (nonatomic,readonly) int profileValidationErrorReason; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSArray * accountRegisteredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,retain) NSString * regionID; 
@property (nonatomic,retain) NSString * regionBasePhoneNumber; 
@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * loginID;                                  //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
-(void)setAuthToken:(id)arg1 ;
-(void)validateProfile;
-(int)registrationStatus;
-(NSArray *)aliases;
-(NSString *)loginID;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(int)accountType;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)handles;
-(NSArray *)devices;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSSet *)activeAliases;
-(int)profileValidationErrorReason;
-(NSArray *)aliasStrings;
-(_IDSAccount *)_internal;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(BOOL)isUserDisabled;
-(BOOL)isUsableForOuterMessaging;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(void)setRegionID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSArray *)accountRegisteredURIs;
-(NSDictionary *)regionServerContext;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(NSString *)regionBasePhoneNumber;
-(void)setRegionBasePhoneNumber:(NSString *)arg1 ;
-(void)passwordUpdated;
-(void)forceRemoveAccount;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSData *)pushToken;
-(void)addAliases:(id)arg1 ;
-(NSDictionary *)accountInfo;
-(void)setLoginID:(NSString *)arg1 ;
-(NSArray *)vettedAliases;
-(BOOL)isActive;
-(NSDictionary *)registrationAlertInfo;
-(long long)profileValidationStatus;
-(void)registerAccount;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(id)description;
-(BOOL)_isEnabled;
-(void)unvalidateAliases:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)regionID;
-(NSArray *)aliasesToRegister;
-(NSDictionary *)profileInfo;
-(void)unregisterAccount;
-(NSString *)serviceName;
-(void)removeAliases:(id)arg1 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(int)registrationError;
-(BOOL)isEnabled;
-(id)matchingSim;
-(NSString *)profileID;
-(void)authenticateAccount;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSString *)userUniqueIdentifier;
-(NSString *)displayName;
-(NSArray *)registeredURIs;
-(NSString *)primaryServiceName;
-(NSData *)registrationCertificate;
-(void)dealloc;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
@end

