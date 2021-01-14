/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHMediaRequestThreadingOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PHImageRequestOptions : NSObject <PHMediaRequestThreadingOptions, NSCopying> {

	int _requestID;
	BOOL _networkAccessAllowed;
	BOOL _synchronous;
	BOOL _allowPlaceholder;
	BOOL _allowSecondaryOpportunisticImage;
	BOOL _includeHDRGainMap;
	BOOL _includeHDRGainMapInIntermediateImage;
	BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
	BOOL _useLowMemoryMode;
	BOOL _useLimitedLibraryMode;
	long long _version;
	long long _deliveryMode;
	long long _resizeMode;
	/*^block*/id _progressHandler;
	long long _loadingMode;
	NSObject*<OS_dispatch_queue> _resultHandlerQueue;
	/*^block*/id _cachingCompleteHandler;
	long long _downloadIntent;
	CGRect _normalizedCropRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long loadingMode;                                                //@synthesize loadingMode=_loadingMode - In the implementation block
@property (assign,nonatomic) BOOL allowPlaceholder;                                                //@synthesize allowPlaceholder=_allowPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL allowSecondaryOpportunisticImage;                                //@synthesize allowSecondaryOpportunisticImage=_allowSecondaryOpportunisticImage - In the implementation block
@property (assign,nonatomic) BOOL includeHDRGainMap;                                               //@synthesize includeHDRGainMap=_includeHDRGainMap - In the implementation block
@property (assign,nonatomic) BOOL includeHDRGainMapInIntermediateImage;                            //@synthesize includeHDRGainMapInIntermediateImage=_includeHDRGainMapInIntermediateImage - In the implementation block
@property (assign,nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;                     //@synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultHandlerQueue;                      //@synthesize resultHandlerQueue=_resultHandlerQueue - In the implementation block
@property (nonatomic,copy) id cachingCompleteHandler;                                              //@synthesize cachingCompleteHandler=_cachingCompleteHandler - In the implementation block
@property (assign,nonatomic) BOOL useLowMemoryMode;                                                //@synthesize useLowMemoryMode=_useLowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL useLimitedLibraryMode;                                           //@synthesize useLimitedLibraryMode=_useLimitedLibraryMode - In the implementation block
@property (assign,nonatomic) long long downloadIntent;                                             //@synthesize downloadIntent=_downloadIntent - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,nonatomic) long long resizeMode;                                                 //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;                                            //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,getter=isSynchronous,nonatomic) BOOL synchronous;                                //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
+(id)defaultOptionsAllowingPlaceholder;
-(void)setDownloadIntent:(long long)arg1 ;
-(void)setLoadingMode:(long long)arg1 ;
-(BOOL)includeHDRGainMapInIntermediateImage;
-(id)init;
-(long long)resizeMode;
-(void)setOnlyUseFetchedAssetPropertiesDuringChoosing:(BOOL)arg1 ;
-(void)setResultHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSynchronous;
-(long long)loadingMode;
-(CGRect)normalizedCropRect;
-(NSObject*<OS_dispatch_queue>)resultHandlerQueue;
-(BOOL)allowSecondaryOpportunisticImage;
-(BOOL)useLimitedLibraryMode;
-(long long)downloadIntent;
-(NSString *)description;
-(BOOL)includeHDRGainMap;
-(void)setProgressHandler:(id)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setIncludeHDRGainMapInIntermediateImage:(BOOL)arg1 ;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(void)setAllowSecondaryOpportunisticImage:(BOOL)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setCachingCompleteHandler:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(id)progressHandler;
-(long long)deliveryMode;
-(void)setUseLowMemoryMode:(BOOL)arg1 ;
-(BOOL)onlyUseFetchedAssetPropertiesDuringChoosing;
-(void)setAllowPlaceholder:(BOOL)arg1 ;
-(BOOL)allowPlaceholder;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
-(BOOL)useLowMemoryMode;
-(void)setIncludeHDRGainMap:(BOOL)arg1 ;
-(void)setUseLimitedLibraryMode:(BOOL)arg1 ;
-(id)cachingCompleteHandler;
@end

