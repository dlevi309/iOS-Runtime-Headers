/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@class NSDictionary, NSString;

@interface MAAsset : NSObject {

	NSDictionary* _attributes;
	NSString* _assetType;
	NSString* _assetId;
	long long _state;

}

@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                   //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * assetId;                     //@synthesize assetId=_assetId - In the implementation block
@property (readonly) long long state;                                  //@synthesize state=_state - In the implementation block
+(void)startCatalogDownload:(id)arg1 options:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
+(id)getLoadResultFromMessage:(id)arg1 ;
+(void)cancelCatalogDownload:(id)arg1 then:(/*^block*/id)arg2 ;
+(void)startCatalogDownload:(id)arg1 then:(/*^block*/id)arg2 ;
+(id)loadSync:(id)arg1 error:(id*)arg2 ;
+(id)loadSync:(id)arg1 allowingDifferences:(id)arg2 error:(id*)arg3 ;
+(void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
-(long long)assetVersion;
-(long long)formatVersion;
-(BOOL)isMTModel;
-(BOOL)isPhrasebook;
-(BOOL)matchesAsset:(id)arg1 ;
-(BOOL)isNewerCompatibleVersionThan:(id)arg1 ;
-(BOOL)isInstalled;
-(long long)compareAssetVersionReversed:(id)arg1 ;
-(BOOL)isASRModel;
-(BOOL)isANEModel;
-(BOOL)transcribesLocale:(id)arg1 ;
-(long long)requiredCapabilityIdentifier;
-(BOOL)isCompatibleWithThisDevice;
-(BOOL)isNewerVersionThan:(id)arg1 ;
-(BOOL)isCurrentlyAvailable;
-(id)localeIdentifiers;
-(BOOL)canBePurged;
-(BOOL)translatesLanguagePair:(id)arg1 ;
-(BOOL)isDownloading;
-(BOOL)isConfig;
-(id)identifier;
-(id)_version;
-(id)path;
-(id)_compatibilityVersion;
-(id)_footprint;
-(BOOL)canBePurged;
-(BOOL)isDownloading;
-(BOOL)isPremium;
-(id)getCSAssetOfType:(unsigned long long)arg1 ;
-(BOOL)isCSAssetInstalled;
-(BOOL)isLatestCompareTo:(id)arg1 ;
-(id)_version;
-(id)path;
-(id)_compatibilityVersion;
-(id)_footprint;
-(BOOL)canBePurged;
-(BOOL)isDownloading;
-(BOOL)isPremium;
-(id)getCSAssetOfType:(unsigned long long)arg1 ;
-(BOOL)isCSAssetInstalled;
-(BOOL)isLatestCompareTo:(id)arg1 ;
-(id)compatibilityVersion;
-(id)languages;
-(id)path;
-(id)description;
-(BOOL)canBePurged;
-(BOOL)isDownloading;
-(BOOL)isAvailableLocally;
-(BOOL)isPremium;
-(id)version;
-(id)footprint;
-(BOOL)isLatestCompareTo:(id)arg1 ;
-(BOOL)isVTAssetInstalled;
-(long long)_formatVersion;
-(long long)_contentVersion;
-(NSString *)assetType;
-(void)purge:(/*^block*/id)arg1 ;
-(NSString *)assetId;
-(BOOL)refreshState;
-(BOOL)nonUserInitiatedDownloadsAllowed;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(BOOL)wasLocal;
-(id)absoluteAssetId;
-(id)getLocalFilePath;
-(id)getLocalUrl;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 options:(id)arg2 completionWithError:(/*^block*/id)arg3 ;
-(id)hashToString:(id)arg1 ;
-(void)invokeClientDownloadCompletion:(long long)arg1 asset:(id)arg2 completionBlockWithError:(/*^block*/id)arg3 ;
-(void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)startDownload:(id)arg1 completionWithError:(/*^block*/id)arg2 ;
-(id)createExtractor;
-(id)assetProperty:(id)arg1 ;
-(long long)calculateTimeout;
-(void)invokeClientDownloadCompletionAlreadyOnQueue:(long long)arg1 asset:(id)arg2 completionBlockWithError:(/*^block*/id)arg3 ;
-(void)purgeWithError:(/*^block*/id)arg1 ;
-(BOOL)wasPreinstalled;
-(BOOL)wasInCatalog;
-(BOOL)wasDownloadable;
-(id)assetServerUrl;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)cancelDownloadSync;
-(void)configDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)configDownloadSync:(id)arg1 ;
-(BOOL)overrideGarbageCollectionThreshold:(unsigned long long)arg1 ;
-(BOOL)spaceCheck:(long long*)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(long long)purgeSync;
-(NSDictionary *)attributes;
-(id)description;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)attachProgressCallBack:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)logAsset;
-(BOOL)wasPurgeable;
-(long long)state;
-(void)startDownload:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)getLocalFileUrl;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

