/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSString, FPProviderDomain, PSUsageBundleApp, NSArray, LSApplicationProxy, NSDate;

@interface STStorageApp : NSObject {

	long long _purgeableSize;
	BOOL _isDeleting;
	BOOL _isDemoting;
	BOOL _isApple;
	BOOL _isUserApp;
	BOOL _isSystemApp;
	BOOL _isInternalApp;
	BOOL _isDocumentApp;
	BOOL _specialSizePending;
	BOOL _isPseudoApp;
	NSString* _appIdentifier;
	FPProviderDomain* _fpDomain;
	NSString* _name;
	NSString* _bundleIdentifier;
	PSUsageBundleApp* _usageBundleApp;
	NSArray* _mediaTypes;
	long long _externalDataSize;
	long long _sharedDataSize;
	long long _specialSize;
	long long _coreMLDataSize;

}

@property (retain) NSString * appIdentifier;                               //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (retain) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) LSApplicationProxy * appProxy; 
@property (retain) FPProviderDomain * fpDomain;                            //@synthesize fpDomain=_fpDomain - In the implementation block
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * vendorName; 
@property (readonly) NSString * versionString; 
@property (readonly) NSArray * documents; 
@property (readonly) long long purgeableSize; 
@property (readonly) long long staticSize; 
@property (readonly) long long dynamicSize; 
@property (readonly) long long dataSize; 
@property (readonly) long long totalSize; 
@property (readonly) BOOL isDeletable; 
@property (readonly) BOOL isDemotable; 
@property (readonly) BOOL isDemoted; 
@property (readonly) BOOL isDeleted; 
@property (readonly) BOOL isUsageApp; 
@property (assign) BOOL isUserApp;                                         //@synthesize isUserApp=_isUserApp - In the implementation block
@property (assign) BOOL isSystemApp;                                       //@synthesize isSystemApp=_isSystemApp - In the implementation block
@property (assign) BOOL isInternalApp;                                     //@synthesize isInternalApp=_isInternalApp - In the implementation block
@property (assign) BOOL isDocumentApp;                                     //@synthesize isDocumentApp=_isDocumentApp - In the implementation block
@property (assign) BOOL specialSizePending;                                //@synthesize specialSizePending=_specialSizePending - In the implementation block
@property (readonly) NSDate * lastUsedDate; 
@property (readonly) NSDate * installDate; 
@property (retain) PSUsageBundleApp * usageBundleApp;                      //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSArray * mediaTypes;                         //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign) long long externalDataSize;                             //@synthesize externalDataSize=_externalDataSize - In the implementation block
@property (assign) long long sharedDataSize;                               //@synthesize sharedDataSize=_sharedDataSize - In the implementation block
@property (assign) long long specialSize;                                  //@synthesize specialSize=_specialSize - In the implementation block
@property (assign) long long coreMLDataSize;                               //@synthesize coreMLDataSize=_coreMLDataSize - In the implementation block
@property (assign) BOOL isPseudoApp;                                       //@synthesize isPseudoApp=_isPseudoApp - In the implementation block
+(void)notifyAppsUpdated;
+(void)_notifyAppsUpdated:(id)arg1 ;
+(void)setLaunchDatesNeedUpdating;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundleVersion;
-(BOOL)isDeletable;
-(NSString *)vendorName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)versionString;
-(NSDate *)installDate;
-(NSArray *)mediaTypes;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(id)initWithApplicationProxy:(id)arg1 ;
-(NSDate *)lastUsedDate;
-(BOOL)isDeleted;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(long long)totalSize;
-(PSUsageBundleApp *)usageBundleApp;
-(void)setUsageBundleApp:(PSUsageBundleApp *)arg1 ;
-(long long)dataSize;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(NSArray *)documents;
-(BOOL)isSystemApp;
-(long long)purgeableSize;
-(LSApplicationProxy *)appProxy;
-(void)reloadProxy;
-(long long)dynamicSize;
-(long long)specialSize;
-(long long)externalDataSize;
-(long long)sharedDataSize;
-(long long)coreMLDataSize;
-(long long)staticSize;
-(void)setSpecialSizePending:(BOOL)arg1 ;
-(FPProviderDomain *)fpDomain;
-(void)setSpecialSize:(long long)arg1 ;
-(BOOL)isUsageApp;
-(BOOL)isDemotable;
-(BOOL)isDemoted;
-(void)updateSpecialSize;
-(void)setFpDomain:(FPProviderDomain *)arg1 ;
-(BOOL)isUserApp;
-(void)setIsUserApp:(BOOL)arg1 ;
-(void)setIsSystemApp:(BOOL)arg1 ;
-(BOOL)isInternalApp;
-(void)setIsInternalApp:(BOOL)arg1 ;
-(BOOL)isDocumentApp;
-(void)setIsDocumentApp:(BOOL)arg1 ;
-(BOOL)specialSizePending;
-(void)setExternalDataSize:(long long)arg1 ;
-(void)setSharedDataSize:(long long)arg1 ;
-(void)setCoreMLDataSize:(long long)arg1 ;
-(BOOL)isPseudoApp;
-(void)setIsPseudoApp:(BOOL)arg1 ;
@end

