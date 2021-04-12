/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol XBSnapshotManifestStore, OS_os_transaction;
@class XBSnapshotContainerIdentity, NSMutableDictionary, NSString, NSDate, XBStatusBarSettings, XBApplicationSnapshotGenerationContext, UIImage, NSDictionary, BSAtomicFlag, NSObject, XBDisplayEdgeInsetsWrapper;

@interface XBApplicationSnapshot : NSObject <NSSecureCoding, BSDescriptionProviding> {

	XBSnapshotContainerIdentity* _containerIdentity;
	id<XBSnapshotManifestStore> _store;
	NSMutableDictionary* _variantsByID;
	NSString* _identifier;
	NSString* _groupID;
	NSString* _variantID;
	NSString* _launchInterfaceIdentifier;
	NSString* _name;
	NSString* _scheme;
	NSString* _requiredOSVersion;
	NSString* _path;
	NSString* _filename;
	NSString* _relativePath;
	long long _fileLocation;
	NSDate* _creationDate;
	NSDate* _lastUsedDate;
	NSDate* _expirationDate;
	CGSize _referenceSize;
	CGRect _contentFrame;
	long long _interfaceOrientation;
	long long _userInterfaceStyle;
	long long _contentType;
	long long _fileFormat;
	double _imageScale;
	long long _imageOrientation;
	XBStatusBarSettings* _statusBarSettings;
	long long _classicMode;
	long long _compatibilityMode;
	long long _backgroundStyle;
	XBApplicationSnapshotGenerationContext* _generationContext;
	UIImage* _cachedImage;
	unsigned long long _imageAccessCount;
	NSDictionary* _extendedData;
	BOOL _invalidated;
	BOOL _fullScreen;
	BOOL _imageOpaque;
	BOOL _keepImageAccessUntilExpiration;
	BOOL _keepImageAccessForPreHeat;
	BSAtomicFlag* _hasProtectedContent;
	os_unfair_lock_s _loadImageLock;
	NSString* _baseLogIdentifier;
	NSString* _logIdentifier;
	BOOL _logContainerIdentifierDirty;
	NSObject*<OS_os_transaction> _cachedImageTransaction;
	XBDisplayEdgeInsetsWrapper* _customSafeAreaInsets;
	/*^block*/id _imageGenerator;
	CGAffineTransform _imageTransform;

}

