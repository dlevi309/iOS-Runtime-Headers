/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString;

@interface CKDApplicationMetadata : NSObject {

	BOOL _isCKSystemService;
	BOOL _canMasquerade;
	BOOL _canSetEnvironment;
	BOOL _allowCustomAccounts;
	BOOL _canAccessProtectionData;
	BOOL _canAccessZoneProtectionData;
	BOOL _canSetDeviceIdentifier;
	BOOL _hasAccessDuringBuddy;
	BOOL _hasLightweightPCS;
	BOOL _hasTCCAuthorization;
	BOOL _allowsPowerNapScheduling;
	BOOL _isOOPUI;
	BOOL _allowsParticipantPII;
	BOOL _displaysSystemAcceptPrompt;
	BOOL _canUseNonLegacyShareURL;
	BOOL _allowUnverifiedAccount;
	NSString* _apsEnvironmentString;
	long long _contextType;
	NSString* _entitlementSpecifiedPCSServiceName;
	NSString* _applicationIdentifier;
	NSString* _clientPrefix;
	NSString* _pushBundleID;
	NSString* _associatedApplicationBundleID;
	NSString* _applicationContainerPath;

}

@property (nonatomic,retain) NSString * apsEnvironmentString;                            //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (assign,nonatomic) long long contextType;                                      //@synthesize contextType=_contextType - In the implementation block
@property (assign,nonatomic) BOOL isCKSystemService;                                     //@synthesize isCKSystemService=_isCKSystemService - In the implementation block
@property (assign,nonatomic) BOOL canMasquerade;                                         //@synthesize canMasquerade=_canMasquerade - In the implementation block
@property (assign,nonatomic) BOOL canSetEnvironment;                                     //@synthesize canSetEnvironment=_canSetEnvironment - In the implementation block
@property (assign,nonatomic) BOOL allowCustomAccounts;                                   //@synthesize allowCustomAccounts=_allowCustomAccounts - In the implementation block
@property (assign,nonatomic) BOOL canAccessProtectionData;                               //@synthesize canAccessProtectionData=_canAccessProtectionData - In the implementation block
@property (assign,nonatomic) BOOL canAccessZoneProtectionData;                           //@synthesize canAccessZoneProtectionData=_canAccessZoneProtectionData - In the implementation block
@property (assign,nonatomic) BOOL canSetDeviceIdentifier;                                //@synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAccessDuringBuddy;                                  //@synthesize hasAccessDuringBuddy=_hasAccessDuringBuddy - In the implementation block
@property (assign,nonatomic) BOOL hasLightweightPCS;                                     //@synthesize hasLightweightPCS=_hasLightweightPCS - In the implementation block
@property (assign,nonatomic) BOOL hasTCCAuthorization;                                   //@synthesize hasTCCAuthorization=_hasTCCAuthorization - In the implementation block
@property (assign,nonatomic) BOOL allowsPowerNapScheduling;                              //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (assign,nonatomic) BOOL isOOPUI;                                               //@synthesize isOOPUI=_isOOPUI - In the implementation block
@property (assign,nonatomic) BOOL allowsParticipantPII;                                  //@synthesize allowsParticipantPII=_allowsParticipantPII - In the implementation block
@property (assign,nonatomic) BOOL displaysSystemAcceptPrompt;                            //@synthesize displaysSystemAcceptPrompt=_displaysSystemAcceptPrompt - In the implementation block
@property (nonatomic,retain) NSString * entitlementSpecifiedPCSServiceName;              //@synthesize entitlementSpecifiedPCSServiceName=_entitlementSpecifiedPCSServiceName - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                           //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientPrefix;                                    //@synthesize clientPrefix=_clientPrefix - In the implementation block
@property (nonatomic,retain) NSString * pushBundleID;                                    //@synthesize pushBundleID=_pushBundleID - In the implementation block
@property (nonatomic,retain) NSString * associatedApplicationBundleID;                   //@synthesize associatedApplicationBundleID=_associatedApplicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * applicationContainerPath;                        //@synthesize applicationContainerPath=_applicationContainerPath - In the implementation block
@property (assign,nonatomic) BOOL canUseNonLegacyShareURL;                               //@synthesize canUseNonLegacyShareURL=_canUseNonLegacyShareURL - In the implementation block
@property (assign,nonatomic) BOOL allowUnverifiedAccount;                                //@synthesize allowUnverifiedAccount=_allowUnverifiedAccount - In the implementation block
-(long long)contextType;
-(NSString *)applicationContainerPath;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setAllowsPowerNapScheduling:(BOOL)arg1 ;
-(void)setHasLightweightPCS:(BOOL)arg1 ;
-(void)setCanSetDeviceIdentifier:(BOOL)arg1 ;
-(void)setContextType:(long long)arg1 ;
-(BOOL)hasAccessDuringBuddy;
-(id)init;
-(void)setAssociatedApplicationBundleID:(NSString *)arg1 ;
-(void)setIsOOPUI:(BOOL)arg1 ;
-(BOOL)allowCustomAccounts;
-(void)setEntitlementSpecifiedPCSServiceName:(NSString *)arg1 ;
-(void)setAllowUnverifiedAccount:(BOOL)arg1 ;
-(void)setPushBundleID:(NSString *)arg1 ;
-(void)setAllowsParticipantPII:(BOOL)arg1 ;
-(BOOL)canAccessZoneProtectionData;
-(NSString *)entitlementSpecifiedPCSServiceName;
-(void)setCanSetEnvironment:(BOOL)arg1 ;
-(BOOL)canAccessProtectionData;
-(BOOL)isOOPUI;
-(NSString *)applicationIdentifier;
-(void)setHasAccessDuringBuddy:(BOOL)arg1 ;
-(void)setAllowCustomAccounts:(BOOL)arg1 ;
-(BOOL)canMasquerade;
-(BOOL)displaysSystemAcceptPrompt;
-(BOOL)allowUnverifiedAccount;
-(void)setApplicationContainerPath:(NSString *)arg1 ;
-(void)setCanAccessZoneProtectionData:(BOOL)arg1 ;
-(NSString *)apsEnvironmentString;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasLightweightPCS;
-(void)setCanAccessProtectionData:(BOOL)arg1 ;
-(void)setIsCKSystemService:(BOOL)arg1 ;
-(void)setCanMasquerade:(BOOL)arg1 ;
-(BOOL)canSetDeviceIdentifier;
-(void)setClientPrefix:(NSString *)arg1 ;
-(BOOL)allowsPowerNapScheduling;
-(BOOL)canSetEnvironment;
-(NSString *)clientPrefix;
-(BOOL)allowsParticipantPII;
-(void)setHasTCCAuthorization:(BOOL)arg1 ;
-(void)setCanUseNonLegacyShareURL:(BOOL)arg1 ;
-(BOOL)canUseNonLegacyShareURL;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(NSString *)pushBundleID;
-(NSString *)associatedApplicationBundleID;
-(BOOL)isCKSystemService;
-(void)setDisplaysSystemAcceptPrompt:(BOOL)arg1 ;
@end

