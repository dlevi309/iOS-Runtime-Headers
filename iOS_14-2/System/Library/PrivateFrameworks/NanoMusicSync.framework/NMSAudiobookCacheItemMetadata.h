/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@interface NMSAudiobookCacheItemMetadata : NSObject {

	double _cachedStartTime;
	double _cachedDuration;

}

@property (assign,nonatomic) double cachedStartTime;              //@synthesize cachedStartTime=_cachedStartTime - In the implementation block
@property (assign,nonatomic) double cachedDuration;               //@synthesize cachedDuration=_cachedDuration - In the implementation block
+(id)metaDataForMediaItem:(id)arg1 ;
-(BOOL)_loadForMediaItem:(id)arg1 ;
-(id)_baseDirectoryForMediaItem:(id)arg1 ;
-(void)setCachedStartTime:(double)arg1 ;
-(void)setCachedDuration:(double)arg1 ;
-(double)cachedStartTime;
-(double)cachedDuration;
@end

