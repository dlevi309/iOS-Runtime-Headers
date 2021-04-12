/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline,nonatomic,readonly) BOOL playableOffline; 
+(id)assetCacheWithURL:(id)arg1 ;
+(id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(long long)currentSize;
-(long long)maxEntrySize;
-(BOOL)isPlayableOffline;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(long long)maxSize;
-(id)URL;
-(id)_init;
-(id)allKeys;
@end

