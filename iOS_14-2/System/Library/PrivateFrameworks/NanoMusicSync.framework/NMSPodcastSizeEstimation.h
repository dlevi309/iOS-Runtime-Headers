/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSMutableDictionary;

@interface NMSPodcastSizeEstimation : NSObject {

	BOOL _empty;
	double _totalSizeDurationRatio;
	unsigned long long _totalAverageSize;
	NSMutableDictionary* _sizeInfoDict;

}

@property (retain) NSMutableDictionary * sizeInfoDict;                 //@synthesize sizeInfoDict=_sizeInfoDict - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(unsigned long long)_minimumSizeThreshold;
+(unsigned long long)_defaultEstimatedSize;
+(double)_defaultSizeDurationRatio;
-(id)init;
-(void)synchronize;
-(BOOL)isEmpty;
-(void)_setupFromCache;
-(NSMutableDictionary *)sizeInfoDict;
-(double)_adjustedSizeDurationRatio:(double)arg1 ;
-(unsigned long long)sizeForFeedURL:(id)arg1 duration:(double)arg2 feedProvidedSize:(unsigned long long)arg3 ;
-(id)_cachedPodcastSizeInfoDict;
-(double)_totalSizeDurationRatio;
-(unsigned long long)_totalAverageSize;
-(BOOL)incrementSize:(unsigned long long)arg1 duration:(double)arg2 forFeedURL:(id)arg3 ;
-(unsigned long long)averageEpisodeSize;
-(void)setSizeInfoDict:(NSMutableDictionary *)arg1 ;
@end

