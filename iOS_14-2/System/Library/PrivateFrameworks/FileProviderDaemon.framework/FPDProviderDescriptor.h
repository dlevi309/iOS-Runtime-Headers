/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface FPDProviderDescriptor : NSObject <NSSecureCoding> {

	BOOL _readonly;
	BOOL _enabledByDefault;
	BOOL _supportsEnumeration;
	BOOL _defaultDomainVisible;
	BOOL _shouldHideExtensionName;
	BOOL _canToggleDomainVisibility;
	BOOL _isAvailableSystemWide;
	BOOL _usesUniqueItemIdentifiersAcrossDevices;
	BOOL _supportsUnzippedPackages;
	BOOL _hasExplicitExtensionStorageURLs;
	BOOL _supportsPickingFolders;
	BOOL _owningApplicationIsManaged;
	NSString* _identifier;
	NSString* _localizedName;
	NSString* _topLevelBundleIdentifier;
	NSString* _bundleVersion;
	NSString* _extensionPointVersion;
	NSString* _purposeIdentifier;
	NSURL* _extensionBundleURL;
	NSArray* _supportedFileTypes;
	NSArray* _supportedSearchFilters;
	NSArray* _extensionStorageURLs;
	NSArray* _requestedExtendedAttributes;

}

@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * topLevelBundleIdentifier;                      //@synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSString * extensionPointVersion;                         //@synthesize extensionPointVersion=_extensionPointVersion - In the implementation block
@property (assign,nonatomic) BOOL readonly;                                            //@synthesize readonly=_readonly - In the implementation block
@property (assign,nonatomic) BOOL enabledByDefault;                                    //@synthesize enabledByDefault=_enabledByDefault - In the implementation block
@property (assign,nonatomic) BOOL supportsEnumeration;                                 //@synthesize supportsEnumeration=_supportsEnumeration - In the implementation block
@property (assign,nonatomic) BOOL defaultDomainVisible;                                //@synthesize defaultDomainVisible=_defaultDomainVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldHideExtensionName;                             //@synthesize shouldHideExtensionName=_shouldHideExtensionName - In the implementation block
@property (assign,nonatomic) BOOL canToggleDomainVisibility;                           //@synthesize canToggleDomainVisibility=_canToggleDomainVisibility - In the implementation block
@property (assign,nonatomic) BOOL isAvailableSystemWide;                               //@synthesize isAvailableSystemWide=_isAvailableSystemWide - In the implementation block
@property (assign,nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices;              //@synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices - In the implementation block
@property (assign,nonatomic) BOOL supportsUnzippedPackages;                            //@synthesize supportsUnzippedPackages=_supportsUnzippedPackages - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitExtensionStorageURLs;                     //@synthesize hasExplicitExtensionStorageURLs=_hasExplicitExtensionStorageURLs - In the implementation block
@property (assign,nonatomic) BOOL supportsPickingFolders;                              //@synthesize supportsPickingFolders=_supportsPickingFolders - In the implementation block
@property (assign,nonatomic) BOOL owningApplicationIsManaged;                          //@synthesize owningApplicationIsManaged=_owningApplicationIsManaged - In the implementation block
@property (nonatomic,retain) NSString * purposeIdentifier;                             //@synthesize purposeIdentifier=_purposeIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * extensionBundleURL;                               //@synthesize extensionBundleURL=_extensionBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedFileTypes;                             //@synthesize supportedFileTypes=_supportedFileTypes - In the implementation block
@property (nonatomic,retain) NSArray * supportedSearchFilters;                         //@synthesize supportedSearchFilters=_supportedSearchFilters - In the implementation block
@property (nonatomic,retain) NSArray * extensionStorageURLs;                           //@synthesize extensionStorageURLs=_extensionStorageURLs - In the implementation block
@property (nonatomic,retain) NSArray * requestedExtendedAttributes;                    //@synthesize requestedExtendedAttributes=_requestedExtendedAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)readonly;
-(NSString *)localizedName;
-(void)setReadonly:(BOOL)arg1 ;
-(BOOL)hasExplicitExtensionStorageURLs;
-(void)setRequestedExtendedAttributes:(NSArray *)arg1 ;
-(BOOL)supportsEnumeration;
-(void)setShouldHideExtensionName:(BOOL)arg1 ;
-(BOOL)owningApplicationIsManaged;
-(NSArray *)requestedExtendedAttributes;
-(void)setIsAvailableSystemWide:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)supportedFileTypes;
-(NSString *)topLevelBundleIdentifier;
-(void)setCanToggleDomainVisibility:(BOOL)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(NSArray *)extensionStorageURLs;
-(NSString *)bundleVersion;
-(void)setTopLevelBundleIdentifier:(NSString *)arg1 ;
-(void)setExtensionStorageURLs:(NSArray *)arg1 ;
-(void)setHasExplicitExtensionStorageURLs:(BOOL)arg1 ;
-(NSArray *)supportedSearchFilters;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(void)setUsesUniqueItemIdentifiersAcrossDevices:(BOOL)arg1 ;
-(void)setExtensionBundleURL:(NSURL *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setSupportsPickingFolders:(BOOL)arg1 ;
-(void)setEnabledByDefault:(BOOL)arg1 ;
-(void)setDefaultDomainVisible:(BOOL)arg1 ;
-(BOOL)shouldHideExtensionName;
-(BOOL)supportsPickingFolders;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsUnzippedPackages;
-(void)setExtensionPointVersion:(NSString *)arg1 ;
-(NSString *)purposeIdentifier;
-(NSURL *)extensionBundleURL;
-(void)setSupportsUnzippedPackages:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSupportedFileTypes:(NSArray *)arg1 ;
-(BOOL)isAvailableSystemWide;
-(BOOL)defaultDomainVisible;
-(BOOL)enabledByDefault;
-(BOOL)canToggleDomainVisibility;
-(BOOL)usesUniqueItemIdentifiersAcrossDevices;
-(NSString *)extensionPointVersion;
-(void)setSupportedSearchFilters:(NSArray *)arg1 ;
-(void)setOwningApplicationIsManaged:(BOOL)arg1 ;
-(void)setSupportsEnumeration:(BOOL)arg1 ;
@end