@property (nonatomic,copy,readonly) NSString * _sortableLaunchInterfaceIdentifier; 
@property (nonatomic,copy,readonly) NSString * _sortableRequiredOSVersion; 
@property (nonatomic,copy,readonly) NSString * _sortableName; 
@property (nonatomic,copy,readonly) NSString * _sortableScheme; 
@property (nonatomic,retain,readonly) XBStatusBarSettings * _sortableStatusBarSettings; 
@property (nonatomic,readonly) unsigned long long _interfaceOrientationMask; 
@property (nonatomic,readonly) unsigned long long _contentTypeMask; 
@property (copy) XBSnapshotContainerIdentity * containerIdentity;                                              //@synthesize containerIdentity=_containerIdentity - In the implementation block
@property (setter=_setRelativePath:,getter=_relativePath,nonatomic,copy) NSString * relativePath;              //@synthesize relativePath=_relativePath - In the implementation block
@property (setter=_setPath:,nonatomic,copy) NSString * path;                                                   //@synthesize path=_path - In the implementation block
@property (setter=_setFilename:,getter=filename,nonatomic,copy) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (getter=_store,nonatomic,readonly) id<XBSnapshotManifestStore> store;                                //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSString * logIdentifier; 
@property (assign,nonatomic) long long fileLocation;                                                           //@synthesize fileLocation=_fileLocation - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                                               //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * launchInterfaceIdentifier;                                               //@synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier - In the implementation block
@property (assign,nonatomic) double imageScale;                                                                //@synthesize imageScale=_imageScale - In the implementation block
@property (assign,getter=isImageOpaque,nonatomic) BOOL imageOpaque;                                            //@synthesize imageOpaque=_imageOpaque - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;                                                 //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) long long imageOrientation;                                                       //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,copy) id imageGenerator;                                                                  //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,readonly) XBApplicationSnapshotGenerationContext * generationContext;                     //@synthesize generationContext=_generationContext - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupID;                                                        //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * scheme;                                                                  //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * requiredOSVersion;                                                       //@synthesize requiredOSVersion=_requiredOSVersion - In the implementation block
@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,readonly) long long fileFormat;                                                           //@synthesize fileFormat=_fileFormat - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastUsedDate;                                                            //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) long long contentType;                                                            //@synthesize contentType=_contentType - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                                                             //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,readonly) BOOL hasFullSizedContent; 
@property (assign,nonatomic) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long userInterfaceStyle;                                                     //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,retain) XBDisplayEdgeInsetsWrapper * customSafeAreaInsets;                                //@synthesize customSafeAreaInsets=_customSafeAreaInsets - In the implementation block
@property (nonatomic,copy) XBStatusBarSettings * statusBarSettings;                                            //@synthesize statusBarSettings=_statusBarSettings - In the implementation block
@property (assign,nonatomic) long long classicMode;                                                            //@synthesize classicMode=_classicMode - In the implementation block
@property (assign,nonatomic) long long compatibilityMode;                                                      //@synthesize compatibilityMode=_compatibilityMode - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                        //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (copy) NSDictionary * extendedData;                                                                  //@synthesize extendedData=_extendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_allSecureCodingClassesIncludingDefaultAndClientSpecified;
+(id)secureCodableCustomExtendedDataClasses;
+(id)normalizeSnapshotName:(id)arg1 ;
+(BOOL)isValidImageFileExtension:(id)arg1 ;
+(void)setSecureCodableCustomExtendedDataClasses:(id)arg1 ;
+(id)dataForImage:(id)arg1 withFormat:(long long)arg2 ;
+(CGImageRef)_createCGImageWithPreferredOptions:(id)arg1 fromCGImage:(CGImageRef)arg2 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(long long)imageOrientation;
-(void)loadImage;
-(double)imageScale;
-(long long)classicMode;
-(NSDate *)lastUsedDate;
-(void)setScheme:(NSString *)arg1 ;
-(CGRect)contentFrame;
-(id)variants;
-(void)setFullScreen:(BOOL)arg1 ;
-(void)setImageScale:(double)arg1 ;
-(BOOL)_isInvalidated;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(CGAffineTransform)imageTransform;
-(id)succinctDescription;
-(BOOL)hasProtectedContent;
-(NSString *)requiredOSVersion;
-(void)_invalidate;
-(void)setContentFrame:(CGRect)arg1 ;
-(BOOL)isFullScreen;
-(NSString *)scheme;
-(void)setImageOrientation:(long long)arg1 ;
-(BOOL)hasFullSizedContent;
-(long long)userInterfaceStyle;
-(NSString *)_sortableName;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)imageForInterfaceOrientation:(long long)arg1 ;
-(void)beginImageAccessUntilExpiration;
-(void)loadImageWithGenerationOptions:(unsigned long long)arg1 ;
-(void)setReferenceSize:(CGSize)arg1 ;
-(CGSize)naturalSize;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 includeVariants:(BOOL)arg2 ;
-(BOOL)hasCachedImage;
-(id)init;
-(XBDisplayEdgeInsetsWrapper *)customSafeAreaInsets;
-(void)setCustomSafeAreaInsets:(XBDisplayEdgeInsetsWrapper *)arg1 ;
-(long long)backgroundStyle;
-(void)_setFileLocation:(long long)arg1 ;
-(void)_beginPreHeatImageAccess;
-(void)_commonInitWithIdentifier:(id)arg1 ;
-(id)_createVariantWithIdentifier:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)filename;
-(long long)contentType;
-(void)_setFilename:(id)arg1 ;
-(NSString *)groupID;
-(long long)compatibilityMode;
-(void)_endPreHeatImageAccess;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_synchronized_evaluateImageAccessUntilExpirationEnablingIfNecessary:(BOOL)arg1 ;
-(void)setStatusBarSettings:(XBStatusBarSettings *)arg1 ;
-(BOOL)_validateWithContainerIdentity:(id)arg1 ;
-(id)descriptionForStateCaptureWithMultilinePrefix:(id)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setImageGenerator:(id)arg1 ;
-(NSString *)path;
-(XBApplicationSnapshotGenerationContext *)generationContext;
-(NSString *)logIdentifier;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(unsigned long long)_interfaceOrientationMask;
-(NSString *)_sortableLaunchInterfaceIdentifier;
-(void)endImageAccess;
-(void)purgeImage;
-(id)cachedImageForInterfaceOrientation:(long long)arg1 ;
-(NSString *)launchInterfaceIdentifier;
-(id)_configureDefaultPathWithinGroupForFormat:(long long)arg1 ;
-(id)descriptionWithoutVariants;
-(NSString *)name;
-(CGSize)referenceSize;
-(XBStatusBarSettings *)_sortableStatusBarSettings;
-(BOOL)_synchronized_hasCachedImage:(id*)arg1 ;
-(id)_determineRelativePathForPath:(id)arg1 location:(long long*)arg2 ;
-(long long)_fileLocation;
-(NSString *)description;
-(id)_store;
-(BOOL)isValid;
-(id)_initWithContainerIdentity:(id)arg1 store:(id)arg2 groupID:(id)arg3 generationContext:(id)arg4 ;
-(NSDate *)creationDate;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(BOOL)_generateImageIfPossible;
-(long long)interfaceOrientation;
-(void)setBackgroundStyle:(long long)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)_synchronized_isExpired;
-(BOOL)fileExists;
-(XBStatusBarSettings *)statusBarSettings;
-(void)_setHasProtectedContent:(BOOL)arg1 ;
-(BOOL)isExpired;
-(void)setExtendedData:(NSDictionary *)arg1 ;
-(void)setFileLocation:(long long)arg1 ;
-(BOOL)_hasGenerationContext;
-(void)setVariantID:(NSString *)arg1 ;
-(NSString *)_sortableScheme;
-(unsigned long long)hash;
-(NSString *)_sortableRequiredOSVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(id)_cachedImage;
-(BOOL)isImageOpaque;
-(void)setContentType:(long long)arg1 ;
-(unsigned long long)_contentTypeMask;
-(void)setContainerIdentity:(XBSnapshotContainerIdentity *)arg1 ;
-(void)_manifestQueueDecode_setStore:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)fileFormat;
-(void)_purgeCachedImageIfAppropriate:(BOOL)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)imageGenerator;
-(BOOL)isValidWithReason:(id*)arg1 ;
-(void)setClassicMode:(long long)arg1 ;
-(NSDictionary *)extendedData;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(id)succinctDescriptionBuilder;
-(void)setCompatibilityMode:(long long)arg1 ;
-(void)setImageOpaque:(BOOL)arg1 ;
-(id)variantWithIdentifier:(id)arg1 ;
-(void)_cacheImage:(id)arg1 ;
-(BOOL)_shouldDeleteFileOnPurge:(id*)arg1 ;
-(id)_sanitizedPathForPath:(id)arg1 ;
-(id)imageForInterfaceOrientation:(long long)arg1 generationOptions:(unsigned long long)arg2 ;
-(NSString *)variantID;
-(void)_setPath:(id)arg1 ;
-(void)beginImageAccess;
-(void)loadImageForPreHeat;
-(BOOL)isEqual:(id)arg1 ;
-(long long)fileLocation;
-(void)dealloc;
-(void)_setRelativePath:(id)arg1 ;
-(void)_configureWithPath:(id)arg1 ;
-(id)_relativePath;
-(CGRect)_referenceBounds;
-(BOOL)_path:(id)arg1 isRelativeToPath:(id)arg2 outRelativePath:(id*)arg3 ;
@end

