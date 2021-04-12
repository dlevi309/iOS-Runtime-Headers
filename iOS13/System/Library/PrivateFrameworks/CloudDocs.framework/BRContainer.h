/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class BRMangledID, NSSet, NSDictionary, NSString, NSNumber, NSDate, NSData, NSPurgeableData, NSObject, NSURL;

@interface BRContainer : NSObject <NSSecureCoding> {

	BRMangledID* _mangledID;
	NSSet* _bundleIDs;
	NSDictionary* _bundleIDVersions;
	NSString* _localizedName;
	NSSet* _documentsTypes;
	NSSet* _exportedTypes;
	NSSet* _importedTypes;
	NSDictionary* _iconMetadata;
	NSDictionary* _iconURLs;
	NSNumber* _iconGeneratorVersion;
	BOOL _isObservingOverQuota;
	BOOL _isOverQuota;
	BOOL _isCloudSyncTCCDisabled;
	BOOL _isInInitialState;
	BOOL _isInCloudDocsZone;
	NSNumber* _isDocumentScopePublicAsNumber;
	BOOL _isObservingLastServerUpdate;
	NSDate* _lastServerUpdate;
	BOOL _isObservingCurrentStatus;
	unsigned _currentStatus;
	NSData* _imageSandboxExtension;
	BOOL _shouldUsePurgeableData;
	NSData* _dataRepresentation;
	NSPurgeableData* _purgeableDataRepresentation;
	NSObject*<OS_dispatch_queue> _observationSetupQueueForDefaultConnection;
	NSObject*<OS_dispatch_queue> _observationSetupQueueForSecondaryConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) NSDate * lastServerUpdate; 
