/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSBundleInfo.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSURL, NSString, NSDictionary, NSArray, NSSet, NSNumber, _FBSCDHashCacheInfo;

@interface FBSApplicationInfo : FBSBundleInfo <BSDescriptionProviding> {

	NSURL* _executableURL;
	NSURL* _bundleContainerURL;
	NSURL* _dataContainerURL;
	NSURL* _sandboxURL;
	double _lastModifiedDate;
	NSString* _preferenceDomain;
	NSString* _teamIdentifier;
	NSString* _signerIdentity;
	NSDictionary* _environmentVariables;
	NSDictionary* _lazy_entitlements;
	BOOL _provisioningProfileValidated;
	BOOL _uppProvisioningProfileValidated;
	BOOL _freeDeveloperProvisioningProfileValidated;
	BOOL _isManaged;
	NSString* _sdkVersion;
	NSArray* _customMachServices;
	BOOL _hasViewServicesEntitlement;
	NSString* _appIDEntitlement;
	NSString* _shortVersionString;
	unsigned long long _type;
	NSArray* _requiredCapabilities;
	NSArray* _tags;
	NSArray* _deviceFamilies;
	BOOL _enabled;
	BOOL _restricted;
	BOOL _blocked;
	BOOL _beta;
	long long _interfaceOrientation;
	NSSet* _backgroundModes;
	unsigned long long _supportedInterfaceOrientations;
	BOOL _requiresPersistentWiFi;
	float _minimumBrightnessLevel;
	NSArray* _externalAccessoryProtocols;
	long long _ratingRank;
	NSNumber* _itemID;
	NSNumber* _purchaserDSID;
	NSNumber* _downloaderDSID;
	NSArray* _lazy_folderNames;
	NSString* _lazy_fallbackFolderName;
	BOOL _installing;
	BOOL _uninstalling;
	os_unfair_lock_s _lock;
	BOOL _initialized;
	BOOL _pendingUninstall;
	BOOL _supportsMultiwindow;
	long long _screenTimePolicy;
	NSArray* _folderNames;
	NSString* _fallbackFolderName;

}

