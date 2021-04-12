/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FPItemCollection, NSString, NSArray, NSURL, NSProgress, NSFileProviderManager, NSFileProviderDomain, NSError;

@interface FPProviderDomain : NSObject <NSSecureCoding, NSCopying> {

	FPItemCollection* _itemCollection;
	BOOL _keepLocalStorageUpToDate;
	BOOL _readOnly;
	BOOL _supportsEnumeration;
	BOOL _isAvailableSystemWide;
	BOOL _enabled;
	BOOL _isConnectedToAppExtension;
	BOOL _canDisable;
	BOOL _hidden;
	BOOL _usesUniqueItemIdentifiersAcrossDevices;
	BOOL _supportsPickingFolders;
	BOOL _needsAuthentication;
	BOOL _ejectable;
	BOOL _shouldHideExtensionName;
	BOOL _shouldHideDomainDisplayName;
	NSString* _identifier;
	NSString* _providerID;
	NSArray* _supportedFileTypes;
	NSString* _topLevelBundleIdentifier;
	NSURL* _extensionBundleURL;
	NSArray* _storageURLs;
	NSArray* _supportedSearchFilters;
	NSProgress* _progress;
	NSFileProviderManager* _manager;
	NSString* _providerDisplayName;
	NSFileProviderDomain* _domain;
	NSString* _purposeIdentifier;
	NSString* _version;

}

