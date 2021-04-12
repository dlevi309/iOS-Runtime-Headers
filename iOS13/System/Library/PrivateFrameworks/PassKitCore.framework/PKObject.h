/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContent, PKImageSet, NSString, NSData, PKDataAccessor, PKDisplayProfile, NSURL;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {

	PKContent* _content;
	PKImageSet* _imageSets[7];
	os_unfair_lock_s _lock;
	BOOL _initializedViaInitWithCoder;
	NSString* _uniqueID;
	NSData* _manifestHash;
	PKDataAccessor* _dataAccessor;
	PKDisplayProfile* _displayProfile;
	double _preferredImageScale;
	NSString* _preferredImageSuffix;
	NSURL* _webServiceURL;
	NSString* _authenticationToken;
	unsigned long long _settings;
	long long _shareCount;

}

@property (nonatomic,copy) NSString * uniqueID;                               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSData * manifestHash;                             //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) PKDataAccessor * dataAccessor;                   //@synthesize dataAccessor=_dataAccessor - In the implementation block
@property (nonatomic,retain) PKDisplayProfile * displayProfile;               //@synthesize displayProfile=_displayProfile - In the implementation block
@property (assign,nonatomic) double preferredImageScale;                      //@synthesize preferredImageScale=_preferredImageScale - In the implementation block
@property (nonatomic,retain) NSString * preferredImageSuffix;                 //@synthesize preferredImageSuffix=_preferredImageSuffix - In the implementation block
@property (nonatomic,copy) NSURL * webServiceURL;                             //@synthesize webServiceURL=_webServiceURL - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                    //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) unsigned long long settings;                     //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long shareCount;                            //@synthesize shareCount=_shareCount - In the implementation block
@property (nonatomic,readonly) BOOL initializedViaInitWithCoder;              //@synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)defaultSettings;
+(BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueID;
-(id)modificationDate;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)settings;
-(void)setSettings:(unsigned long long)arg1 ;
-(id)content;
-(void)setContent:(id)arg1 ;
-(id)archiveData;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)loadContentSync;
-(long long)shareCount;
-(void)setShareCount:(long long)arg1 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(NSData *)manifestHash;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(PKDataAccessor *)dataAccessor;
-(void)setDataAccessor:(PKDataAccessor *)arg1 ;
-(BOOL)initializedViaInitWithCoder;
-(id)contentLoadedIfNeeded;
-(void)setManifestHash:(NSData *)arg1 ;
-(NSURL *)webServiceURL;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(id)initWithFileDataAccessor:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(id)initWithFileURL:(id)arg1 validate:(BOOL)arg2 warnings:(id*)arg3 orError:(id*)arg4 ;
-(BOOL)isContentLoaded;
-(void)flushFormattedFieldValues;
-(BOOL)isImageSetLoaded:(long long)arg1 ;
-(double)preferredImageScale;
-(NSString *)preferredImageSuffix;
-(PKDisplayProfile *)displayProfile;
-(void)setImageSet:(id)arg1 forImageSetType:(long long)arg2 ;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDisplayProfile:(PKDisplayProfile *)arg1 ;
-(void)loadImageSetSync:(long long)arg1 preheat:(BOOL)arg2 ;
-(id)imageSetLoadedIfNeeded:(long long)arg1 ;
-(void)setWebServiceURL:(NSURL *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)loadContentAsyncWithCompletion:(/*^block*/id)arg1 ;
-(void)flushLoadedContent;
-(void)loadImageSetAsync:(long long)arg1 preheat:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)flushLoadedImageSets;
-(void)updateImageSetForURL:(id)arg1 withCacheURL:(id)arg2 ;
-(id)localizedString:(id)arg1 ;
-(void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1 ;
-(void)reloadDisplayProfileOfType:(long long)arg1 ;
-(BOOL)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2 ;
-(void)setMissingImageSetsFromObject:(id)arg1 ;
-(void)setPreferredImageScale:(double)arg1 ;
-(void)setPreferredImageSuffix:(NSString *)arg1 ;
@end

