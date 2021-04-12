/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {

	AVManagedAssetCacheInternal* _priv;

}
+(id)assetCacheWithURL:(id)arg1 ;
+(id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1 ;
-(void)setMaxSize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(long long)currentSize;
-(long long)maxEntrySize;
-(BOOL)isPlayableOffline;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(void)setMaxEntrySize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 enableCRABSCache:(BOOL)arg2 enableHLSCache:(BOOL)arg3 ;
-(long long)maxSize;
-(id)URL;
-(BOOL)isProgressiveDownloadCacheEnabled;
-(BOOL)isHTTPLiveStreamingCacheEnabled;
-(id)allKeys;
-(void)dealloc;
@end