@property (readonly) unsigned currentStatus; 
@property (retain) NSDate * lastServerUpdate; 
@property (assign) unsigned currentStatus; 
@property (getter=isOverQuota,readonly) BOOL overQuota; 
@property (getter=isOverQuota) BOOL overQuota; 
@property (assign,nonatomic) BOOL isCloudSyncTCCDisabled;                     //@synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled - In the implementation block
@property (assign,nonatomic) BOOL isInInitialState;                           //@synthesize isInInitialState=_isInInitialState - In the implementation block
@property (assign,nonatomic) BOOL isInCloudDocsZone;                          //@synthesize isInCloudDocsZone=_isInCloudDocsZone - In the implementation block
@property (nonatomic,copy,readonly) NSSet * bundleIdentifiers; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) BOOL isDocumentScopePublic; 
@property (nonatomic,readonly) NSString * supportedFolderLevels; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURL * documentsURL; 
@property (nonatomic,readonly) NSURL * trashURL; 
@property (nonatomic,readonly) NSSet * documentsTypes; 
@property (nonatomic,readonly) NSSet * exportedTypes; 
@property (nonatomic,readonly) NSSet * importedTypes; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)allContainersByContainerID;
+(BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2 ;
+(id)containerForMangledID:(id)arg1 ;
+(id)classesForDecoding;
+(id)localizedNameForDefaultCloudDocsContainer;
+(id)localizedNameForDesktopContainer;
+(id)localizedNameForDocumentsContainer;
+(id)documentContainers;
+(id)allContainers;
+(id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)_bundleIDVersionsWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)_bundleIDsWithProperties:(id)arg1 ;
+(id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2 preferredLanguages:(id)arg3 ;
+(id)_documentsTypesWithProperties:(id)arg1 ;
+(id)_exportedTypesWithProperties:(id)arg1 ;
+(id)_importedTypesWithProperties:(id)arg1 ;
+(id)_iconMetadataWithProperties:(id)arg1 ;
+(id)_iconGeneratorVersionWithProperties:(id)arg1 ;
+(id)allContainersBlockIfNeeded:(BOOL)arg1 ;
+(void)forceRefreshContainers:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)postContainerListUpdateNotification;
+(id)_containerRepositoryURLForMangledID:(id)arg1 ;
+(id)containersRepositoryURL;
+(id)_URLForPlistOfMangledID:(id)arg1 ;
+(id)bundleIdentifiersEnumeratorForProperties:(id)arg1 ;
+(id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3 ;
+(id)_sanitizedContainerFallbackNameForMangledID:(id)arg1 ;
+(id)_pathForIconName:(id)arg1 mangledID:(id)arg2 ;
+(BOOL)canMoveFilesWithoutDownloadingFromContainer:(id)arg1 toContainer:(id)arg2 ;
+(void)forceRefreshAllContainersWithCompletion:(/*^block*/id)arg1 ;
+(id)_iconURLsWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id*)arg3 ;
+(id)documentsContainersInBackupHomeAtURL:(id)arg1 error:(id*)arg2 ;
+(id)containerInRepositoryURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForItemAtURL:(id)arg1 error:(id*)arg2 ;
+(void)_generateiOSIconsForMangledID:(id)arg1 usingBundle:(CFBundleRef)arg2 generatedIcons:(id)arg3 ;
+(BOOL)isDocumentScopePublicWithProperties:(id)arg1 mangledID:(id)arg2 ;
+(void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3 ;
+(id)propertiesForMangledID:(id)arg1 usingBundle:(CFBundleRef)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4 ;
+(void)unregisterCurrentProcessAsPriorityHint;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSURL *)url;
-(NSString *)localizedName;
-(NSSet *)importedTypes;
-(NSSet *)exportedTypes;
-(id)shortDescription;
-(NSURL *)documentsURL;
-(NSSet *)bundleIdentifiers;
-(id)trashRestoreStringForURL:(id)arg1 ;
-(BOOL)isDocumentScopePublic;
-(id)localizedNameWithPreferredLanguages:(id)arg1 ;
-(BOOL)containsExcludedDocumentsOnTheFSWithExcludedButPreservedFilename:(id)arg1 excludedButPreservedExtensions:(id)arg2 andStampUploadedAppWithXattr:(BOOL)arg3 ;
-(NSURL *)trashURL;
-(id)initWithMangledID:(id)arg1 ;
-(void)_replaceDataRepresentationWithData:(id)arg1 ;
-(id)_pathForPlist;
-(void)accessDataRepresentationInBlock:(/*^block*/id)arg1 ;
-(void)accessPropertiesInBlock:(/*^block*/id)arg1 ;
-(id)computedProperties;
-(id)iconMetadata;
-(id)_imageDataForSize:(CGSize)arg1 scale:(long long)arg2 isiOSIcon:(BOOL*)arg3 shouldTransformToAppIcon:(BOOL*)arg4 ;
-(id)_pathForIconName:(id)arg1 ;
-(id)iconGeneratorVersion;
-(BOOL)isInCloudDocsZone;
-(id)_containerRepositoryURL;
-(id)initWithDocsOrDesktopContainerID:(id)arg1 ;
-(id)initWithMangledID:(id)arg1 dataRepresentation:(id)arg2 ;
-(id)bundleIDVersions;
-(NSString *)supportedFolderLevels;
-(NSSet *)documentsTypes;
-(id)imageRepresentationsAvailable;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 ;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 isiOSIcon:(BOOL*)arg3 ;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 shouldTransformToAppIcon:(BOOL*)arg3 ;
-(void)forceRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)_performWhileAccessingSecurityScopedContainer:(/*^block*/id)arg1 ;
-(BOOL)isCloudSyncTCCDisabled;
-(void)setIsCloudSyncTCCDisabled:(BOOL)arg1 ;
-(BOOL)isInInitialState;
-(void)setIsInInitialState:(BOOL)arg1 ;
-(void)setIsInCloudDocsZone:(BOOL)arg1 ;
-(void)setLastServerUpdate:(NSDate *)arg1 ;
-(void)setCurrentStatus:(unsigned)arg1 ;
-(NSDate *)lastServerUpdate;
-(unsigned)currentStatus;
-(void)setOverQuota:(BOOL)arg1 ;
-(BOOL)deleteAllContentsOnClientAndServer:(id*)arg1 ;
-(BOOL)isOverQuota;
-(BOOL)_updateMetadataOnDiskWithProperties:(id)arg1 ;
-(id)versionNumberForBundleIdentifier:(id)arg1 ;
-(BOOL)hasIconWithName:(id)arg1 ;
-(id)iconURLs;
-(id)bestFittingImageDataForSize:(CGSize)arg1 shouldTransformToAppIcon:(BOOL*)arg2 ;
-(id)copyDataRepresentation;
-(BOOL)updateMetadataWithExtractorProperties:(id)arg1 iconPaths:(id)arg2 bundleID:(id)arg3 ;
-(BOOL)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2 ;
-(BOOL)registerCurrentProcessAsPriorityHintWithError:(id*)arg1 ;
@end

