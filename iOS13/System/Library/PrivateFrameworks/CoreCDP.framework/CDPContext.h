/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <CoreCDP/CoreCDP-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CDPAuthProviderInternal;
@class NSDictionary, NSString, NSNumber, KCAESGCMDuplexSession, AKCircleRequestContext, CUMessageSession;

@interface CDPContext : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isHSA2Account;
	BOOL _isFederatedAccount;
	BOOL _didUseSMSVerification;
	BOOL _guestMode;
	BOOL _supportsSkipSignIn;
	BOOL __useSecureBackupCachedPassphrase;
	BOOL __alwaysCreateEscrowRecord;
	BOOL __ignoreLockAssertErrors;
	BOOL _idmsRecovery;
	BOOL _idmsMasterKeyRecovery;
	NSDictionary* _authenticationResults;
	NSString* _appleID;
	NSString* _password;
	NSString* _passwordEquivToken;
	NSNumber* _dsid;
	NSString* _altDSID;
	long long _type;
	NSString* _cachedLocalSecret;
	unsigned long long _cachedLocalSecretType;
	NSString* _findMyiPhoneUUID;
	id<CDPAuthProviderInternal> __authProvider;
	KCAESGCMDuplexSession* _duplexSession;
	AKCircleRequestContext* _resumeContext;
	CUMessageSession* _sharingChannel;
	NSString* __recoveryToken;

}

@property (nonatomic,retain) id<CDPAuthProviderInternal> _authProvider;              //@synthesize _authProvider=__authProvider - In the implementation block
@property (nonatomic,retain) KCAESGCMDuplexSession * duplexSession;                  //@synthesize duplexSession=_duplexSession - In the implementation block
@property (nonatomic,retain) AKCircleRequestContext * resumeContext;                 //@synthesize resumeContext=_resumeContext - In the implementation block
@property (nonatomic,retain) CUMessageSession * sharingChannel;                      //@synthesize sharingChannel=_sharingChannel - In the implementation block
@property (assign,nonatomic) BOOL _useSecureBackupCachedPassphrase;                  //@synthesize _useSecureBackupCachedPassphrase=__useSecureBackupCachedPassphrase - In the implementation block
@property (assign,nonatomic) BOOL _alwaysCreateEscrowRecord;                         //@synthesize _alwaysCreateEscrowRecord=__alwaysCreateEscrowRecord - In the implementation block
@property (nonatomic,copy) NSString * _recoveryToken;                                //@synthesize _recoveryToken=__recoveryToken - In the implementation block
@property (assign,nonatomic) BOOL _ignoreLockAssertErrors;                           //@synthesize _ignoreLockAssertErrors=__ignoreLockAssertErrors - In the implementation block
@property (assign,nonatomic) BOOL idmsRecovery;                                      //@synthesize idmsRecovery=_idmsRecovery - In the implementation block
@property (assign,nonatomic) BOOL idmsMasterKeyRecovery;                             //@synthesize idmsMasterKeyRecovery=_idmsMasterKeyRecovery - In the implementation block
@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDictionary * authenticationResults;                     //@synthesize authenticationResults=_authenticationResults - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                       //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * password;                                      //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * passwordEquivToken;                            //@synthesize passwordEquivToken=_passwordEquivToken - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                          //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                       //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL isHSA2Account;                                     //@synthesize isHSA2Account=_isHSA2Account - In the implementation block
@property (assign,nonatomic) BOOL isFederatedAccount;                                //@synthesize isFederatedAccount=_isFederatedAccount - In the implementation block
@property (assign,nonatomic) BOOL didUseSMSVerification;                             //@synthesize didUseSMSVerification=_didUseSMSVerification - In the implementation block
@property (nonatomic,copy) NSString * cachedLocalSecret;                             //@synthesize cachedLocalSecret=_cachedLocalSecret - In the implementation block
@property (assign,nonatomic) unsigned long long cachedLocalSecretType;               //@synthesize cachedLocalSecretType=_cachedLocalSecretType - In the implementation block
@property (assign,nonatomic) BOOL guestMode;                                         //@synthesize guestMode=_guestMode - In the implementation block
@property (copy) NSString * findMyiPhoneUUID;                                        //@synthesize findMyiPhoneUUID=_findMyiPhoneUUID - In the implementation block
@property (assign) BOOL supportsSkipSignIn;                                          //@synthesize supportsSkipSignIn=_supportsSkipSignIn - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)preflightContext:(id)arg1 ;
-(void)reauthenticateUserWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAuthenticationResults:(NSDictionary *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(BOOL)guestMode;
-(void)setGuestMode:(BOOL)arg1 ;
-(void)setSharingChannel:(CUMessageSession *)arg1 ;
-(id)initWithAuthenticationResults:(id)arg1 ;
-(void)setPasswordEquivToken:(NSString *)arg1 ;
-(void)setIdmsMasterKeyRecovery:(BOOL)arg1 ;
-(BOOL)idmsMasterKeyRecovery;
-(void)setIdmsRecovery:(BOOL)arg1 ;
-(NSDictionary *)authenticationResults;
-(void)set_ignoreLockAssertErrors:(BOOL)arg1 ;
-(BOOL)_ignoreLockAssertErrors;
-(AKCircleRequestContext *)resumeContext;
-(BOOL)isFederatedAccount;
-(BOOL)idmsRecovery;
-(NSString *)findMyiPhoneUUID;
-(NSString *)passwordEquivToken;
-(void)purgeResumeData;
-(BOOL)desiresAllRecords;
-(void)updateWithAuthenticationResults:(id)arg1 ;
-(void)augmentWithCredentialsFromContext:(id)arg1 ;
-(id)cliqueConfiguration;
-(BOOL)isHSA2Account;
-(void)setIsHSA2Account:(BOOL)arg1 ;
-(void)setIsFederatedAccount:(BOOL)arg1 ;
-(BOOL)didUseSMSVerification;
-(void)setDidUseSMSVerification:(BOOL)arg1 ;
-(NSString *)cachedLocalSecret;
-(void)setCachedLocalSecret:(NSString *)arg1 ;
-(unsigned long long)cachedLocalSecretType;
-(void)setCachedLocalSecretType:(unsigned long long)arg1 ;
-(void)setFindMyiPhoneUUID:(NSString *)arg1 ;
-(BOOL)supportsSkipSignIn;
-(void)setSupportsSkipSignIn:(BOOL)arg1 ;
-(id<CDPAuthProviderInternal>)_authProvider;
-(void)set_authProvider:(id<CDPAuthProviderInternal>)arg1 ;
-(KCAESGCMDuplexSession *)duplexSession;
-(void)setDuplexSession:(KCAESGCMDuplexSession *)arg1 ;
-(void)setResumeContext:(AKCircleRequestContext *)arg1 ;
-(CUMessageSession *)sharingChannel;
-(BOOL)_useSecureBackupCachedPassphrase;
-(void)set_useSecureBackupCachedPassphrase:(BOOL)arg1 ;
-(BOOL)_alwaysCreateEscrowRecord;
-(void)set_alwaysCreateEscrowRecord:(BOOL)arg1 ;
-(NSString *)_recoveryToken;
-(void)set_recoveryToken:(NSString *)arg1 ;
@end