@property (nonatomic,readonly) unsigned signatureVersion; 
@property (nonatomic,readonly) BOOL isSignatureVersionSupportEndingSoon; 
@property (retain) _FBSCDHashCacheInfo * cachedCDHashInfo; 
@property (getter=_appIDEntitlement,nonatomic,copy,readonly) NSString * appIDEntitlement;                                                      //@synthesize appIDEntitlement=_appIDEntitlement - In the implementation block
@property (assign,setter=_setInstalling:,getter=_isInstalling,nonatomic) BOOL installing;                                                      //@synthesize installing=_installing - In the implementation block
@property (assign,setter=_setUninstalling:,getter=_isUninstalling,nonatomic) BOOL uninstalling;                                                //@synthesize uninstalling=_uninstalling - In the implementation block
@property (assign,setter=_setPendingUninstall:,getter=_isPendingUninstall,nonatomic) BOOL pendingUninstall;                                    //@synthesize pendingUninstall=_pendingUninstall - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                                                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;                                                                //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSURL * executableURL;                                                                                          //@synthesize executableURL=_executableURL - In the implementation block
@property (nonatomic,readonly) NSURL * bundleContainerURL;                                                                                     //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                                                                                       //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSURL * sandboxURL;                                                                                             //@synthesize sandboxURL=_sandboxURL - In the implementation block
@property (nonatomic,readonly) double lastModifiedDate;                                                                                        //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferenceDomain;                                                                               //@synthesize preferenceDomain=_preferenceDomain - In the implementation block
@property (nonatomic,readonly) NSString * teamIdentifier;                                                                                      //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * signerIdentity;                                                                                 //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * environmentVariables;                                                                            //@synthesize environmentVariables=_environmentVariables - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) BOOL hasViewServicesEntitlement;                                                                                //@synthesize hasViewServicesEntitlement=_hasViewServicesEntitlement - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                                                                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) NSArray * customMachServices;                                                                                   //@synthesize customMachServices=_customMachServices - In the implementation block
@property (nonatomic,readonly) BOOL supportsMultiwindow;                                                                                       //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (getter=isProvisioningProfileValidated,nonatomic,readonly) BOOL provisioningProfileValidated;                                        //@synthesize provisioningProfileValidated=_provisioningProfileValidated - In the implementation block
@property (getter=isUPPProvisioningProfileValidated,nonatomic,readonly) BOOL UPPProvisioningProfileValidated;                                  //@synthesize uppProvisioningProfileValidated=_uppProvisioningProfileValidated - In the implementation block
@property (getter=isFreeDeveloperProvisioningProfileValidated,nonatomic,readonly) BOOL freeDeveloperProvisioningProfileValidated;              //@synthesize freeDeveloperProvisioningProfileValidated=_freeDeveloperProvisioningProfileValidated - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                                                        //@synthesize type=_type - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;                                                                            //@synthesize restricted=_restricted - In the implementation block
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked;                                                                                  //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,readonly) NSArray * requiredCapabilities;                                                                                 //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * deviceFamilies;                                                                                       //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (nonatomic,copy,readonly) NSString * sdkVersion;                                                                                     //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (getter=isBeta,nonatomic,readonly) BOOL beta;                                                                                        //@synthesize beta=_beta - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortVersionString;                                                                             //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (getter=isExitsOnSuspend,nonatomic,readonly) BOOL exitsOnSuspend; 
@property (nonatomic,readonly) BOOL requiresPersistentWiFi;                                                                                    //@synthesize requiresPersistentWiFi=_requiresPersistentWiFi - In the implementation block
@property (nonatomic,readonly) float minimumBrightnessLevel;                                                                                   //@synthesize minimumBrightnessLevel=_minimumBrightnessLevel - In the implementation block
@property (nonatomic,readonly) NSArray * externalAccessoryProtocols;                                                                           //@synthesize externalAccessoryProtocols=_externalAccessoryProtocols - In the implementation block
@property (nonatomic,readonly) long long screenTimePolicy;                                                                                     //@synthesize screenTimePolicy=_screenTimePolicy - In the implementation block
@property (getter=isBlockedForScreenTimeExpiration,nonatomic,readonly) BOOL blockedForScreenTimeExpiration; 
@property (nonatomic,readonly) long long ratingRank;                                                                                           //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,readonly) NSNumber * itemID;                                                                                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSNumber * purchaserDSID;                                                                                       //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * downloaderDSID;                                                                                      //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (nonatomic,readonly) NSArray * folderNames;                                                                                          //@synthesize folderNames=_folderNames - In the implementation block
@property (nonatomic,readonly) NSString * fallbackFolderName;                                                                                  //@synthesize fallbackFolderName=_fallbackFolderName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_applicationTypeForProxy:(id)arg1 ;
+(id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(BOOL)arg3 ;
-(BOOL)isBeta;
-(BOOL)isBlocked;
-(NSDictionary *)entitlements;
-(BOOL)isRestricted;
-(NSURL *)dataContainerURL;
-(unsigned)signatureVersion;
-(NSURL *)bundleContainerURL;
-(NSString *)signerIdentity;
-(NSArray *)tags;
-(NSArray *)externalAccessoryProtocols;
-(NSURL *)sandboxURL;
-(id)initWithApplicationProxy:(id)arg1 ;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(id)_initWithApplicationProxy:(id)arg1 overrideURL:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2 ;
-(NSArray *)deviceFamilies;
-(BOOL)builtOnOrAfterSDKVersion:(id)arg1 ;
-(NSArray *)customMachServices;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(void)_overrideTags:(id)arg1 ;
-(BOOL)supportsBackgroundMode:(id)arg1 ;
-(BOOL)supportsInterfaceOrientation:(long long)arg1 ;
-(BOOL)supportsAllInterfaceOrientations;
-(BOOL)hasViewServicesEntitlement;
-(BOOL)isProvisioningProfileValidated;
-(id)_appIDEntitlement;
-(long long)ratingRank;
-(BOOL)isUPPProvisioningProfileValidated;
-(BOOL)isFreeDeveloperProvisioningProfileValidated;
-(BOOL)requiresPersistentWiFi;
-(float)minimumBrightnessLevel;
-(BOOL)_isInstalling;
-(void)_setInstalling:(BOOL)arg1 ;
-(BOOL)_isUninstalling;
-(void)_setUninstalling:(BOOL)arg1 ;
-(BOOL)_isPendingUninstall;
-(void)_setPendingUninstall:(BOOL)arg1 ;
-(_FBSCDHashCacheInfo *)cachedCDHashInfo;
-(double)lastModifiedDate;
-(unsigned long long)unauthoritativeTrustState;
-(BOOL)isSignatureVersionSupportEndingSoon;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setCachedCDHashInfo:(_FBSCDHashCacheInfo *)arg1 ;
-(BOOL)supportsMultiwindow;
-(NSDictionary *)environmentVariables;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)isExitsOnSuspend;
-(unsigned long long)supportedInterfaceOrientations;
-(NSNumber *)purchaserDSID;
-(NSArray *)requiredCapabilities;
-(void)_loadFromProxy:(id)arg1 ;
-(NSNumber *)itemID;
-(NSNumber *)downloaderDSID;
-(long long)interfaceOrientation;
-(unsigned long long)type;
-(NSURL *)executableURL;
-(NSArray *)folderNames;
-(BOOL)isEnabled;
-(BOOL)supportsDeviceFamily:(unsigned long long)arg1 ;
-(NSString *)fallbackFolderName;
-(id)succinctDescriptionBuilder;
-(BOOL)isBlockedForScreenTimeExpiration;
-(NSString *)teamIdentifier;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(long long)screenTimePolicy;
-(void)_synchronize:(/*^block*/id)arg1 ;
-(NSString *)preferenceDomain;
-(NSString *)shortVersionString;
-(NSString *)sdkVersion;
@end

