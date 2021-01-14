/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
*/

#import <AppConduit/AppConduit-Structs.h>
#import <libobjc.A.dylib/ACXSyncedApp.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray, NSUUID, MIStoreMetadata;

@interface ACXRemoteApplication : NSObject <ACXSyncedApp, NSSecureCoding, NSCopying> {

	BOOL _isDeletable;
	BOOL _isBetaApp;
	BOOL _isProfileValidated;
	BOOL _hasClockfaces;
	BOOL _isLocallyAvailable;
	NSString* _bundleIdentifier;
	NSString* _applicationName;
	unsigned long long _applicationType;
	unsigned long long _applicationMode;
	NSString* _bundleVersion;
	NSString* _bundleShortVersion;
	NSString* _minimumOSVersion;
	NSDictionary* _requiredCapabilities;
	NSString* _watchKitVersion;
	NSString* _companionAppBundleID;
	NSString* _watchKitAppExecutableHash;
	NSString* _watchKitAppExtensionBundleID;
	NSString* _teamID;
	NSString* _complicationPrincipalClass;
	NSArray* _supportedComplicationFamilies;
	NSArray* _intentsRestrictedWhileLocked;
	NSArray* _intentsSupported;
	NSArray* _userActivityTypes;
	NSUUID* _databaseUUID;
	unsigned long long _sequenceNumber;
	NSDictionary* _localizedInfoPlistStrings;
	NSArray* _architectureSlices;
	MIStoreMetadata* _storeMetadata;
	NSArray* _counterpartIdentifiers;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationName;                            //@synthesize applicationName=_applicationName - In the implementation block
@property (assign,nonatomic) unsigned long long applicationType;                  //@synthesize applicationType=_applicationType - In the implementation block
@property (assign,nonatomic) unsigned long long applicationMode;                  //@synthesize applicationMode=_applicationMode - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                                    //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleShortVersion;                         //@synthesize bundleShortVersion=_bundleShortVersion - In the implementation block
@property (nonatomic,copy) NSString * minimumOSVersion;                           //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * requiredCapabilities;                   //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,copy) NSString * watchKitVersion;                            //@synthesize watchKitVersion=_watchKitVersion - In the implementation block
@property (nonatomic,copy) NSString * companionAppBundleID;                       //@synthesize companionAppBundleID=_companionAppBundleID - In the implementation block
@property (nonatomic,copy) NSArray * counterpartIdentifiers;                      //@synthesize counterpartIdentifiers=_counterpartIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * watchKitAppExecutableHash;                  //@synthesize watchKitAppExecutableHash=_watchKitAppExecutableHash - In the implementation block
@property (nonatomic,copy) NSString * watchKitAppExtensionBundleID;               //@synthesize watchKitAppExtensionBundleID=_watchKitAppExtensionBundleID - In the implementation block
@property (assign,nonatomic) BOOL isBetaApp;                                      //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (assign,nonatomic) BOOL isProfileValidated;                             //@synthesize isProfileValidated=_isProfileValidated - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                     //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * complicationPrincipalClass;                 //@synthesize complicationPrincipalClass=_complicationPrincipalClass - In the implementation block
@property (nonatomic,copy) NSArray * supportedComplicationFamilies;               //@synthesize supportedComplicationFamilies=_supportedComplicationFamilies - In the implementation block
@property (nonatomic,copy) NSArray * intentsRestrictedWhileLocked;                //@synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked - In the implementation block
@property (nonatomic,copy) NSArray * intentsSupported;                            //@synthesize intentsSupported=_intentsSupported - In the implementation block
@property (nonatomic,copy) NSArray * userActivityTypes;                           //@synthesize userActivityTypes=_userActivityTypes - In the implementation block
@property (assign,nonatomic) BOOL hasClockfaces;                                  //@synthesize hasClockfaces=_hasClockfaces - In the implementation block
@property (nonatomic,retain) NSUUID * databaseUUID;                               //@synthesize databaseUUID=_databaseUUID - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedInfoPlistStrings;              //@synthesize localizedInfoPlistStrings=_localizedInfoPlistStrings - In the implementation block
@property (nonatomic,copy) MIStoreMetadata * storeMetadata;                       //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,copy) NSArray * architectureSlices;                          //@synthesize architectureSlices=_architectureSlices - In the implementation block
@property (assign,nonatomic) BOOL isLocallyAvailable;                             //@synthesize isLocallyAvailable=_isLocallyAvailable - In the implementation block
@property (nonatomic,readonly) BOOL isSystemApp; 
@property (nonatomic,readonly) BOOL hasComplication; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(id)serialize;
-(NSArray *)userActivityTypes;
-(unsigned long long)applicationType;
-(NSString *)complicationPrincipalClass;
-(NSString *)watchKitVersion;
-(BOOL)hasComplication;
-(BOOL)isProfileValidated;
-(NSArray *)intentsRestrictedWhileLocked;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)supportedComplicationFamilies;
-(NSString *)applicationName;
-(NSArray *)counterpartIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)sequenceNumber;
-(void)setIsLocallyAvailable:(BOOL)arg1 ;
-(id)initWithSerializedDictionary:(id)arg1 ;
-(void)setStoreMetadata:(MIStoreMetadata *)arg1 ;
-(NSString *)bundleVersion;
-(BOOL)isSystemApp;
-(void)setCounterpartIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)requiredCapabilities;
-(MIStoreMetadata *)storeMetadata;
-(void)setIsBetaApp:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)minimumOSVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)isBetaApp;
-(NSString *)bundleShortVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(BOOL)isLocallyAvailable;
-(NSString *)watchKitAppExecutableHash;
-(void)setWatchKitAppExecutableHash:(NSString *)arg1 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setBundleShortVersion:(NSString *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setDatabaseUUID:(NSUUID *)arg1 ;
-(BOOL)isDeletable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinimumOSVersion:(NSString *)arg1 ;
-(NSUUID *)databaseUUID;
-(void)setRequiredCapabilities:(NSDictionary *)arg1 ;
-(id)localizedInfoPlistStringsForKeys:(id)arg1 fetchingFirstMatchingLocalizationInList:(id)arg2 ;
-(NSArray *)intentsSupported;
-(NSString *)companionAppBundleID;
-(NSString *)watchKitAppExtensionBundleID;
-(id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(id)initWithApplicationProxy:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(void)setApplicationType:(unsigned long long)arg1 ;
-(void)setIsProfileValidated:(BOOL)arg1 ;
-(void)setCompanionAppBundleID:(NSString *)arg1 ;
-(void)setWatchKitAppExtensionBundleID:(NSString *)arg1 ;
-(void)setWatchKitVersion:(NSString *)arg1 ;
-(void)setApplicationMode:(unsigned long long)arg1 ;
-(void)setArchitectureSlices:(NSArray *)arg1 ;
-(void)setUserActivityTypes:(NSArray *)arg1 ;
-(void)setComplicationPrincipalClass:(NSString *)arg1 ;
-(void)setSupportedComplicationFamilies:(NSArray *)arg1 ;
-(void)setIntentsSupported:(NSArray *)arg1 ;
-(void)setIntentsRestrictedWhileLocked:(NSArray *)arg1 ;
-(void)setHasClockfaces:(BOOL)arg1 ;
-(void)setLocalizedInfoPlistStrings:(NSDictionary *)arg1 ;
-(id)serializeAsRemoteApplication;
-(unsigned long long)applicationMode;
-(NSArray *)architectureSlices;
-(NSDictionary *)localizedInfoPlistStrings;
-(BOOL)isCompatibleWithOSVersion:(id)arg1 ;
-(BOOL)isRuntimeCompatibleWithOSVersion:(id)arg1 ;
-(BOOL)isCompatibleWithCPUType:(int)arg1 subtype:(int)arg2 ;
-(BOOL)isTheSameAppAs:(id)arg1 ;
-(BOOL)hasClockfaces;
@end

