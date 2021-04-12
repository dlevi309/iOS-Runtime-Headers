/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface IXPlaceholderAttributes : NSObject <NSSecureCoding, NSCopying> {

	BOOL _launchProhibited;
	BOOL _watchOnlyApp;
	BOOL _runsIndependentlyOfCompanionApp;
	BOOL _arcadeApp;
	NSString* _bundleVersion;
	NSDictionary* _extensionDictionary;
	NSString* _minimumOSVersion;
	NSDictionary* _requiredDeviceCapabilities;
	NSArray* _sbAppTags;
	NSArray* _lsCounterpartIdentifiers;
	NSString* _sbIconMasqueradeIdentifier;
	NSString* _companionBundleIdentifierForWatchApp;

}

@property (assign,nonatomic) BOOL launchProhibited;                                      //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * extensionDictionary;                           //@synthesize extensionDictionary=_extensionDictionary - In the implementation block
@property (nonatomic,copy) NSString * minimumOSVersion;                                  //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * requiredDeviceCapabilities;                    //@synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities - In the implementation block
@property (nonatomic,copy) NSArray * sbAppTags;                                          //@synthesize sbAppTags=_sbAppTags - In the implementation block
@property (nonatomic,copy) NSArray * lsCounterpartIdentifiers;                           //@synthesize lsCounterpartIdentifiers=_lsCounterpartIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * sbIconMasqueradeIdentifier;                        //@synthesize sbIconMasqueradeIdentifier=_sbIconMasqueradeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * companionBundleIdentifierForWatchApp;              //@synthesize companionBundleIdentifierForWatchApp=_companionBundleIdentifierForWatchApp - In the implementation block
@property (assign,nonatomic) BOOL watchOnlyApp;                                          //@synthesize watchOnlyApp=_watchOnlyApp - In the implementation block
@property (assign,nonatomic) BOOL runsIndependentlyOfCompanionApp;                       //@synthesize runsIndependentlyOfCompanionApp=_runsIndependentlyOfCompanionApp - In the implementation block
@property (assign,nonatomic) BOOL arcadeApp;                                             //@synthesize arcadeApp=_arcadeApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)runsIndependentlyOfCompanionApp;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)launchProhibited;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(NSString *)bundleVersion;
-(void)setRequiredDeviceCapabilities:(NSDictionary *)arg1 ;
-(id)description;
-(NSString *)minimumOSVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)requiredDeviceCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMinimumOSVersion:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInfoPlistFromBundle:(CFBundleRef)arg1 error:(id*)arg2 ;
-(void)setExtensionDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)extensionDictionary;
-(NSArray *)sbAppTags;
-(NSArray *)lsCounterpartIdentifiers;
-(NSString *)sbIconMasqueradeIdentifier;
-(NSString *)companionBundleIdentifierForWatchApp;
-(BOOL)watchOnlyApp;
-(BOOL)arcadeApp;
-(void)setSbAppTags:(NSArray *)arg1 ;
-(void)setLsCounterpartIdentifiers:(NSArray *)arg1 ;
-(void)setSbIconMasqueradeIdentifier:(NSString *)arg1 ;
-(void)setCompanionBundleIdentifierForWatchApp:(NSString *)arg1 ;
-(void)setWatchOnlyApp:(BOOL)arg1 ;
-(void)setRunsIndependentlyOfCompanionApp:(BOOL)arg1 ;
-(void)setArcadeApp:(BOOL)arg1 ;
-(id)_plistKeys;
-(id)initWithInfoPlistDictionary:(id)arg1 ;
-(void)setRequiredDeviceCapabilitiesWithArray:(id)arg1 ;
-(id)infoPlistContent;
-(id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id*)arg2 ;
@end

