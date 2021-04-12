/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface NMSPodcastSizeCache : NSObject {

	NSDictionary* _episodeSizeInfoDict;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _relationshipDict;

}

@property (nonatomic,readonly) NSDictionary * relationshipDict;                 //@synthesize relationshipDict=_relationshipDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * episodeSizeInfoDict; 
+(id)_podcastSizeCacheFilePath;
-(id)init;
-(void)dealloc;
-(void)_setupFromCache;
-(id)_initWithCache:(BOOL)arg1 ;
-(void)_registerForCacheChanged;
-(id)_cachedPodcastEpisodeSizeDictionary;
-(id)itemsForFeedURL:(id)arg1 ;
-(NSDictionary *)episodeSizeInfoDict;
-(NSDictionary *)relationshipDict;
@end

