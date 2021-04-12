/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContent, PKImageSet, PKDisplayTraitCollection, NSString, NSData, PKDataAccessor, PKDisplayProfile, NSURL;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {

	os_unfair_lock_s _lock;
	PKContent* _content;
	PKImageSet* _imageSets[7];
	PKDisplayTraitCollection* _preferredDisplayTraits;
	BOOL _initializedViaInitWithCoder;
	NSString* _uniqueID;
	NSData* _manifestHash;
	PKDataAccessor* _dataAccessor;
	PKDisplayProfile* _displayProfile;
	NSURL* _webServiceURL;
	NSString* _authenticationToken;
	unsigned long long _settings;
	long long _shareCount;
	double _preferredImageScale;
	NSString* _preferredImageSuffix;

}

@property (nonatomic,copy) NSString * uniqueID;                                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSData * manifestHash;                                            //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) PKDataAccessor * dataAccessor;                                  //@synthesize dataAccessor=_dataAccessor - In the implementation block
@property (nonatomic,retain) PKDisplayProfile * displayProfile;                              //@synthesize displayProfile=_displayProfile - In the implementation block
@property (nonatomic,copy) NSURL * webServiceURL;                                            //@synthesize webServiceURL=_webServiceURL - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                                   //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) unsigned long long settings;                                    //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long shareCount;                                           //@synthesize shareCount=_shareCount - In the implementation block
@property (nonatomic,readonly) BOOL initializedViaInitWithCoder;                             //@synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder - In the implementation block
@property (assign,nonatomic) double preferredImageScale;                                     //@synthesize preferredImageScale=_preferredImageScale - In the implementation block
@property (nonatomic,retain) NSString * preferredImageSuffix;                                //@synthesize preferredImageSuffix=_preferredImageSuffix - In the implementation block
@property (nonatomic,retain) PKDisplayTraitCollection * preferredDisplayTraits; 
+(unsigned long long)defaultSettings;
+(BOOL)supportsSecureCoding;
+(Class)resolvingClass;
+(id)createWithFileURL:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(id)createWithFileDataAccessor:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(id)_createWithFileDataAccessor:(id)arg1 validate:(BOOL)arg2 warnings:(id*)arg3 error:(id*)arg4 ;
+(id)createWithValidatedFileDataAccessor:(id)arg1 ;
+(BOOL)isValidObjectWithFileDataAccessor:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(id)createWithData:(id)arg1 warnings:(id*)arg2 error:(id*)arg3 ;
+(Class)classForDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)modificationDate;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(id)content;
-(id)init;
-(void)setContent:(id)arg1 ;
-(void)loadContentSync;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettings:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(long long)shareCount;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)settings;
-(void)flushFormattedFieldValues;
-(BOOL)isContentLoaded;
-(void)_lock_flushLoadedImageSets;
-(BOOL)isImageSetLoaded:(long long)arg1 ;
-(PKDisplayTraitCollection *)preferredDisplayTraits;
-(void)setImageSet:(id)arg1 forImageSetType:(long long)arg2 ;
-(double)preferredImageScale;
-(NSString *)preferredImageSuffix;
-(PKDisplayProfile *)displayProfile;
-(void)setShareCount:(long long)arg1 ;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDisplayProfile:(PKDisplayProfile *)arg1 ;
-(void)setWebServiceURL:(NSURL *)arg1 ;
-(void)loadImageSetSync:(long long)arg1 preheat:(BOOL)arg2 ;
-(id)imageSetLoadedIfNeeded:(long long)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)flushLoadedContent;
-(void)loadContentAsyncWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreferredDisplayTraits:(PKDisplayTraitCollection *)arg1 ;
-(void)loadCachedImageSet:(long long)arg1 ;
-(void)loadImageSetAsync:(long long)arg1 preheat:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)flushLoadedImageSets;
-(id)localizedString:(id)arg1 ;
-(void)reloadDisplayProfileOfType:(long long)arg1 ;
-(void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1 ;
-(BOOL)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2 ;
-(void)setMissingImageSetsFromObject:(id)arg1 ;
-(PKDataAccessor *)dataAccessor;
-(void)setPreferredImageScale:(double)arg1 ;
-(void)setPreferredImageSuffix:(NSString *)arg1 ;
-(void)setDataAccessor:(PKDataAccessor *)arg1 ;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)initializedViaInitWithCoder;
-(id)contentLoadedIfNeeded;
-(id)initWithCoder:(id)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(id)archiveData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)webServiceURL;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(NSData *)manifestHash;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
@end

