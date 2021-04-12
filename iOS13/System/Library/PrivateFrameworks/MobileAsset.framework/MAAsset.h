/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
+(void)startCatalogDownload:(id)arg1 then:(/*^block*/id)arg2 ;
-(BOOL)vs_isInstalled;
-(long long)_formatVersion;
-(long long)_contentVersion;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)attributes;
-(long long)state;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(void)attachProgressCallBack:(/*^block*/id)arg1 ;
-(void)startDownload:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)getLocalFileUrl;
-(id)initWithAttributes:(id)arg1 ;
-(NSString *)assetId;
-(BOOL)refreshState;
-(long long)purgeSync;
-(NSString *)assetType;
-(void)startDownload:(/*^block*/id)arg1 ;
-(void)purge:(/*^block*/id)arg1 ;
-(void)logAsset;
-(id)getLocalUrl;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)hashToString:(id)arg1 ;
-(void)invokeClientCompletion:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(/*^block*/id)arg3 ;
-(id)createExtractor;
-(id)assetProperty:(id)arg1 ;
-(long long)calculateTimeout;
-(id)assetServerUrl;
-(void)startDownloadWithExtractor:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)cancelDownloadSync;
-(void)configDownload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)configDownloadSync:(id)arg1 ;
-(BOOL)overrideGarbageCollectionThreshold:(unsigned long long)arg1 ;
-(BOOL)spaceCheck:(long long*)arg1 ;
@end