@property (nonatomic,retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSFileProviderManager * manager;                        //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSString * providerDisplayName;                           //@synthesize providerDisplayName=_providerDisplayName - In the implementation block
@property (nonatomic,retain) NSFileProviderDomain * domain;                            //@synthesize domain=_domain - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                          //@synthesize readOnly=_readOnly - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (assign,getter=isEjectable,nonatomic) BOOL ejectable;                        //@synthesize ejectable=_ejectable - In the implementation block
@property (nonatomic,retain) NSArray * supportedSearchFilters;                         //@synthesize supportedSearchFilters=_supportedSearchFilters - In the implementation block
@property (assign,nonatomic) BOOL needsAuthentication;                                 //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (nonatomic,retain) NSURL * extensionBundleURL;                               //@synthesize extensionBundleURL=_extensionBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedFileTypes;                             //@synthesize supportedFileTypes=_supportedFileTypes - In the implementation block
@property (nonatomic,retain) NSString * purposeIdentifier;                             //@synthesize purposeIdentifier=_purposeIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * storageURLs;                                    //@synthesize storageURLs=_storageURLs - In the implementation block
@property (nonatomic,retain) NSString * version;                                       //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * topLevelBundleIdentifier;                      //@synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldHideExtensionName;                             //@synthesize shouldHideExtensionName=_shouldHideExtensionName - In the implementation block
@property (assign,nonatomic) BOOL shouldHideDomainDisplayName;                         //@synthesize shouldHideDomainDisplayName=_shouldHideDomainDisplayName - In the implementation block
@property (assign,nonatomic) BOOL canDisable;                                          //@synthesize canDisable=_canDisable - In the implementation block
@property (assign,nonatomic) BOOL supportsEnumeration;                                 //@synthesize supportsEnumeration=_supportsEnumeration - In the implementation block
@property (assign,nonatomic) BOOL isAvailableSystemWide;                               //@synthesize isAvailableSystemWide=_isAvailableSystemWide - In the implementation block
@property (assign,nonatomic) BOOL supportsPickingFolders;                              //@synthesize supportsPickingFolders=_supportsPickingFolders - In the implementation block
@property (assign,nonatomic) BOOL isConnectedToAppExtension;                           //@synthesize isConnectedToAppExtension=_isConnectedToAppExtension - In the implementation block
@property (assign,nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices;              //@synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices - In the implementation block
@property (readonly) NSString * spotlightMountPoint; 
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerID;                                  //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,readonly) NSString * domainDisplayName; 
@property (nonatomic,readonly) NSString * domainFullDisplayName; 
@property (nonatomic,readonly) NSString * iCloudAccountIdentifier; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSString * containingBundleIdentifier; 
@property (nonatomic,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,readonly) BOOL canDisconnect; 
@property (nonatomic,readonly) BOOL containsPhotos; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL isiCloudDriveProvider; 
@property (nonatomic,readonly) BOOL isMainiCloudDriveDomain; 
+(BOOL)supportsSecureCoding;
+(id)beginMonitoringProviderDomainChangesWithHandler:(/*^block*/id)arg1 ;
+(void)endMonitoringProviderDomainChanges:(id)arg1 ;
+(void)fetchProviderDomainForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchProviderDomainWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)providerDomainWithID:(id)arg1 error:(id*)arg2 ;
+(id)providerDomainForURL:(id)arg1 error:(id*)arg2 ;
+(id)providerDomainsWithError:(id*)arg1 ;
+(id)providerDomainForItem:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSFileProviderDomain *)domain;
-(BOOL)isEmpty;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(id)bundleURL;
-(id)providerIdentifier;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSProgress *)progress;
-(id)localizedName;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(NSString *)purposeIdentifier;
-(NSFileProviderManager *)manager;
-(BOOL)isEnabled;
-(BOOL)isHidden;
-(void)setDomain:(NSFileProviderDomain *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(NSString *)providerID;
-(BOOL)isEjectable;
-(void)setEjectable:(BOOL)arg1 ;
-(NSArray *)supportedFileTypes;
-(id)storageURL;
-(NSArray *)supportedSearchFilters;
-(BOOL)canDisconnect;
-(BOOL)supportsEnumeration;
-(BOOL)isAvailableSystemWide;
-(NSString *)topLevelBundleIdentifier;
-(NSURL *)extensionBundleURL;
-(BOOL)isiCloudDriveProvider;
-(NSString *)containingBundleIdentifier;
-(NSString *)extensionBundleIdentifier;
-(BOOL)needsAuthentication;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(id)initWithProviderID:(id)arg1 domain:(id)arg2 ;
-(NSString *)spotlightMountPoint;
-(BOOL)usesUniqueItemIdentifiersAcrossDevices;
-(NSString *)providerDisplayName;
-(NSArray *)storageURLs;
-(id)localizedTitleForSortDescriptor:(id)arg1 ;
-(NSString *)domainDisplayName;
-(BOOL)containsPhotos;
-(NSString *)domainFullDisplayName;
-(NSString *)iCloudAccountIdentifier;
-(void)setEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isMainiCloudDriveDomain;
-(void)setSupportedFileTypes:(NSArray *)arg1 ;
-(void)setSupportsEnumeration:(BOOL)arg1 ;
-(void)setTopLevelBundleIdentifier:(NSString *)arg1 ;
-(void)setExtensionBundleURL:(NSURL *)arg1 ;
-(void)setStorageURLs:(NSArray *)arg1 ;
-(void)setIsAvailableSystemWide:(BOOL)arg1 ;
-(BOOL)isConnectedToAppExtension;
-(void)setIsConnectedToAppExtension:(BOOL)arg1 ;
-(BOOL)canDisable;
-(void)setCanDisable:(BOOL)arg1 ;
-(void)setSupportedSearchFilters:(NSArray *)arg1 ;
-(void)setUsesUniqueItemIdentifiersAcrossDevices:(BOOL)arg1 ;
-(BOOL)supportsPickingFolders;
-(void)setSupportsPickingFolders:(BOOL)arg1 ;
-(void)setProviderDisplayName:(NSString *)arg1 ;
-(BOOL)shouldHideExtensionName;
-(void)setShouldHideExtensionName:(BOOL)arg1 ;
-(BOOL)shouldHideDomainDisplayName;
-(void)setShouldHideDomainDisplayName:(BOOL)arg1 ;
@end

