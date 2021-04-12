/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType;
@class FCAsyncOnceOperation, NFLazy, FCThreadSafeMutableDictionary, NSString;

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate> {

	id<FCAVAssetCacheType> _assetCache;
	id<FCAVAssetKeyCacheType> _keyCache;
	FCAsyncOnceOperation* _restoreBackgroundDownloadsOnce;
	NFLazy* _URLSession;
	FCThreadSafeMutableDictionary* _activeDownloadsByAssetID;

}

@property (nonatomic,readonly) id<FCAVAssetCacheType> assetCache;                                     //@synthesize assetCache=_assetCache - In the implementation block
@property (nonatomic,readonly) id<FCAVAssetKeyCacheType> keyCache;                                    //@synthesize keyCache=_keyCache - In the implementation block
@property (nonatomic,readonly) FCAsyncOnceOperation * restoreBackgroundDownloadsOnce;                 //@synthesize restoreBackgroundDownloadsOnce=_restoreBackgroundDownloadsOnce - In the implementation block
@property (nonatomic,readonly) NFLazy * URLSession;                                                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * activeDownloadsByAssetID;              //@synthesize activeDownloadsByAssetID=_activeDownloadsByAssetID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(id<FCAVAssetKeyCacheType>)keyCache;
-(id)downloadAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<FCAVAssetCacheType>)assetCache;
-(void)_callCompletionHandlersForAssetID:(id)arg1 interestToken:(id)arg2 error:(id)arg3 ;
-(NFLazy *)URLSession;
-(void)_ensureAssetIsPurgeable:(id)arg1 ;
-(id)_handleAssetDownloadFromNetwork:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAssetCache:(id)arg1 keyCache:(id)arg2 ;
-(id)_restoreBackgroundDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_shouldUseAVAssetDownloadForAsset:(id)arg1 ;
-(void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(FCThreadSafeMutableDictionary *)activeDownloadsByAssetID;
-(BOOL)_isAssetInCache:(id)arg1 ;
-(void)_completeRequestForAssetID:(id)arg1 withDownloadedURL:(id)arg2 remoteURL:(id)arg3 error:(id)arg4 ;
-(id)interestTokenForCachedAsset:(id)arg1 ;
-(FCAsyncOnceOperation *)restoreBackgroundDownloadsOnce;
-(void)restoreBackgroundDownloadsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

