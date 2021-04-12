/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSArray, NSDictionary, DMFAppManagementInformation;

@interface DMFApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPlaceholder;
	BOOL _isRestricted;
	BOOL _isBlocked;
	BOOL _isUserBasedVPP;
	BOOL _isDeviceBasedVPP;
	BOOL _isLicenseExpired;
	BOOL _isLicenseRevoked;
	BOOL _isUPP;
	BOOL _isValidated;
	BOOL _isAppStoreVendable;
	BOOL _isBetaApp;
	BOOL _isAdHocCodeSigned;
	BOOL _hasUpdateAvailable;
	unsigned long long _type;
	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSNumber* _storeItemIdentifier;
	NSNumber* _externalVersionIdentifier;
	NSString* _version;
	NSString* _shortVersion;
	NSNumber* _staticUsage;
	NSNumber* _dynamicUsage;
	NSNumber* _onDemandResourcesUsage;
	NSNumber* _sharedUsage;
	unsigned long long _installationState;
	NSString* _VPNUUIDString;
	NSArray* _associatedDomains;
	NSNumber* _associatedDomainsEnableDirectDownloads;
	NSNumber* _removable;
	NSDictionary* _configuration;
	NSDictionary* _feedback;
	DMFAppManagementInformation* _managementInformation;

}

@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                                   //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                             //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * version;                                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                                          //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSNumber * staticUsage;                                           //@synthesize staticUsage=_staticUsage - In the implementation block
@property (nonatomic,copy) NSNumber * dynamicUsage;                                          //@synthesize dynamicUsage=_dynamicUsage - In the implementation block
@property (nonatomic,copy) NSNumber * onDemandResourcesUsage;                                //@synthesize onDemandResourcesUsage=_onDemandResourcesUsage - In the implementation block
@property (nonatomic,copy) NSNumber * sharedUsage;                                           //@synthesize sharedUsage=_sharedUsage - In the implementation block
@property (assign,nonatomic) unsigned long long installationState;                           //@synthesize installationState=_installationState - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                                             //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL isRestricted;                                              //@synthesize isRestricted=_isRestricted - In the implementation block
@property (assign,nonatomic) BOOL isBlocked;                                                 //@synthesize isBlocked=_isBlocked - In the implementation block
@property (assign,nonatomic) BOOL isUserBasedVPP;                                            //@synthesize isUserBasedVPP=_isUserBasedVPP - In the implementation block
@property (assign,nonatomic) BOOL isDeviceBasedVPP;                                          //@synthesize isDeviceBasedVPP=_isDeviceBasedVPP - In the implementation block
@property (assign,nonatomic) BOOL isLicenseExpired;                                          //@synthesize isLicenseExpired=_isLicenseExpired - In the implementation block
@property (assign,nonatomic) BOOL isLicenseRevoked;                                          //@synthesize isLicenseRevoked=_isLicenseRevoked - In the implementation block
@property (assign,nonatomic) BOOL isUPP;                                                     //@synthesize isUPP=_isUPP - In the implementation block
@property (assign,nonatomic) BOOL isValidated;                                               //@synthesize isValidated=_isValidated - In the implementation block
@property (assign,nonatomic) BOOL isAppStoreVendable;                                        //@synthesize isAppStoreVendable=_isAppStoreVendable - In the implementation block
@property (assign,nonatomic) BOOL isBetaApp;                                                 //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (assign,nonatomic) BOOL isAdHocCodeSigned;                                         //@synthesize isAdHocCodeSigned=_isAdHocCodeSigned - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateAvailable;                                        //@synthesize hasUpdateAvailable=_hasUpdateAvailable - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                                         //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                                      //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSNumber * associatedDomainsEnableDirectDownloads;                //@synthesize associatedDomainsEnableDirectDownloads=_associatedDomainsEnableDirectDownloads - In the implementation block
@property (nonatomic,copy) NSNumber * removable;                                             //@synthesize removable=_removable - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * feedback;                                          //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) DMFAppManagementInformation * managementInformation;              //@synthesize managementInformation=_managementInformation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForInstallationState:(unsigned long long)arg1 ;
-(void)setFeedback:(NSDictionary *)arg1 ;
-(BOOL)isBlocked;
-(BOOL)isRestricted;
-(NSDictionary *)feedback;
-(NSNumber *)externalVersionIdentifier;
-(BOOL)isAdHocCodeSigned;
-(BOOL)isUPP;
-(NSNumber *)sharedUsage;
-(BOOL)isAppStoreVendable;
-(BOOL)isPlaceholder;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)shortVersion;
-(void)setIsBlocked:(BOOL)arg1 ;
-(NSArray *)associatedDomains;
-(void)setStaticUsage:(NSNumber *)arg1 ;
-(void)setDynamicUsage:(NSNumber *)arg1 ;
-(void)setOnDemandResourcesUsage:(NSNumber *)arg1 ;
-(void)setSharedUsage:(NSNumber *)arg1 ;
-(unsigned long long)installationState;
-(void)setInstallationState:(unsigned long long)arg1 ;
-(void)setIsRestricted:(BOOL)arg1 ;
-(BOOL)isUserBasedVPP;
-(void)setIsUserBasedVPP:(BOOL)arg1 ;
-(BOOL)isLicenseExpired;
-(void)setIsLicenseExpired:(BOOL)arg1 ;
-(BOOL)isLicenseRevoked;
-(void)setIsLicenseRevoked:(BOOL)arg1 ;
-(void)setIsUPP:(BOOL)arg1 ;
-(BOOL)isValidated;
-(void)setIsValidated:(BOOL)arg1 ;
-(void)setIsAppStoreVendable:(BOOL)arg1 ;
-(void)setIsBetaApp:(BOOL)arg1 ;
-(void)setIsAdHocCodeSigned:(BOOL)arg1 ;
-(BOOL)hasUpdateAvailable;
-(void)setHasUpdateAvailable:(BOOL)arg1 ;
-(NSNumber *)removable;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(NSNumber *)associatedDomainsEnableDirectDownloads;
-(void)setAssociatedDomainsEnableDirectDownloads:(NSNumber *)arg1 ;
-(void)setRemovable:(NSNumber *)arg1 ;
-(DMFAppManagementInformation *)managementInformation;
-(void)setManagementInformation:(DMFAppManagementInformation *)arg1 ;
-(id)description;
-(NSDictionary *)configuration;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIsDeviceBasedVPP:(BOOL)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isBetaApp;
-(unsigned long long)type;
-(NSNumber *)onDemandResourcesUsage;
-(id)initWithCoder:(id)arg1 ;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(BOOL)isDeviceBasedVPP;
-(NSNumber *)staticUsage;
-(void)setVersion:(NSString *)arg1 ;
-(id)_stringForType:(unsigned long long)arg1 ;
-(NSNumber *)dynamicUsage;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
@end

