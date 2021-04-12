/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(_IDSAccount *)_internal;
-(void)setPassword:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)displayName;
-(NSString *)serviceName;
-(BOOL)isEnabled;
-(BOOL)_isEnabled;
-(NSArray *)handles;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)pushToken;
-(NSArray *)devices;
-(int)accountType;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAuthToken:(id)arg1 ;
-(NSArray *)vettedAliases;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerAccount;
-(void)authenticateAccount;
-(int)registrationStatus;
-(NSArray *)aliasesToRegister;
-(void)addAliases:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(id)matchingSim;
-(NSString *)userUniqueIdentifier;
-(NSString *)primaryServiceName;
-(NSData *)registrationCertificate;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(NSString *)loginID;
-(NSDictionary *)accountInfo;
-(NSArray *)aliases;
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
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setLoginID:(NSString *)arg1 ;
@end

