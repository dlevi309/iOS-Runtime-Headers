/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@interface PHImageRequestBehaviorSpec : NSObject {

	BOOL _synchronous;
	BOOL _networkAccessAllowed;
	BOOL _allowPlaceholder;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	BOOL _includeHDRGainMap;
	BOOL _includeHDRGainMapInIntermediateImage;
	BOOL _useLowMemoryMode;
	BOOL _useLimitedLibraryMode;
	long long _choosingPolicy;
	unsigned long long _loadingOptions;
	long long _version;
	long long _resizeMode;
	double _minimumTableThumbnailLongSide;
	long long _downloadIntent;

}

@property (assign,nonatomic) long long choosingPolicy;                                             //@synthesize choosingPolicy=_choosingPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long loadingOptions;                                    //@synthesize loadingOptions=_loadingOptions - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;                     //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (assign,nonatomic) BOOL includeHDRGainMap;                                               //@synthesize includeHDRGainMap=_includeHDRGainMap - In the implementation block
@property (assign,nonatomic) BOOL includeHDRGainMapInIntermediateImage;                            //@synthesize includeHDRGainMapInIntermediateImage=_includeHDRGainMapInIntermediateImage - In the implementation block
@property (assign,nonatomic) double minimumTableThumbnailLongSide;                                 //@synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide - In the implementation block
@property (assign,nonatomic) BOOL useLowMemoryMode;                                                //@synthesize useLowMemoryMode=_useLowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL useLimitedLibraryMode;                                           //@synthesize useLimitedLibraryMode=_useLimitedLibraryMode - In the implementation block
@property (assign,nonatomic) long long downloadIntent;                                             //@synthesize downloadIntent=_downloadIntent - In the implementation block
+(unsigned long long)loadingOptionsFromLoadingMode:(long long)arg1 ;
-(void)setDownloadIntent:(long long)arg1 ;
-(unsigned long long)loadingOptions;
-(BOOL)includeHDRGainMapInIntermediateImage;
-(long long)choosingPolicy;
-(long long)resizeMode;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(id)shortDescription;
-(BOOL)isSynchronous;
-(BOOL)useLimitedLibraryMode;
-(long long)downloadIntent;
-(id)description;
-(BOOL)includeHDRGainMap;
-(BOOL)shouldLoadImage;
-(void)setMinimumTableThumbnailLongSide:(double)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setLoadingOptions:(unsigned long long)arg1 ;
-(void)setIncludeHDRGainMapInIntermediateImage:(BOOL)arg1 ;
-(BOOL)shouldLoadDataOrURL;
-(BOOL)shouldLoadURL;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setChoosingPolicy:(long long)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(double)minimumTableThumbnailLongSide;
-(void)setVersion:(long long)arg1 ;
-(BOOL)shouldLoadData;
-(void)setUseLowMemoryMode:(BOOL)arg1 ;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
-(BOOL)allowPlaceholder;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)useLowMemoryMode;
-(void)setIncludeHDRGainMap:(BOOL)arg1 ;
-(void)setUseLimitedLibraryMode:(BOOL)arg1 ;
@end

